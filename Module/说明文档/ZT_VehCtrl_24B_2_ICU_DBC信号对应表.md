# ZT_VehCtrl_24B_2 ICU 与 DBC 信号对应表

_模型：`ZT_VehCtrl_24B_2.slx`；核对日期：2026-09-29；表内顺序严格遵循 DBC 的 `BO_`/`SG_` 出现顺序_

---

## 📋 核对范围与结论

`ZT_VehCtrl_24B_2/VehCtrl/ICU` 实际是 `VehCtrl` 的第 4 个 Outport，不是独立子系统。实际发送链路是：

`VehCtrl/ICU` → `SigOut/ICU1`、`SigOut/ICU2` → 7 个 CAN Pack → FCAN Send。

DBC 顺序以 [`整车CANA_GBK._Valid.dbc`](../CAN_DBC/有效CAN信号/整车CANA_GBK._Valid.dbc) 为准，并与 [`CAN20260922.dbc`](../CAN_DBC/所有CAN信号/CAN20260922.dbc) 逐项比对；两者的 7 条 `VCU2ICUInfor` 报文及报文内信号顺序一致。

| 分类 | 数量 | 含义 |
| --- | ---: | --- |
| 一致 | 34 | DBC 信号与模型实际来源/算法对应 |
| 空缺：固定 0 | 23 | DBC 有定义，但模型用 `Constant 0` 占位发送 |
| 错位 | 0 | 当前模型未发现 CAN Pack 端口错位 |
| 需确认 | 1 | `VCU_WrkSt_enum` 实际接 `Ready`，模型内同名计算信号未使用 |
| 合计 | 58 | 7 条报文的全部信号 |

阈值来自 [`VCU_INIT.m`](../MainModel/VCU_INIT.m)：`SOCLowTh=20`、`BatoverTempTh=80`、`MtrTempAlarmTh=50`、`MCUTempAlarmTh=60`、`mps2kmh=3.6`。

## 📚 按 DBC 顺序的完整对应表

### VCU2ICUInfor1（0x180128D0）

| DBC序号 | ICU信号名 | 模型实际来源 | 判断条件或信号变换 | 状态 |
| ---: | --- | --- | --- | --- |
| 1 | **`VCU_Pst_b`** | DAQ：`ParkReleaseSw` | `NOT(ParkReleaseSw)` | 一致 |
| 2 | **`VCU_SOCLoFlt_b`** | BMS：`BMS_Information1.Display_SOC` | `Display_SOC <= SOCLowTh`，即 `<=20%` | 一致 |
| 3 | **`VCU_RShift_b`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |
| 4 | **`VCU_LShift_b`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |
| 5 | **`VCU_EmrPumpSt_enum`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |
| 6 | **`VCU_FltSt_enum`** | FaultProc：`ShutDown` | 转为 `boolean`；无额外判断 | 一致 |
| 7 | **`VCU_WrkSt_enum`** | EnergyManage：`Ready` | 直接发送 `Ready`。注意：`Fault.VCU_WrkSt_enum = NOT(ShutDown OR NonDrive_F OR NonBRS OR NonOBC OR DrvPwrLim)` 已在 `VehCtrl/Subsystem` 中计算，但没有接到此 CAN Pack 端口 | 需确认 |
| 8 | **`VCU_VehSpd_kmh`** | SpdCalc：`VehSpdFb` | `VehSpdFb × mps2kmh`，即乘 `3.6` | 一致 |
| 9 | **`VCU_BattSOC_pct`** | BMS：`BMS_Information1.Display_SOC` | 转为 `single`；无额外判断 | 一致 |
| 10 | **`VCU_GearSt_enum`** | DAQ：`Gear` | 直接映射 | 一致 |
| 11 | **`VCU_BattTempHi_b`** | BMS：`BMS Statistic_Temperature of Battery.Statistic_TemperatureHTMax` | `Statistic_TemperatureHTMax >= BatoverTempTh`，即 `>=80℃` | 一致 |
| 12 | **`VCU_HydSysFlt_b`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |
| 13 | **`VCU_VehACharge_b`** | DAQ:ChargeEnSw | 一致 | 一致 |
| 14 | **`VCU_MCUTempHiFlt_b`** | MCU1：`OilMotorMCUTemp1/2/3`；MCU2：`DrvMotorMCUTemp1/2/3`；TM、ISG：`MCU_temperature` | 8 路取最大值；`max(...) >= MCUTempAlarmTh`，即 `>=60℃` | 一致 |
| 15 | **`VCU_MtTempHiFlt_b`** | MCU1：`OilMotorTemp1/2/3`；MCU2：`DrvMotorTemp1/2/3`；TM、ISG：`Motor_Temperature` | 8 路取最大值；`max(...) >= MtrTempAlarmTh`，即 `>=50℃` | 一致 |
| 16 | **`VCU_VehDCharge_b`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |
| 17 | **`VCU_TopWrkSt_b`** | DAQ：`BodyLoadSw` | 直接映射 | 一致 |
| 18 | **`VCU_BrakeFlt_b`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |
| 19 | **`VCU_CoolSysFltIdc_b`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |
| 20 | **`VCU_CoolFanWrkIdc_b`** | TMS：`TMS2VCU.TMS_FanSpeedLvl_num` | 转为 `boolean`；非零为 `1` | 一致 |
| 21 | **`VCU_RearLight_b`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |
| 22 | **`VCU_HeadLight_b`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |
| 23 | **`VCU_WatPumpOpenSt_b`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |
| 24 | **`VCU_SysWorkStCode_num`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |
| 25 | **`VCU_CoolSysFanPWM`** | TMS：`TMS2VCU.TMS_FanSpeedLvl_num` | 转为 `single`；无额外判断 | 一致 |

### VCU2ICUInfor2（0x180228D0）

| DBC序号 | ICU信号名 | 模型实际来源 | 判断条件或信号变换 | 状态 |
| ---: | --- | --- | --- | --- |
| 1 | **`VCU_SwVersion_num`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |
| 2 | **`VCU_BattBusCurr_A`** | BMS：`BMS_Information1.Cur_Bat` | 转为 `single`；无额外判断 | 一致 |
| 3 | **`VCU_AccPedSt_pct`** | DAQ：`AccPadle` | 转为 `single`；无额外判断 | 一致 |
| 4 | **`VCU_BrakePedSt_pct`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |
| 5 | **`VCU_WrkTimeAll_h`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |
| 6 | **`VCU_WrkTimeAll_min`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |

### VCU2ICUInfor3（0x180328D0）

| DBC序号 | ICU信号名 | 模型实际来源 | 判断条件或信号变换 | 状态 |
| ---: | --- | --- | --- | --- |
| 1 | **`VCU_HistFltCode1_num`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |
| 2 | **`VCU_HistFltCode2_num`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |
| 3 | **`VCU_HistFltCode3_num`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |
| 4 | **`VCU_EVFltCode1_num`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |
| 5 | **`VCU_EVFltCode2_num`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |
| 6 | **`VCU_EVFltLvlMax_num`** | FaultProc：`FaultMax` | 直接映射 | 一致 |
| 7 | **`VCU_BattBusVolt_V`** | BMS：`BMS_Information1.Vol_Bat` | 转为 `single`；无额外判断 | 一致 |

### VCU2ICUInfor4（0x181128D0）

| DBC序号 | ICU信号名 | 模型实际来源 | 判断条件或信号变换 | 状态 |
| ---: | --- | --- | --- | --- |
| 1 | **`VCU_OilMtTemp_deg`** | MCU1：`OilMotorTemp1/2/3`；ISG：`Motor_Temperature` | 4 路取最大值 | 一致 |
| 2 | **`VCU_OilMtCtlUnitTemp_deg`** | MCU1：`OilMotorMCUTemp1/2/3`；ISG：`MCU_temperature` | 4 路取最大值 | 一致 |
| 3 | **`VCU_CoolWaterTemp_deg`** | DAQ：`RadiatorTempOut` | 直接映射 | 一致 |
| 4 | **`VCU_DrvMtTemp_deg`** | MCU2：`DrvMotorTemp1/2/3`；TM：`Motor_Temperature` | 4 路取最大值 | 一致 |
| 5 | **`VCU_DrvMtCtlUnitTemp_deg`** | MCU2：`DrvMotorMCUTemp1/2/3`；TM：`MCU_temperature` | 4 路取最大值 | 一致 |
| 6 | **`VCU_BattTempMin_deg`** | BMS：`BMS Statistic_Temperature of Battery.Statistic_TemperatureLTMax` | 转为 `single`；模型实际使用的是名为 `LTMax` 的反馈 | 一致 |
| 7 | **`VCU_BattTempMax_deg`** | BMS：`BMS Statistic_Temperature of Battery.Statistic_TemperatureHTMax` | 转为 `single` | 一致 |
| 8 | **`VCU_RemindInfor_num`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |

### VCU2ICUInfor5（0x181228D0）

> **当前接线正常：** CAN Pack 的输入端口顺序为 `DrvMCUBusCurr`、`DrvMCUBusVolt`、`DrvMtSpd`、`DrvMtTrq`；当前模型接线与该顺序一致。下表仍严格按照 DBC 的 `SG_` 顺序排列。

| DBC序号 | ICU信号名 | 模型实际来源 | 判断条件或信号变换 | 状态 |
| ---: | --- | --- | --- | --- |
| 1 | **`VCU_DrvMtSpd_rpm`** | TM：`Motor_Speed`；MCU2：`DrvMotorSpd` | 两路取最大值 | 一致 |
| 2 | **`VCU_DrvMtTrq_Nm`** | TM：`Motor_Torque`；MCU2：`DrvMotorTrq` | 两路取最大值 | 一致 |
| 3 | **`VCU_DrvMCUBusVolt_V`** | TM：`DC_Voltage_A`；MCU2：`DrvMotorBusVolt` | 两路取最大值 | 一致 |
| 4 | **`VCU_DrvMCUBusCurr_A`** | TM：`DC_Current_A`；MCU2：`DrvMotorBusCur` | 两路取最大值 | 一致 |

### VCU2ICUInfor6（0x181328D0）

> **当前接线正常：** CAN Pack 的输入端口顺序为 `OilMCUBusCurr`、`OilMCUBusVolt`、`OilMtSpd`、`OilMtTrq`；当前模型接线与该顺序一致。下表仍严格按照 DBC 的 `SG_` 顺序排列。

| DBC序号 | ICU信号名 | 模型实际来源 | 判断条件或信号变换 | 状态 |
| ---: | --- | --- | --- | --- |
| 1 | **`VCU_OilMtSpd_rpm`** | ISG：`Motor_Speed`；MCU1：`OilMotorSpd` | 两路取最大值 | 一致 |
| 2 | **`VCU_OilMtTrq_Nm`** | ISG：`Motor_Torque`；MCU1：`OilMotorTrq` | 两路取最大值 | 一致 |
| 3 | **`VCU_OilMCUBusVolt_V`** | ISG：`DC_Voltage_V`；MCU1：`OilMotorBusVolt` | 两路取最大值 | 一致 |
| 4 | **`VCU_OilMCUBusCurr_A`** | ISG：`DC_Current_A`；MCU1：`OilMotorBusCur` | 两路取最大值 | 一致 |

### VCU2ICUInfor7（0x181428D0）

| DBC序号 | ICU信号名 | 模型实际来源 | 判断条件或信号变换 | 状态 |
| ---: | --- | --- | --- | --- |
| 1 | **`VCU_DisChargePwr_kw`** | BMS：`BMS Power Infor.BMS_BatteryPower` | 先限幅到 `[-1000, 0]`，再取绝对值：`abs(saturate(P, -1000, 0))` | 一致 |
| 2 | **`VCU_RegenPwr_kw`** | BMS：`BMS Power Infor.BMS_BatteryPower` | 限幅到 `[0, 1000]`：`saturate(P, 0, 1000)` | 一致 |
| 3 | **`VCU_RunAllMile_km`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |
| 4 | **`VCU_RangeRemain_km`** | 空缺：CAN Pack 前固定 `0` | 固定 `0` | 空缺：固定0 |

## 🔍 需要优先处理的问题

1. `VCU2ICUInfor5` 与 `VCU2ICUInfor6` 的 CAN Pack 接线已修正并重新核对：8 个端口的当前接线均与端口标签一致，原 8 项错位已消除。
2. 23 个 DBC 信号仅发送固定 `0`。这不等于“正常状态”，其中软件版本、故障码、工作时间、里程、续航等明显属于尚未实现或尚未接入。
3. `VCU_WrkSt_enum` 的 CAN Pack 实际来源是 `EnergyManage.Ready`；`VehCtrl/Subsystem` 内另行计算的 `Fault.VCU_WrkSt_enum` 没有被打包发送，应由控制策略负责人确认应选哪一个。
4. 7 个 CAN Pack 块保存的 DBC 路径为 `D:\VCU\VCU_SL_ZhengZhou\ZT2\模型与接口\CAN_DBC\整车CANA_GBK.dbc`，该路径在当前工程中不存在。块内仍保留 `SignalInfo`，所以本次可以核对端口，但后续刷新 DBC 或重配置 CAN Pack 时会有风险。

## 🔧 核对方法与限制

- 使用本机 MATLAB R2024b 的 `load_system`、`find_system`、`get_param`、`MaskWSVariables` 与连线句柄读取模型；未保存或修改 `.slx`。
- 本会话没有暴露 MATLAB MCP Server 工具，且本机 Codex 配置中也未注册该服务，因此本次采用 MATLAB 批处理接口完成同等只读检查；不能声称使用了 MCP。
- “一致”表示模型接线、CAN Pack 端口标签和 DBC 字段相互对应；不代表上游传感器标定或物理量语义已经通过实车验证。
