            #ifndef fcan1_mpc_event_callback_h
            #define fcan1_mpc_event_callback_h

            extern flexcan_msgbuff_t canCom1_recvBuffFifo;

            extern void fcan1_mpc_event_callback(uint8_t instance, flexcan_event_type_t eventType, uint32_t buffIdx, flexcan_state_t *flexcanState);

            #endif
