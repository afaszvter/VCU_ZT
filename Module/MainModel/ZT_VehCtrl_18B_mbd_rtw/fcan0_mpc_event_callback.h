            #ifndef fcan0_mpc_event_callback_h
            #define fcan0_mpc_event_callback_h

            extern flexcan_msgbuff_t canCom0_recvBuffFifo;

            extern void fcan0_mpc_event_callback(uint8_t instance, flexcan_event_type_t eventType, uint32_t buffIdx, flexcan_state_t *flexcanState);

            #endif
