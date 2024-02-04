//
// Created by daniel on 2/4/24.
//

#ifndef RC_CAR_NRF240L_DEFINES_H
#define RC_CAR_NRF240L_DEFINES_H


/* Memory Map */
#define CONFIG      0x00
#define CONFIG_MASK_RX_DR       0x01 << 6
#define CONFIG_MASK_TX_DS       0x01 << 5
#define CONFIG_MASK_MAX_RT      0x01 << 4
#define CONFIG_EN_CRC           0x01 << 3
#define CONFIG_CRCO             0x01 << 2
#define CONFIG_PWR_UP           0x01 << 1
#define CONFIG_PRIM_RX          0x01 << 0

#define EN_AA       0x01
#define EN_AA_P5                0x01 << 5
#define EN_AA_P4                0x01 << 4
#define EN_AA_P3                0x01 << 3
#define EN_AA_P2                0x01 << 2
#define EN_AA_P1                0x01 << 1
#define EN_AA_P0                0x01 << 0


#define EN_RXADDR   0x02
#define EN_RXADDR_AA_P5         0x01 << 5
#define EN_RXADDR_AA_P4         0x01 << 4
#define EN_RXADDR_AA_P3         0x01 << 3
#define EN_RXADDR_AA_P2         0x01 << 2
#define EN_RXADDR_AA_P1         0x01 << 1
#define EN_RXADDR_AA_P0         0x01 << 0

#define SETUP_AW    0x03
#define SETUP_AW_AW             0x11

#define SETUP_RETR  0x04
#define SETUP_RETR_ARD_a        0xF0
#define SETUP_RETR_ARC          0x0F

#define RF_CH       0x05
#define RF_CH_RF_CH             0x7F


#define RF_SETUP    0x06
#define RF_SETUP_CONT_WAVE      0x01 << 7
#define RF_SETUP_RF_DR_LOW      0x01 << 5
#define RF_SETUP_PLL_LOCK       0x01 << 4
#define RF_SETUP_RF_DR_HIGH     0x01 << 3
#define RF_SETUP_RF_PWR         0x06

#define STATUS                  0x07
#define STATUS_RX_DR            0x01 << 6
#define STATUS_TX_DS            0x01 << 5
#define STATUS_MAX_RT           0x01 << 4
#define STATUS_RX_P_NO          0x0E
#define STATUS_TX_FULL          0x01 << 0

#define OBSERVE_TX  0x08
#define OBSERVE_TX_PLOS_CNT     0xF0
#define OBSERVE_ARC_CNT         0X0F


#define RPD         0x09
#define RPD_RPD                 0x01 << 0


#define RX_ADDR_P0  0x0A

#define RX_ADDR_P1  0x0B


#define RX_ADDR_P2  0x0C


#define RX_ADDR_P3  0x0D

#define RX_ADDR_P4  0x0E

#define RX_ADDR_P5  0x0F

#define TX_ADDR     0x10

#define RX_PW_P0    0x11

#define RX_PW_P1    0x12

#define RX_PW_P2    0x13

#define RX_PW_P3    0x14

#define RX_PW_P4    0x15

#define RX_PW_P5    0x16

#define FIFO_STATUS 0x17

#define DYNPD        0x1C

#define FEATURE        0x1D


#endif //RC_CAR_NRF240L_DEFINES_H
