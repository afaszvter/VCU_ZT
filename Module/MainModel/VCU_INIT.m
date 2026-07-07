% 创建CAN总线
canMessageBusType;

%%整车系数
WhlRadius = single(1); % 车轮半径 m
Ratio = single(1); % 减速比
rpm2mps = single(2*pi/60 * WhlRadius/Ratio);
mps2kmh = single(3.6);
VehMass = single(2500); % 整车质量，kg；
Wheelbase = single(3); % 轴距，m，预留
Track = single(1.8); % 轮距，m，预留


%%油门踏板
PadleSignal1_min = 0.75;
PadleSignal1_max = 3.84;
PadleSignal2_min = 0.375;
PadleSignal2_max = 1.92;
PadleValid = 0.05;
Padle1Signal1_Th = [PadleSignal1_min,PadleSignal1_max];
Padle1Signal2_Th = [PadleSignal2_min,PadleSignal2_max];

%%能量管理
Delay_Discharge = single(50);
Delay_charge = single(60);
BRS_PwrValid = single(5);
BRSEnSpdTh1 = single(10);
BRSEnSpdTh2 = single(20);

%%驱动控制
MtrPwrFac = single(1/9550);
MtrTrqMax = single(200);  % 车轮电机最大扭矩，Nm
MtrPwrMax = single(30000);  % 车轮电机最大功率，W
VehTrqMax = single(MtrTrqMax * Ratio *4); % 轮端最大驱动扭矩，Nm
VehPwrMax = single(MtrPwrMax * 4); % 最大驱动功率，W
VehTrqBackwardMax = VehTrqMax * single(0.3); % 倒车工况轮端最大驱动扭矩，Nm
VehPwrBackwardMax = VehPwrMax * single(0.3); % 倒车工况最大驱动功率，W
PwrLimFactor = single(0.5); % 功率限制工况的加权因子，预留

%%散热管理
BatoverTempTh = single(80);
%%ICU
BatoverTempTh = single(80);
SOCLowTh = single(20);
MtrTempAlarmTh = single (50);
MCUTempAlarmTh = single (60);
