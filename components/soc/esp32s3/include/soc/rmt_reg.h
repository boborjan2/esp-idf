// Copyright 2017-2021 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef _SOC_RMT_REG_H_
#define _SOC_RMT_REG_H_


#include "soc.h"
#ifdef __cplusplus
extern "C" {
#endif

#define RMT_CH0DATA_REG          (DR_REG_RMT_BASE + 0x0)

#define RMT_CH1DATA_REG          (DR_REG_RMT_BASE + 0x4)

#define RMT_CH2DATA_REG          (DR_REG_RMT_BASE + 0x8)

#define RMT_CH3DATA_REG          (DR_REG_RMT_BASE + 0xC)

#define RMT_CH4DATA_REG          (DR_REG_RMT_BASE + 0x10)

#define RMT_CH5DATA_REG          (DR_REG_RMT_BASE + 0x14)

#define RMT_CH6DATA_REG          (DR_REG_RMT_BASE + 0x18)

#define RMT_CH7DATA_REG          (DR_REG_RMT_BASE + 0x1C)

#define RMT_CH0CONF0_REG          (DR_REG_RMT_BASE + 0x20)
/* RMT_CONF_UPDATE_CH0 : WT ;bitpos:[24] ;default: 1'b0 ; */
/*description: synchronization bit for CHANNEL$n.*/
#define RMT_CONF_UPDATE_CH0    (BIT(24))
#define RMT_CONF_UPDATE_CH0_M  (BIT(24))
#define RMT_CONF_UPDATE_CH0_V  0x1
#define RMT_CONF_UPDATE_CH0_S  24
/* RMT_AFIFO_RST_CH0 : WT ;bitpos:[23] ;default: 1'b0 ; */
/*description: Reserved.*/
#define RMT_AFIFO_RST_CH0    (BIT(23))
#define RMT_AFIFO_RST_CH0_M  (BIT(23))
#define RMT_AFIFO_RST_CH0_V  0x1
#define RMT_AFIFO_RST_CH0_S  23
/* RMT_CARRIER_OUT_LV_CH0 : R/W ;bitpos:[22] ;default: 1'b1 ; */
/*description: This bit is used to configure the position of carrier wave for CHANNEL$n.; ; 1'h
0: add carrier wave on low level.; ; 1'h1: add carrier wave on high level..*/
#define RMT_CARRIER_OUT_LV_CH0    (BIT(22))
#define RMT_CARRIER_OUT_LV_CH0_M  (BIT(22))
#define RMT_CARRIER_OUT_LV_CH0_V  0x1
#define RMT_CARRIER_OUT_LV_CH0_S  22
/* RMT_CARRIER_EN_CH0 : R/W ;bitpos:[21] ;default: 1'b1 ; */
/*description: This is the carrier modulation enable-control bit for CHANNEL$n. 1: Add carrier
modulation in the output signal. 0: No carrier modulation in sig_out..*/
#define RMT_CARRIER_EN_CH0    (BIT(21))
#define RMT_CARRIER_EN_CH0_M  (BIT(21))
#define RMT_CARRIER_EN_CH0_V  0x1
#define RMT_CARRIER_EN_CH0_S  21
/* RMT_CARRIER_EFF_EN_CH0 : R/W ;bitpos:[20] ;default: 1'b1 ; */
/*description: 1: Add carrier modulation on the output signal only at the send data state for C
HANNEL$n. 0: Add carrier modulation on the output signal at all state for CHANNE
L$n. Only valid when RMT_CARRIER_EN_CH$n is 1..*/
#define RMT_CARRIER_EFF_EN_CH0    (BIT(20))
#define RMT_CARRIER_EFF_EN_CH0_M  (BIT(20))
#define RMT_CARRIER_EFF_EN_CH0_V  0x1
#define RMT_CARRIER_EFF_EN_CH0_S  20
/* RMT_MEM_SIZE_CH0 : R/W ;bitpos:[19:16] ;default: 4'h1 ; */
/*description: This register is used to configure the maximum size of memory allocated to CHANN
EL$n..*/
#define RMT_MEM_SIZE_CH0    0x0000000F
#define RMT_MEM_SIZE_CH0_M  ((RMT_MEM_SIZE_CH0_V)<<(RMT_MEM_SIZE_CH0_S))
#define RMT_MEM_SIZE_CH0_V  0xF
#define RMT_MEM_SIZE_CH0_S  16
/* RMT_DIV_CNT_CH0 : R/W ;bitpos:[15:8] ;default: 8'h2 ; */
/*description: This register is used to configure the divider for clock of CHANNEL$n..*/
#define RMT_DIV_CNT_CH0    0x000000FF
#define RMT_DIV_CNT_CH0_M  ((RMT_DIV_CNT_CH0_V)<<(RMT_DIV_CNT_CH0_S))
#define RMT_DIV_CNT_CH0_V  0xFF
#define RMT_DIV_CNT_CH0_S  8
/* RMT_TX_STOP_CH0 : R/W/SC ;bitpos:[7] ;default: 1'b0 ; */
/*description: Set this bit to stop the transmitter of CHANNEL$n sending data out..*/
#define RMT_TX_STOP_CH0    (BIT(7))
#define RMT_TX_STOP_CH0_M  (BIT(7))
#define RMT_TX_STOP_CH0_V  0x1
#define RMT_TX_STOP_CH0_S  7
/* RMT_IDLE_OUT_EN_CH0 : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description: This is the output enable-control bit for CHANNEL$n in IDLE state..*/
#define RMT_IDLE_OUT_EN_CH0    (BIT(6))
#define RMT_IDLE_OUT_EN_CH0_M  (BIT(6))
#define RMT_IDLE_OUT_EN_CH0_V  0x1
#define RMT_IDLE_OUT_EN_CH0_S  6
/* RMT_IDLE_OUT_LV_CH0 : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description: This bit configures the level of output signal in CHANNEL$n when the latter is i
n IDLE state..*/
#define RMT_IDLE_OUT_LV_CH0    (BIT(5))
#define RMT_IDLE_OUT_LV_CH0_M  (BIT(5))
#define RMT_IDLE_OUT_LV_CH0_V  0x1
#define RMT_IDLE_OUT_LV_CH0_S  5
/* RMT_MEM_TX_WRAP_EN_CH0 : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: This is the channel $n enable bit for wraparound mode: it will resume sending at
 the start when the data to be sent is more than its memory size..*/
#define RMT_MEM_TX_WRAP_EN_CH0    (BIT(4))
#define RMT_MEM_TX_WRAP_EN_CH0_M  (BIT(4))
#define RMT_MEM_TX_WRAP_EN_CH0_V  0x1
#define RMT_MEM_TX_WRAP_EN_CH0_S  4
/* RMT_TX_CONTI_MODE_CH0 : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Set this bit to restart transmission  from the first data to the last data in CH
ANNEL$n..*/
#define RMT_TX_CONTI_MODE_CH0    (BIT(3))
#define RMT_TX_CONTI_MODE_CH0_M  (BIT(3))
#define RMT_TX_CONTI_MODE_CH0_V  0x1
#define RMT_TX_CONTI_MODE_CH0_S  3
/* RMT_APB_MEM_RST_CH0 : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit to reset W/R ram address for CHANNEL$n by accessing apb fifo..*/
#define RMT_APB_MEM_RST_CH0    (BIT(2))
#define RMT_APB_MEM_RST_CH0_M  (BIT(2))
#define RMT_APB_MEM_RST_CH0_V  0x1
#define RMT_APB_MEM_RST_CH0_S  2
/* RMT_MEM_RD_RST_CH0 : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description: Set this bit to reset read ram address for CHANNEL$n by accessing transmitter..*/
#define RMT_MEM_RD_RST_CH0    (BIT(1))
#define RMT_MEM_RD_RST_CH0_M  (BIT(1))
#define RMT_MEM_RD_RST_CH0_V  0x1
#define RMT_MEM_RD_RST_CH0_S  1
/* RMT_TX_START_CH0 : WT ;bitpos:[0] ;default: 1'h0 ; */
/*description: Set this bit to start sending data on CHANNEL$n..*/
#define RMT_TX_START_CH0    (BIT(0))
#define RMT_TX_START_CH0_M  (BIT(0))
#define RMT_TX_START_CH0_V  0x1
#define RMT_TX_START_CH0_S  0

#define RMT_CH1CONF0_REG          (DR_REG_RMT_BASE + 0x24)
/* RMT_CONF_UPDATE_CH1 : WT ;bitpos:[24] ;default: 1'b0 ; */
/*description: synchronization bit for CHANNEL$n.*/
#define RMT_CONF_UPDATE_CH1    (BIT(24))
#define RMT_CONF_UPDATE_CH1_M  (BIT(24))
#define RMT_CONF_UPDATE_CH1_V  0x1
#define RMT_CONF_UPDATE_CH1_S  24
/* RMT_AFIFO_RST_CH1 : WT ;bitpos:[23] ;default: 1'b0 ; */
/*description: Reserved.*/
#define RMT_AFIFO_RST_CH1    (BIT(23))
#define RMT_AFIFO_RST_CH1_M  (BIT(23))
#define RMT_AFIFO_RST_CH1_V  0x1
#define RMT_AFIFO_RST_CH1_S  23
/* RMT_CARRIER_OUT_LV_CH1 : R/W ;bitpos:[22] ;default: 1'b1 ; */
/*description: This bit is used to configure the position of carrier wave for CHANNEL$n.; ; 1'h
0: add carrier wave on low level.; ; 1'h1: add carrier wave on high level..*/
#define RMT_CARRIER_OUT_LV_CH1    (BIT(22))
#define RMT_CARRIER_OUT_LV_CH1_M  (BIT(22))
#define RMT_CARRIER_OUT_LV_CH1_V  0x1
#define RMT_CARRIER_OUT_LV_CH1_S  22
/* RMT_CARRIER_EN_CH1 : R/W ;bitpos:[21] ;default: 1'b1 ; */
/*description: This is the carrier modulation enable-control bit for CHANNEL$n. 1: Add carrier
modulation in the output signal. 0: No carrier modulation in sig_out..*/
#define RMT_CARRIER_EN_CH1    (BIT(21))
#define RMT_CARRIER_EN_CH1_M  (BIT(21))
#define RMT_CARRIER_EN_CH1_V  0x1
#define RMT_CARRIER_EN_CH1_S  21
/* RMT_CARRIER_EFF_EN_CH1 : R/W ;bitpos:[20] ;default: 1'b1 ; */
/*description: 1: Add carrier modulation on the output signal only at the send data state for C
HANNEL$n. 0: Add carrier modulation on the output signal at all state for CHANNE
L$n. Only valid when RMT_CARRIER_EN_CH$n is 1..*/
#define RMT_CARRIER_EFF_EN_CH1    (BIT(20))
#define RMT_CARRIER_EFF_EN_CH1_M  (BIT(20))
#define RMT_CARRIER_EFF_EN_CH1_V  0x1
#define RMT_CARRIER_EFF_EN_CH1_S  20
/* RMT_MEM_SIZE_CH1 : R/W ;bitpos:[19:16] ;default: 4'h1 ; */
/*description: This register is used to configure the maximum size of memory allocated to CHANN
EL$n..*/
#define RMT_MEM_SIZE_CH1    0x0000000F
#define RMT_MEM_SIZE_CH1_M  ((RMT_MEM_SIZE_CH1_V)<<(RMT_MEM_SIZE_CH1_S))
#define RMT_MEM_SIZE_CH1_V  0xF
#define RMT_MEM_SIZE_CH1_S  16
/* RMT_DIV_CNT_CH1 : R/W ;bitpos:[15:8] ;default: 8'h2 ; */
/*description: This register is used to configure the divider for clock of CHANNEL$n..*/
#define RMT_DIV_CNT_CH1    0x000000FF
#define RMT_DIV_CNT_CH1_M  ((RMT_DIV_CNT_CH1_V)<<(RMT_DIV_CNT_CH1_S))
#define RMT_DIV_CNT_CH1_V  0xFF
#define RMT_DIV_CNT_CH1_S  8
/* RMT_TX_STOP_CH1 : R/W/SC ;bitpos:[7] ;default: 1'b0 ; */
/*description: Set this bit to stop the transmitter of CHANNEL$n sending data out..*/
#define RMT_TX_STOP_CH1    (BIT(7))
#define RMT_TX_STOP_CH1_M  (BIT(7))
#define RMT_TX_STOP_CH1_V  0x1
#define RMT_TX_STOP_CH1_S  7
/* RMT_IDLE_OUT_EN_CH1 : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description: This is the output enable-control bit for CHANNEL$n in IDLE state..*/
#define RMT_IDLE_OUT_EN_CH1    (BIT(6))
#define RMT_IDLE_OUT_EN_CH1_M  (BIT(6))
#define RMT_IDLE_OUT_EN_CH1_V  0x1
#define RMT_IDLE_OUT_EN_CH1_S  6
/* RMT_IDLE_OUT_LV_CH1 : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description: This bit configures the level of output signal in CHANNEL$n when the latter is i
n IDLE state..*/
#define RMT_IDLE_OUT_LV_CH1    (BIT(5))
#define RMT_IDLE_OUT_LV_CH1_M  (BIT(5))
#define RMT_IDLE_OUT_LV_CH1_V  0x1
#define RMT_IDLE_OUT_LV_CH1_S  5
/* RMT_MEM_TX_WRAP_EN_CH1 : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: This is the channel $n enable bit for wraparound mode: it will resume sending at
 the start when the data to be sent is more than its memory size..*/
#define RMT_MEM_TX_WRAP_EN_CH1    (BIT(4))
#define RMT_MEM_TX_WRAP_EN_CH1_M  (BIT(4))
#define RMT_MEM_TX_WRAP_EN_CH1_V  0x1
#define RMT_MEM_TX_WRAP_EN_CH1_S  4
/* RMT_TX_CONTI_MODE_CH1 : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Set this bit to restart transmission  from the first data to the last data in CH
ANNEL$n..*/
#define RMT_TX_CONTI_MODE_CH1    (BIT(3))
#define RMT_TX_CONTI_MODE_CH1_M  (BIT(3))
#define RMT_TX_CONTI_MODE_CH1_V  0x1
#define RMT_TX_CONTI_MODE_CH1_S  3
/* RMT_APB_MEM_RST_CH1 : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit to reset W/R ram address for CHANNEL$n by accessing apb fifo..*/
#define RMT_APB_MEM_RST_CH1    (BIT(2))
#define RMT_APB_MEM_RST_CH1_M  (BIT(2))
#define RMT_APB_MEM_RST_CH1_V  0x1
#define RMT_APB_MEM_RST_CH1_S  2
/* RMT_MEM_RD_RST_CH1 : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description: Set this bit to reset read ram address for CHANNEL$n by accessing transmitter..*/
#define RMT_MEM_RD_RST_CH1    (BIT(1))
#define RMT_MEM_RD_RST_CH1_M  (BIT(1))
#define RMT_MEM_RD_RST_CH1_V  0x1
#define RMT_MEM_RD_RST_CH1_S  1
/* RMT_TX_START_CH1 : WT ;bitpos:[0] ;default: 1'h0 ; */
/*description: Set this bit to start sending data on CHANNEL$n..*/
#define RMT_TX_START_CH1    (BIT(0))
#define RMT_TX_START_CH1_M  (BIT(0))
#define RMT_TX_START_CH1_V  0x1
#define RMT_TX_START_CH1_S  0

#define RMT_CH2CONF0_REG          (DR_REG_RMT_BASE + 0x28)
/* RMT_CONF_UPDATE_CH2 : WT ;bitpos:[24] ;default: 1'b0 ; */
/*description: synchronization bit for CHANNEL$n.*/
#define RMT_CONF_UPDATE_CH2    (BIT(24))
#define RMT_CONF_UPDATE_CH2_M  (BIT(24))
#define RMT_CONF_UPDATE_CH2_V  0x1
#define RMT_CONF_UPDATE_CH2_S  24
/* RMT_AFIFO_RST_CH2 : WT ;bitpos:[23] ;default: 1'b0 ; */
/*description: Reserved.*/
#define RMT_AFIFO_RST_CH2    (BIT(23))
#define RMT_AFIFO_RST_CH2_M  (BIT(23))
#define RMT_AFIFO_RST_CH2_V  0x1
#define RMT_AFIFO_RST_CH2_S  23
/* RMT_CARRIER_OUT_LV_CH2 : R/W ;bitpos:[22] ;default: 1'b1 ; */
/*description: This bit is used to configure the position of carrier wave for CHANNEL$n.; ; 1'h
0: add carrier wave on low level.; ; 1'h1: add carrier wave on high level..*/
#define RMT_CARRIER_OUT_LV_CH2    (BIT(22))
#define RMT_CARRIER_OUT_LV_CH2_M  (BIT(22))
#define RMT_CARRIER_OUT_LV_CH2_V  0x1
#define RMT_CARRIER_OUT_LV_CH2_S  22
/* RMT_CARRIER_EN_CH2 : R/W ;bitpos:[21] ;default: 1'b1 ; */
/*description: This is the carrier modulation enable-control bit for CHANNEL$n. 1: Add carrier
modulation in the output signal. 0: No carrier modulation in sig_out..*/
#define RMT_CARRIER_EN_CH2    (BIT(21))
#define RMT_CARRIER_EN_CH2_M  (BIT(21))
#define RMT_CARRIER_EN_CH2_V  0x1
#define RMT_CARRIER_EN_CH2_S  21
/* RMT_CARRIER_EFF_EN_CH2 : R/W ;bitpos:[20] ;default: 1'b1 ; */
/*description: 1: Add carrier modulation on the output signal only at the send data state for C
HANNEL$n. 0: Add carrier modulation on the output signal at all state for CHANNE
L$n. Only valid when RMT_CARRIER_EN_CH$n is 1..*/
#define RMT_CARRIER_EFF_EN_CH2    (BIT(20))
#define RMT_CARRIER_EFF_EN_CH2_M  (BIT(20))
#define RMT_CARRIER_EFF_EN_CH2_V  0x1
#define RMT_CARRIER_EFF_EN_CH2_S  20
/* RMT_MEM_SIZE_CH2 : R/W ;bitpos:[19:16] ;default: 4'h1 ; */
/*description: This register is used to configure the maximum size of memory allocated to CHANN
EL$n..*/
#define RMT_MEM_SIZE_CH2    0x0000000F
#define RMT_MEM_SIZE_CH2_M  ((RMT_MEM_SIZE_CH2_V)<<(RMT_MEM_SIZE_CH2_S))
#define RMT_MEM_SIZE_CH2_V  0xF
#define RMT_MEM_SIZE_CH2_S  16
/* RMT_DIV_CNT_CH2 : R/W ;bitpos:[15:8] ;default: 8'h2 ; */
/*description: This register is used to configure the divider for clock of CHANNEL$n..*/
#define RMT_DIV_CNT_CH2    0x000000FF
#define RMT_DIV_CNT_CH2_M  ((RMT_DIV_CNT_CH2_V)<<(RMT_DIV_CNT_CH2_S))
#define RMT_DIV_CNT_CH2_V  0xFF
#define RMT_DIV_CNT_CH2_S  8
/* RMT_TX_STOP_CH2 : R/W/SC ;bitpos:[7] ;default: 1'b0 ; */
/*description: Set this bit to stop the transmitter of CHANNEL$n sending data out..*/
#define RMT_TX_STOP_CH2    (BIT(7))
#define RMT_TX_STOP_CH2_M  (BIT(7))
#define RMT_TX_STOP_CH2_V  0x1
#define RMT_TX_STOP_CH2_S  7
/* RMT_IDLE_OUT_EN_CH2 : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description: This is the output enable-control bit for CHANNEL$n in IDLE state..*/
#define RMT_IDLE_OUT_EN_CH2    (BIT(6))
#define RMT_IDLE_OUT_EN_CH2_M  (BIT(6))
#define RMT_IDLE_OUT_EN_CH2_V  0x1
#define RMT_IDLE_OUT_EN_CH2_S  6
/* RMT_IDLE_OUT_LV_CH2 : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description: This bit configures the level of output signal in CHANNEL$n when the latter is i
n IDLE state..*/
#define RMT_IDLE_OUT_LV_CH2    (BIT(5))
#define RMT_IDLE_OUT_LV_CH2_M  (BIT(5))
#define RMT_IDLE_OUT_LV_CH2_V  0x1
#define RMT_IDLE_OUT_LV_CH2_S  5
/* RMT_MEM_TX_WRAP_EN_CH2 : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: This is the channel $n enable bit for wraparound mode: it will resume sending at
 the start when the data to be sent is more than its memory size..*/
#define RMT_MEM_TX_WRAP_EN_CH2    (BIT(4))
#define RMT_MEM_TX_WRAP_EN_CH2_M  (BIT(4))
#define RMT_MEM_TX_WRAP_EN_CH2_V  0x1
#define RMT_MEM_TX_WRAP_EN_CH2_S  4
/* RMT_TX_CONTI_MODE_CH2 : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Set this bit to restart transmission  from the first data to the last data in CH
ANNEL$n..*/
#define RMT_TX_CONTI_MODE_CH2    (BIT(3))
#define RMT_TX_CONTI_MODE_CH2_M  (BIT(3))
#define RMT_TX_CONTI_MODE_CH2_V  0x1
#define RMT_TX_CONTI_MODE_CH2_S  3
/* RMT_APB_MEM_RST_CH2 : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit to reset W/R ram address for CHANNEL$n by accessing apb fifo..*/
#define RMT_APB_MEM_RST_CH2    (BIT(2))
#define RMT_APB_MEM_RST_CH2_M  (BIT(2))
#define RMT_APB_MEM_RST_CH2_V  0x1
#define RMT_APB_MEM_RST_CH2_S  2
/* RMT_MEM_RD_RST_CH2 : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description: Set this bit to reset read ram address for CHANNEL$n by accessing transmitter..*/
#define RMT_MEM_RD_RST_CH2    (BIT(1))
#define RMT_MEM_RD_RST_CH2_M  (BIT(1))
#define RMT_MEM_RD_RST_CH2_V  0x1
#define RMT_MEM_RD_RST_CH2_S  1
/* RMT_TX_START_CH2 : WT ;bitpos:[0] ;default: 1'h0 ; */
/*description: Set this bit to start sending data on CHANNEL$n..*/
#define RMT_TX_START_CH2    (BIT(0))
#define RMT_TX_START_CH2_M  (BIT(0))
#define RMT_TX_START_CH2_V  0x1
#define RMT_TX_START_CH2_S  0

#define RMT_CH3CONF0_REG          (DR_REG_RMT_BASE + 0x2C)
/* RMT_DMA_ACCESS_EN_CH3 : R/W ;bitpos:[25] ;default: 1'b0 ; */
/*description: This bit is used to enable the dma access function for CHANNEL$n..*/
#define RMT_DMA_ACCESS_EN_CH3    (BIT(25))
#define RMT_DMA_ACCESS_EN_CH3_M  (BIT(25))
#define RMT_DMA_ACCESS_EN_CH3_V  0x1
#define RMT_DMA_ACCESS_EN_CH3_S  25
/* RMT_CONF_UPDATE_CH3 : WT ;bitpos:[24] ;default: 1'b0 ; */
/*description: synchronization bit for CHANNEL$n.*/
#define RMT_CONF_UPDATE_CH3    (BIT(24))
#define RMT_CONF_UPDATE_CH3_M  (BIT(24))
#define RMT_CONF_UPDATE_CH3_V  0x1
#define RMT_CONF_UPDATE_CH3_S  24
/* RMT_AFIFO_RST_CH3 : WT ;bitpos:[23] ;default: 1'b0 ; */
/*description: Reserved.*/
#define RMT_AFIFO_RST_CH3    (BIT(23))
#define RMT_AFIFO_RST_CH3_M  (BIT(23))
#define RMT_AFIFO_RST_CH3_V  0x1
#define RMT_AFIFO_RST_CH3_S  23
/* RMT_CARRIER_OUT_LV_CH3 : R/W ;bitpos:[22] ;default: 1'b1 ; */
/*description: This bit is used to configure the position of carrier wave for CHANNEL$n.; ; 1'h
0: add carrier wave on low level.; ; 1'h1: add carrier wave on high level..*/
#define RMT_CARRIER_OUT_LV_CH3    (BIT(22))
#define RMT_CARRIER_OUT_LV_CH3_M  (BIT(22))
#define RMT_CARRIER_OUT_LV_CH3_V  0x1
#define RMT_CARRIER_OUT_LV_CH3_S  22
/* RMT_CARRIER_EN_CH3 : R/W ;bitpos:[21] ;default: 1'b1 ; */
/*description: This is the carrier modulation enable-control bit for CHANNEL$n. 1: Add carrier
modulation in the output signal. 0: No carrier modulation in sig_out..*/
#define RMT_CARRIER_EN_CH3    (BIT(21))
#define RMT_CARRIER_EN_CH3_M  (BIT(21))
#define RMT_CARRIER_EN_CH3_V  0x1
#define RMT_CARRIER_EN_CH3_S  21
/* RMT_CARRIER_EFF_EN_CH3 : R/W ;bitpos:[20] ;default: 1'b1 ; */
/*description: 1: Add carrier modulation on the output signal only at the send data state for C
HANNEL$n. 0: Add carrier modulation on the output signal at all state for CHANNE
L$n. Only valid when RMT_CARRIER_EN_CH$n is 1..*/
#define RMT_CARRIER_EFF_EN_CH3    (BIT(20))
#define RMT_CARRIER_EFF_EN_CH3_M  (BIT(20))
#define RMT_CARRIER_EFF_EN_CH3_V  0x1
#define RMT_CARRIER_EFF_EN_CH3_S  20
/* RMT_MEM_SIZE_CH3 : R/W ;bitpos:[19:16] ;default: 4'h1 ; */
/*description: This register is used to configure the maximum size of memory allocated to CHANN
EL$n..*/
#define RMT_MEM_SIZE_CH3    0x0000000F
#define RMT_MEM_SIZE_CH3_M  ((RMT_MEM_SIZE_CH3_V)<<(RMT_MEM_SIZE_CH3_S))
#define RMT_MEM_SIZE_CH3_V  0xF
#define RMT_MEM_SIZE_CH3_S  16
/* RMT_DIV_CNT_CH3 : R/W ;bitpos:[15:8] ;default: 8'h2 ; */
/*description: This register is used to configure the divider for clock of CHANNEL$n..*/
#define RMT_DIV_CNT_CH3    0x000000FF
#define RMT_DIV_CNT_CH3_M  ((RMT_DIV_CNT_CH3_V)<<(RMT_DIV_CNT_CH3_S))
#define RMT_DIV_CNT_CH3_V  0xFF
#define RMT_DIV_CNT_CH3_S  8
/* RMT_TX_STOP_CH3 : R/W/SC ;bitpos:[7] ;default: 1'b0 ; */
/*description: Set this bit to stop the transmitter of CHANNEL$n sending data out..*/
#define RMT_TX_STOP_CH3    (BIT(7))
#define RMT_TX_STOP_CH3_M  (BIT(7))
#define RMT_TX_STOP_CH3_V  0x1
#define RMT_TX_STOP_CH3_S  7
/* RMT_IDLE_OUT_EN_CH3 : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description: This is the output enable-control bit for CHANNEL$n in IDLE state..*/
#define RMT_IDLE_OUT_EN_CH3    (BIT(6))
#define RMT_IDLE_OUT_EN_CH3_M  (BIT(6))
#define RMT_IDLE_OUT_EN_CH3_V  0x1
#define RMT_IDLE_OUT_EN_CH3_S  6
/* RMT_IDLE_OUT_LV_CH3 : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description: This bit configures the level of output signal in CHANNEL$n when the latter is i
n IDLE state..*/
#define RMT_IDLE_OUT_LV_CH3    (BIT(5))
#define RMT_IDLE_OUT_LV_CH3_M  (BIT(5))
#define RMT_IDLE_OUT_LV_CH3_V  0x1
#define RMT_IDLE_OUT_LV_CH3_S  5
/* RMT_MEM_TX_WRAP_EN_CH3 : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: This is the channel $n enable bit for wraparound mode: it will resume sending at
 the start when the data to be sent is more than its memory size..*/
#define RMT_MEM_TX_WRAP_EN_CH3    (BIT(4))
#define RMT_MEM_TX_WRAP_EN_CH3_M  (BIT(4))
#define RMT_MEM_TX_WRAP_EN_CH3_V  0x1
#define RMT_MEM_TX_WRAP_EN_CH3_S  4
/* RMT_TX_CONTI_MODE_CH3 : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Set this bit to restart transmission  from the first data to the last data in CH
ANNEL$n..*/
#define RMT_TX_CONTI_MODE_CH3    (BIT(3))
#define RMT_TX_CONTI_MODE_CH3_M  (BIT(3))
#define RMT_TX_CONTI_MODE_CH3_V  0x1
#define RMT_TX_CONTI_MODE_CH3_S  3
/* RMT_APB_MEM_RST_CH3 : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit to reset W/R ram address for CHANNEL$n by accessing apb fifo..*/
#define RMT_APB_MEM_RST_CH3    (BIT(2))
#define RMT_APB_MEM_RST_CH3_M  (BIT(2))
#define RMT_APB_MEM_RST_CH3_V  0x1
#define RMT_APB_MEM_RST_CH3_S  2
/* RMT_MEM_RD_RST_CH3 : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description: Set this bit to reset read ram address for CHANNEL$n by accessing transmitter..*/
#define RMT_MEM_RD_RST_CH3    (BIT(1))
#define RMT_MEM_RD_RST_CH3_M  (BIT(1))
#define RMT_MEM_RD_RST_CH3_V  0x1
#define RMT_MEM_RD_RST_CH3_S  1
/* RMT_TX_START_CH3 : WT ;bitpos:[0] ;default: 1'h0 ; */
/*description: Set this bit to start sending data on CHANNEL$n..*/
#define RMT_TX_START_CH3    (BIT(0))
#define RMT_TX_START_CH3_M  (BIT(0))
#define RMT_TX_START_CH3_V  0x1
#define RMT_TX_START_CH3_S  0

#define RMT_CH4CONF0_REG          (DR_REG_RMT_BASE + 0x30)
/* RMT_CARRIER_OUT_LV_CH4 : R/W ;bitpos:[29] ;default: 1'b1 ; */
/*description: This bit is used to configure the position of carrier wave for CHANNEL$m.; ; 1'h
0: add carrier wave on low level.; ; 1'h1: add carrier wave on high level..*/
#define RMT_CARRIER_OUT_LV_CH4    (BIT(29))
#define RMT_CARRIER_OUT_LV_CH4_M  (BIT(29))
#define RMT_CARRIER_OUT_LV_CH4_V  0x1
#define RMT_CARRIER_OUT_LV_CH4_S  29
/* RMT_CARRIER_EN_CH4 : R/W ;bitpos:[28] ;default: 1'b1 ; */
/*description: This is the carrier modulation enable-control bit for CHANNEL$m. 1: Add carrier
modulation in the output signal. 0: No carrier modulation in sig_out..*/
#define RMT_CARRIER_EN_CH4    (BIT(28))
#define RMT_CARRIER_EN_CH4_M  (BIT(28))
#define RMT_CARRIER_EN_CH4_V  0x1
#define RMT_CARRIER_EN_CH4_S  28
/* RMT_MEM_SIZE_CH4 : R/W ;bitpos:[27:24] ;default: 4'h1 ; */
/*description: This register is used to configure the maximum size of memory allocated to CHANN
EL$m..*/
#define RMT_MEM_SIZE_CH4    0x0000000F
#define RMT_MEM_SIZE_CH4_M  ((RMT_MEM_SIZE_CH4_V)<<(RMT_MEM_SIZE_CH4_S))
#define RMT_MEM_SIZE_CH4_V  0xF
#define RMT_MEM_SIZE_CH4_S  24
/* RMT_IDLE_THRES_CH4 : R/W ;bitpos:[22:8] ;default: 15'h7fff ; */
/*description: When no edge is detected on the input signal and continuous clock cycles is long
er than this register value, received process is finished..*/
#define RMT_IDLE_THRES_CH4    0x00007FFF
#define RMT_IDLE_THRES_CH4_M  ((RMT_IDLE_THRES_CH4_V)<<(RMT_IDLE_THRES_CH4_S))
#define RMT_IDLE_THRES_CH4_V  0x7FFF
#define RMT_IDLE_THRES_CH4_S  8
/* RMT_DIV_CNT_CH4 : R/W ;bitpos:[7:0] ;default: 8'h2 ; */
/*description: This register is used to configure the divider for clock of CHANNEL$m..*/
#define RMT_DIV_CNT_CH4    0x000000FF
#define RMT_DIV_CNT_CH4_M  ((RMT_DIV_CNT_CH4_V)<<(RMT_DIV_CNT_CH4_S))
#define RMT_DIV_CNT_CH4_V  0xFF
#define RMT_DIV_CNT_CH4_S  0

#define RMT_CH4CONF1_REG          (DR_REG_RMT_BASE + 0x34)
/* RMT_CONF_UPDATE_CH4 : WT ;bitpos:[15] ;default: 1'b0 ; */
/*description: synchronization bit for CHANNEL$m.*/
#define RMT_CONF_UPDATE_CH4    (BIT(15))
#define RMT_CONF_UPDATE_CH4_M  (BIT(15))
#define RMT_CONF_UPDATE_CH4_V  0x1
#define RMT_CONF_UPDATE_CH4_S  15
/* RMT_AFIFO_RST_CH4 : WT ;bitpos:[14] ;default: 1'b0 ; */
/*description: Reserved.*/
#define RMT_AFIFO_RST_CH4    (BIT(14))
#define RMT_AFIFO_RST_CH4_M  (BIT(14))
#define RMT_AFIFO_RST_CH4_V  0x1
#define RMT_AFIFO_RST_CH4_S  14
/* RMT_MEM_RX_WRAP_EN_CH4 : R/W ;bitpos:[13] ;default: 1'b0 ; */
/*description: This is the channel $m enable bit for wraparound mode: it will resume receiving
at the start when the data to be received is more than its memory size..*/
#define RMT_MEM_RX_WRAP_EN_CH4    (BIT(13))
#define RMT_MEM_RX_WRAP_EN_CH4_M  (BIT(13))
#define RMT_MEM_RX_WRAP_EN_CH4_V  0x1
#define RMT_MEM_RX_WRAP_EN_CH4_S  13
/* RMT_RX_FILTER_THRES_CH4 : R/W ;bitpos:[12:5] ;default: 8'hf ; */
/*description: Ignores the input pulse when its width is smaller than this register value in AP
B clock periods (in receive mode)..*/
#define RMT_RX_FILTER_THRES_CH4    0x000000FF
#define RMT_RX_FILTER_THRES_CH4_M  ((RMT_RX_FILTER_THRES_CH4_V)<<(RMT_RX_FILTER_THRES_CH4_S))
#define RMT_RX_FILTER_THRES_CH4_V  0xFF
#define RMT_RX_FILTER_THRES_CH4_S  5
/* RMT_RX_FILTER_EN_CH4 : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: This is the receive filter's enable bit for CHANNEL$m..*/
#define RMT_RX_FILTER_EN_CH4    (BIT(4))
#define RMT_RX_FILTER_EN_CH4_M  (BIT(4))
#define RMT_RX_FILTER_EN_CH4_V  0x1
#define RMT_RX_FILTER_EN_CH4_S  4
/* RMT_MEM_OWNER_CH4 : R/W/SC ;bitpos:[3] ;default: 1'b1 ; */
/*description: This register marks the ownership of CHANNEL$m's ram block.; ; 1'h1: Receiver is
 using the ram. ; ; 1'h0: APB bus is using the ram..*/
#define RMT_MEM_OWNER_CH4    (BIT(3))
#define RMT_MEM_OWNER_CH4_M  (BIT(3))
#define RMT_MEM_OWNER_CH4_V  0x1
#define RMT_MEM_OWNER_CH4_S  3
/* RMT_APB_MEM_RST_CH4 : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit to reset W/R ram address for CHANNEL$m by accessing apb fifo..*/
#define RMT_APB_MEM_RST_CH4    (BIT(2))
#define RMT_APB_MEM_RST_CH4_M  (BIT(2))
#define RMT_APB_MEM_RST_CH4_V  0x1
#define RMT_APB_MEM_RST_CH4_S  2
/* RMT_MEM_WR_RST_CH4 : WT ;bitpos:[1] ;default: 1'h0 ; */
/*description: Set this bit to reset write ram address for CHANNEL$m by accessing receiver..*/
#define RMT_MEM_WR_RST_CH4    (BIT(1))
#define RMT_MEM_WR_RST_CH4_M  (BIT(1))
#define RMT_MEM_WR_RST_CH4_V  0x1
#define RMT_MEM_WR_RST_CH4_S  1
/* RMT_RX_EN_CH4 : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Set this bit to enable receiver to receive data on CHANNEL$m..*/
#define RMT_RX_EN_CH4    (BIT(0))
#define RMT_RX_EN_CH4_M  (BIT(0))
#define RMT_RX_EN_CH4_V  0x1
#define RMT_RX_EN_CH4_S  0

#define RMT_CH5CONF0_REG          (DR_REG_RMT_BASE + 0x38)
/* RMT_CARRIER_OUT_LV_CH5 : R/W ;bitpos:[29] ;default: 1'b1 ; */
/*description: This bit is used to configure the position of carrier wave for CHANNEL$m.; ; 1'h
0: add carrier wave on low level.; ; 1'h1: add carrier wave on high level..*/
#define RMT_CARRIER_OUT_LV_CH5    (BIT(29))
#define RMT_CARRIER_OUT_LV_CH5_M  (BIT(29))
#define RMT_CARRIER_OUT_LV_CH5_V  0x1
#define RMT_CARRIER_OUT_LV_CH5_S  29
/* RMT_CARRIER_EN_CH5 : R/W ;bitpos:[28] ;default: 1'b1 ; */
/*description: This is the carrier modulation enable-control bit for CHANNEL$m. 1: Add carrier
modulation in the output signal. 0: No carrier modulation in sig_out..*/
#define RMT_CARRIER_EN_CH5    (BIT(28))
#define RMT_CARRIER_EN_CH5_M  (BIT(28))
#define RMT_CARRIER_EN_CH5_V  0x1
#define RMT_CARRIER_EN_CH5_S  28
/* RMT_MEM_SIZE_CH5 : R/W ;bitpos:[27:24] ;default: 4'h1 ; */
/*description: This register is used to configure the maximum size of memory allocated to CHANN
EL$m..*/
#define RMT_MEM_SIZE_CH5    0x0000000F
#define RMT_MEM_SIZE_CH5_M  ((RMT_MEM_SIZE_CH5_V)<<(RMT_MEM_SIZE_CH5_S))
#define RMT_MEM_SIZE_CH5_V  0xF
#define RMT_MEM_SIZE_CH5_S  24
/* RMT_IDLE_THRES_CH5 : R/W ;bitpos:[22:8] ;default: 15'h7fff ; */
/*description: When no edge is detected on the input signal and continuous clock cycles is long
er than this register value, received process is finished..*/
#define RMT_IDLE_THRES_CH5    0x00007FFF
#define RMT_IDLE_THRES_CH5_M  ((RMT_IDLE_THRES_CH5_V)<<(RMT_IDLE_THRES_CH5_S))
#define RMT_IDLE_THRES_CH5_V  0x7FFF
#define RMT_IDLE_THRES_CH5_S  8
/* RMT_DIV_CNT_CH5 : R/W ;bitpos:[7:0] ;default: 8'h2 ; */
/*description: This register is used to configure the divider for clock of CHANNEL$m..*/
#define RMT_DIV_CNT_CH5    0x000000FF
#define RMT_DIV_CNT_CH5_M  ((RMT_DIV_CNT_CH5_V)<<(RMT_DIV_CNT_CH5_S))
#define RMT_DIV_CNT_CH5_V  0xFF
#define RMT_DIV_CNT_CH5_S  0

#define RMT_CH5CONF1_REG          (DR_REG_RMT_BASE + 0x3C)
/* RMT_CONF_UPDATE_CH5 : WT ;bitpos:[15] ;default: 1'b0 ; */
/*description: synchronization bit for CHANNEL$m.*/
#define RMT_CONF_UPDATE_CH5    (BIT(15))
#define RMT_CONF_UPDATE_CH5_M  (BIT(15))
#define RMT_CONF_UPDATE_CH5_V  0x1
#define RMT_CONF_UPDATE_CH5_S  15
/* RMT_AFIFO_RST_CH5 : WT ;bitpos:[14] ;default: 1'b0 ; */
/*description: Reserved.*/
#define RMT_AFIFO_RST_CH5    (BIT(14))
#define RMT_AFIFO_RST_CH5_M  (BIT(14))
#define RMT_AFIFO_RST_CH5_V  0x1
#define RMT_AFIFO_RST_CH5_S  14
/* RMT_MEM_RX_WRAP_EN_CH5 : R/W ;bitpos:[13] ;default: 1'b0 ; */
/*description: This is the channel $m enable bit for wraparound mode: it will resume receiving
at the start when the data to be received is more than its memory size..*/
#define RMT_MEM_RX_WRAP_EN_CH5    (BIT(13))
#define RMT_MEM_RX_WRAP_EN_CH5_M  (BIT(13))
#define RMT_MEM_RX_WRAP_EN_CH5_V  0x1
#define RMT_MEM_RX_WRAP_EN_CH5_S  13
/* RMT_RX_FILTER_THRES_CH5 : R/W ;bitpos:[12:5] ;default: 8'hf ; */
/*description: Ignores the input pulse when its width is smaller than this register value in AP
B clock periods (in receive mode)..*/
#define RMT_RX_FILTER_THRES_CH5    0x000000FF
#define RMT_RX_FILTER_THRES_CH5_M  ((RMT_RX_FILTER_THRES_CH5_V)<<(RMT_RX_FILTER_THRES_CH5_S))
#define RMT_RX_FILTER_THRES_CH5_V  0xFF
#define RMT_RX_FILTER_THRES_CH5_S  5
/* RMT_RX_FILTER_EN_CH5 : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: This is the receive filter's enable bit for CHANNEL$m..*/
#define RMT_RX_FILTER_EN_CH5    (BIT(4))
#define RMT_RX_FILTER_EN_CH5_M  (BIT(4))
#define RMT_RX_FILTER_EN_CH5_V  0x1
#define RMT_RX_FILTER_EN_CH5_S  4
/* RMT_MEM_OWNER_CH5 : R/W/SC ;bitpos:[3] ;default: 1'b1 ; */
/*description: This register marks the ownership of CHANNEL$m's ram block.; ; 1'h1: Receiver is
 using the ram. ; ; 1'h0: APB bus is using the ram..*/
#define RMT_MEM_OWNER_CH5    (BIT(3))
#define RMT_MEM_OWNER_CH5_M  (BIT(3))
#define RMT_MEM_OWNER_CH5_V  0x1
#define RMT_MEM_OWNER_CH5_S  3
/* RMT_APB_MEM_RST_CH5 : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit to reset W/R ram address for CHANNEL$m by accessing apb fifo..*/
#define RMT_APB_MEM_RST_CH5    (BIT(2))
#define RMT_APB_MEM_RST_CH5_M  (BIT(2))
#define RMT_APB_MEM_RST_CH5_V  0x1
#define RMT_APB_MEM_RST_CH5_S  2
/* RMT_MEM_WR_RST_CH5 : WT ;bitpos:[1] ;default: 1'h0 ; */
/*description: Set this bit to reset write ram address for CHANNEL$m by accessing receiver..*/
#define RMT_MEM_WR_RST_CH5    (BIT(1))
#define RMT_MEM_WR_RST_CH5_M  (BIT(1))
#define RMT_MEM_WR_RST_CH5_V  0x1
#define RMT_MEM_WR_RST_CH5_S  1
/* RMT_RX_EN_CH5 : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Set this bit to enable receiver to receive data on CHANNEL$m..*/
#define RMT_RX_EN_CH5    (BIT(0))
#define RMT_RX_EN_CH5_M  (BIT(0))
#define RMT_RX_EN_CH5_V  0x1
#define RMT_RX_EN_CH5_S  0

#define RMT_CH6CONF0_REG          (DR_REG_RMT_BASE + 0x40)
/* RMT_CARRIER_OUT_LV_CH6 : R/W ;bitpos:[29] ;default: 1'b1 ; */
/*description: This bit is used to configure the position of carrier wave for CHANNEL$m.; ; 1'h
0: add carrier wave on low level.; ; 1'h1: add carrier wave on high level..*/
#define RMT_CARRIER_OUT_LV_CH6    (BIT(29))
#define RMT_CARRIER_OUT_LV_CH6_M  (BIT(29))
#define RMT_CARRIER_OUT_LV_CH6_V  0x1
#define RMT_CARRIER_OUT_LV_CH6_S  29
/* RMT_CARRIER_EN_CH6 : R/W ;bitpos:[28] ;default: 1'b1 ; */
/*description: This is the carrier modulation enable-control bit for CHANNEL$m. 1: Add carrier
modulation in the output signal. 0: No carrier modulation in sig_out..*/
#define RMT_CARRIER_EN_CH6    (BIT(28))
#define RMT_CARRIER_EN_CH6_M  (BIT(28))
#define RMT_CARRIER_EN_CH6_V  0x1
#define RMT_CARRIER_EN_CH6_S  28
/* RMT_MEM_SIZE_CH6 : R/W ;bitpos:[27:24] ;default: 4'h1 ; */
/*description: This register is used to configure the maximum size of memory allocated to CHANN
EL$m..*/
#define RMT_MEM_SIZE_CH6    0x0000000F
#define RMT_MEM_SIZE_CH6_M  ((RMT_MEM_SIZE_CH6_V)<<(RMT_MEM_SIZE_CH6_S))
#define RMT_MEM_SIZE_CH6_V  0xF
#define RMT_MEM_SIZE_CH6_S  24
/* RMT_IDLE_THRES_CH6 : R/W ;bitpos:[22:8] ;default: 15'h7fff ; */
/*description: When no edge is detected on the input signal and continuous clock cycles is long
er than this register value, received process is finished..*/
#define RMT_IDLE_THRES_CH6    0x00007FFF
#define RMT_IDLE_THRES_CH6_M  ((RMT_IDLE_THRES_CH6_V)<<(RMT_IDLE_THRES_CH6_S))
#define RMT_IDLE_THRES_CH6_V  0x7FFF
#define RMT_IDLE_THRES_CH6_S  8
/* RMT_DIV_CNT_CH6 : R/W ;bitpos:[7:0] ;default: 8'h2 ; */
/*description: This register is used to configure the divider for clock of CHANNEL$m..*/
#define RMT_DIV_CNT_CH6    0x000000FF
#define RMT_DIV_CNT_CH6_M  ((RMT_DIV_CNT_CH6_V)<<(RMT_DIV_CNT_CH6_S))
#define RMT_DIV_CNT_CH6_V  0xFF
#define RMT_DIV_CNT_CH6_S  0

#define RMT_CH6CONF1_REG          (DR_REG_RMT_BASE + 0x44)
/* RMT_CONF_UPDATE_CH6 : WT ;bitpos:[15] ;default: 1'b0 ; */
/*description: synchronization bit for CHANNEL$m.*/
#define RMT_CONF_UPDATE_CH6    (BIT(15))
#define RMT_CONF_UPDATE_CH6_M  (BIT(15))
#define RMT_CONF_UPDATE_CH6_V  0x1
#define RMT_CONF_UPDATE_CH6_S  15
/* RMT_AFIFO_RST_CH6 : WT ;bitpos:[14] ;default: 1'b0 ; */
/*description: Reserved.*/
#define RMT_AFIFO_RST_CH6    (BIT(14))
#define RMT_AFIFO_RST_CH6_M  (BIT(14))
#define RMT_AFIFO_RST_CH6_V  0x1
#define RMT_AFIFO_RST_CH6_S  14
/* RMT_MEM_RX_WRAP_EN_CH6 : R/W ;bitpos:[13] ;default: 1'b0 ; */
/*description: This is the channel $m enable bit for wraparound mode: it will resume receiving
at the start when the data to be received is more than its memory size..*/
#define RMT_MEM_RX_WRAP_EN_CH6    (BIT(13))
#define RMT_MEM_RX_WRAP_EN_CH6_M  (BIT(13))
#define RMT_MEM_RX_WRAP_EN_CH6_V  0x1
#define RMT_MEM_RX_WRAP_EN_CH6_S  13
/* RMT_RX_FILTER_THRES_CH6 : R/W ;bitpos:[12:5] ;default: 8'hf ; */
/*description: Ignores the input pulse when its width is smaller than this register value in AP
B clock periods (in receive mode)..*/
#define RMT_RX_FILTER_THRES_CH6    0x000000FF
#define RMT_RX_FILTER_THRES_CH6_M  ((RMT_RX_FILTER_THRES_CH6_V)<<(RMT_RX_FILTER_THRES_CH6_S))
#define RMT_RX_FILTER_THRES_CH6_V  0xFF
#define RMT_RX_FILTER_THRES_CH6_S  5
/* RMT_RX_FILTER_EN_CH6 : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: This is the receive filter's enable bit for CHANNEL$m..*/
#define RMT_RX_FILTER_EN_CH6    (BIT(4))
#define RMT_RX_FILTER_EN_CH6_M  (BIT(4))
#define RMT_RX_FILTER_EN_CH6_V  0x1
#define RMT_RX_FILTER_EN_CH6_S  4
/* RMT_MEM_OWNER_CH6 : R/W/SC ;bitpos:[3] ;default: 1'b1 ; */
/*description: This register marks the ownership of CHANNEL$m's ram block.; ; 1'h1: Receiver is
 using the ram. ; ; 1'h0: APB bus is using the ram..*/
#define RMT_MEM_OWNER_CH6    (BIT(3))
#define RMT_MEM_OWNER_CH6_M  (BIT(3))
#define RMT_MEM_OWNER_CH6_V  0x1
#define RMT_MEM_OWNER_CH6_S  3
/* RMT_APB_MEM_RST_CH6 : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit to reset W/R ram address for CHANNEL$m by accessing apb fifo..*/
#define RMT_APB_MEM_RST_CH6    (BIT(2))
#define RMT_APB_MEM_RST_CH6_M  (BIT(2))
#define RMT_APB_MEM_RST_CH6_V  0x1
#define RMT_APB_MEM_RST_CH6_S  2
/* RMT_MEM_WR_RST_CH6 : WT ;bitpos:[1] ;default: 1'h0 ; */
/*description: Set this bit to reset write ram address for CHANNEL$m by accessing receiver..*/
#define RMT_MEM_WR_RST_CH6    (BIT(1))
#define RMT_MEM_WR_RST_CH6_M  (BIT(1))
#define RMT_MEM_WR_RST_CH6_V  0x1
#define RMT_MEM_WR_RST_CH6_S  1
/* RMT_RX_EN_CH6 : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Set this bit to enable receiver to receive data on CHANNEL$m..*/
#define RMT_RX_EN_CH6    (BIT(0))
#define RMT_RX_EN_CH6_M  (BIT(0))
#define RMT_RX_EN_CH6_V  0x1
#define RMT_RX_EN_CH6_S  0

#define RMT_CH7CONF0_REG          (DR_REG_RMT_BASE + 0x48)
/* RMT_CARRIER_OUT_LV_CH7 : R/W ;bitpos:[29] ;default: 1'b1 ; */
/*description: This bit is used to configure the position of carrier wave for CHANNEL$m.; ; 1'h
0: add carrier wave on low level.; ; 1'h1: add carrier wave on high level..*/
#define RMT_CARRIER_OUT_LV_CH7    (BIT(29))
#define RMT_CARRIER_OUT_LV_CH7_M  (BIT(29))
#define RMT_CARRIER_OUT_LV_CH7_V  0x1
#define RMT_CARRIER_OUT_LV_CH7_S  29
/* RMT_CARRIER_EN_CH7 : R/W ;bitpos:[28] ;default: 1'b1 ; */
/*description: This is the carrier modulation enable-control bit for CHANNEL$m. 1: Add carrier
modulation in the output signal. 0: No carrier modulation in sig_out..*/
#define RMT_CARRIER_EN_CH7    (BIT(28))
#define RMT_CARRIER_EN_CH7_M  (BIT(28))
#define RMT_CARRIER_EN_CH7_V  0x1
#define RMT_CARRIER_EN_CH7_S  28
/* RMT_MEM_SIZE_CH7 : R/W ;bitpos:[27:24] ;default: 4'h1 ; */
/*description: This register is used to configure the maximum size of memory allocated to CHANN
EL$m..*/
#define RMT_MEM_SIZE_CH7    0x0000000F
#define RMT_MEM_SIZE_CH7_M  ((RMT_MEM_SIZE_CH7_V)<<(RMT_MEM_SIZE_CH7_S))
#define RMT_MEM_SIZE_CH7_V  0xF
#define RMT_MEM_SIZE_CH7_S  24
/* RMT_DMA_ACCESS_EN_CH7 : R/W ;bitpos:[23] ;default: 1'b0 ; */
/*description: This bit is used to enable the dma access function for CHANNEL$m..*/
#define RMT_DMA_ACCESS_EN_CH7    (BIT(23))
#define RMT_DMA_ACCESS_EN_CH7_M  (BIT(23))
#define RMT_DMA_ACCESS_EN_CH7_V  0x1
#define RMT_DMA_ACCESS_EN_CH7_S  23
/* RMT_IDLE_THRES_CH7 : R/W ;bitpos:[22:8] ;default: 15'h7fff ; */
/*description: When no edge is detected on the input signal and continuous clock cycles is long
er than this register value, received process is finished..*/
#define RMT_IDLE_THRES_CH7    0x00007FFF
#define RMT_IDLE_THRES_CH7_M  ((RMT_IDLE_THRES_CH7_V)<<(RMT_IDLE_THRES_CH7_S))
#define RMT_IDLE_THRES_CH7_V  0x7FFF
#define RMT_IDLE_THRES_CH7_S  8
/* RMT_DIV_CNT_CH7 : R/W ;bitpos:[7:0] ;default: 8'h2 ; */
/*description: This register is used to configure the divider for clock of CHANNEL$m..*/
#define RMT_DIV_CNT_CH7    0x000000FF
#define RMT_DIV_CNT_CH7_M  ((RMT_DIV_CNT_CH7_V)<<(RMT_DIV_CNT_CH7_S))
#define RMT_DIV_CNT_CH7_V  0xFF
#define RMT_DIV_CNT_CH7_S  0

#define RMT_CH7CONF1_REG          (DR_REG_RMT_BASE + 0x4C)
/* RMT_CONF_UPDATE_CH7 : WT ;bitpos:[15] ;default: 1'b0 ; */
/*description: synchronization bit for CHANNEL$m.*/
#define RMT_CONF_UPDATE_CH7    (BIT(15))
#define RMT_CONF_UPDATE_CH7_M  (BIT(15))
#define RMT_CONF_UPDATE_CH7_V  0x1
#define RMT_CONF_UPDATE_CH7_S  15
/* RMT_AFIFO_RST_CH7 : WT ;bitpos:[14] ;default: 1'b0 ; */
/*description: Reserved.*/
#define RMT_AFIFO_RST_CH7    (BIT(14))
#define RMT_AFIFO_RST_CH7_M  (BIT(14))
#define RMT_AFIFO_RST_CH7_V  0x1
#define RMT_AFIFO_RST_CH7_S  14
/* RMT_MEM_RX_WRAP_EN_CH7 : R/W ;bitpos:[13] ;default: 1'b0 ; */
/*description: This is the channel $m enable bit for wraparound mode: it will resume receiving
at the start when the data to be received is more than its memory size..*/
#define RMT_MEM_RX_WRAP_EN_CH7    (BIT(13))
#define RMT_MEM_RX_WRAP_EN_CH7_M  (BIT(13))
#define RMT_MEM_RX_WRAP_EN_CH7_V  0x1
#define RMT_MEM_RX_WRAP_EN_CH7_S  13
/* RMT_RX_FILTER_THRES_CH7 : R/W ;bitpos:[12:5] ;default: 8'hf ; */
/*description: Ignores the input pulse when its width is smaller than this register value in AP
B clock periods (in receive mode)..*/
#define RMT_RX_FILTER_THRES_CH7    0x000000FF
#define RMT_RX_FILTER_THRES_CH7_M  ((RMT_RX_FILTER_THRES_CH7_V)<<(RMT_RX_FILTER_THRES_CH7_S))
#define RMT_RX_FILTER_THRES_CH7_V  0xFF
#define RMT_RX_FILTER_THRES_CH7_S  5
/* RMT_RX_FILTER_EN_CH7 : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: This is the receive filter's enable bit for CHANNEL$m..*/
#define RMT_RX_FILTER_EN_CH7    (BIT(4))
#define RMT_RX_FILTER_EN_CH7_M  (BIT(4))
#define RMT_RX_FILTER_EN_CH7_V  0x1
#define RMT_RX_FILTER_EN_CH7_S  4
/* RMT_MEM_OWNER_CH7 : R/W/SC ;bitpos:[3] ;default: 1'b1 ; */
/*description: This register marks the ownership of CHANNEL$m's ram block.; ; 1'h1: Receiver is
 using the ram. ; ; 1'h0: APB bus is using the ram..*/
#define RMT_MEM_OWNER_CH7    (BIT(3))
#define RMT_MEM_OWNER_CH7_M  (BIT(3))
#define RMT_MEM_OWNER_CH7_V  0x1
#define RMT_MEM_OWNER_CH7_S  3
/* RMT_APB_MEM_RST_CH7 : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit to reset W/R ram address for CHANNEL$m by accessing apb fifo..*/
#define RMT_APB_MEM_RST_CH7    (BIT(2))
#define RMT_APB_MEM_RST_CH7_M  (BIT(2))
#define RMT_APB_MEM_RST_CH7_V  0x1
#define RMT_APB_MEM_RST_CH7_S  2
/* RMT_MEM_WR_RST_CH7 : WT ;bitpos:[1] ;default: 1'h0 ; */
/*description: Set this bit to reset write ram address for CHANNEL$m by accessing receiver..*/
#define RMT_MEM_WR_RST_CH7    (BIT(1))
#define RMT_MEM_WR_RST_CH7_M  (BIT(1))
#define RMT_MEM_WR_RST_CH7_V  0x1
#define RMT_MEM_WR_RST_CH7_S  1
/* RMT_RX_EN_CH7 : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Set this bit to enable receiver to receive data on CHANNEL$m..*/
#define RMT_RX_EN_CH7    (BIT(0))
#define RMT_RX_EN_CH7_M  (BIT(0))
#define RMT_RX_EN_CH7_V  0x1
#define RMT_RX_EN_CH7_S  0

#define RMT_CH0STATUS_REG          (DR_REG_RMT_BASE + 0x50)
/* RMT_APB_MEM_WR_ERR_CH0 : RO ;bitpos:[26] ;default: 1'b0 ; */
/*description: This status bit will be set if the offset address out of memory size when writes
 via APB bus..*/
#define RMT_APB_MEM_WR_ERR_CH0    (BIT(26))
#define RMT_APB_MEM_WR_ERR_CH0_M  (BIT(26))
#define RMT_APB_MEM_WR_ERR_CH0_V  0x1
#define RMT_APB_MEM_WR_ERR_CH0_S  26
/* RMT_MEM_EMPTY_CH0 : RO ;bitpos:[25] ;default: 1'b0 ; */
/*description: This status bit will be set when the data to be set is more than memory size and
 the wraparound mode is disabled..*/
#define RMT_MEM_EMPTY_CH0    (BIT(25))
#define RMT_MEM_EMPTY_CH0_M  (BIT(25))
#define RMT_MEM_EMPTY_CH0_V  0x1
#define RMT_MEM_EMPTY_CH0_S  25
/* RMT_STATE_CH0 : RO ;bitpos:[24:22] ;default: 3'b0 ; */
/*description: This register records the FSM status of CHANNEL$n..*/
#define RMT_STATE_CH0    0x00000007
#define RMT_STATE_CH0_M  ((RMT_STATE_CH0_V)<<(RMT_STATE_CH0_S))
#define RMT_STATE_CH0_V  0x7
#define RMT_STATE_CH0_S  22
/* RMT_APB_MEM_WADDR_CH0 : RO ;bitpos:[20:11] ;default: 10'b0 ; */
/*description: This register records the memory address offset when writes RAM over APB bus..*/
#define RMT_APB_MEM_WADDR_CH0    0x000003FF
#define RMT_APB_MEM_WADDR_CH0_M  ((RMT_APB_MEM_WADDR_CH0_V)<<(RMT_APB_MEM_WADDR_CH0_S))
#define RMT_APB_MEM_WADDR_CH0_V  0x3FF
#define RMT_APB_MEM_WADDR_CH0_S  11
/* RMT_MEM_RADDR_EX_CH0 : RO ;bitpos:[9:0] ;default: 10'b0 ; */
/*description: This register records the memory address offset when transmitter of CHANNEL$n is
 using the RAM..*/
#define RMT_MEM_RADDR_EX_CH0    0x000003FF
#define RMT_MEM_RADDR_EX_CH0_M  ((RMT_MEM_RADDR_EX_CH0_V)<<(RMT_MEM_RADDR_EX_CH0_S))
#define RMT_MEM_RADDR_EX_CH0_V  0x3FF
#define RMT_MEM_RADDR_EX_CH0_S  0

#define RMT_CH1STATUS_REG          (DR_REG_RMT_BASE + 0x54)
/* RMT_APB_MEM_WR_ERR_CH1 : RO ;bitpos:[26] ;default: 1'b0 ; */
/*description: This status bit will be set if the offset address out of memory size when writes
 via APB bus..*/
#define RMT_APB_MEM_WR_ERR_CH1    (BIT(26))
#define RMT_APB_MEM_WR_ERR_CH1_M  (BIT(26))
#define RMT_APB_MEM_WR_ERR_CH1_V  0x1
#define RMT_APB_MEM_WR_ERR_CH1_S  26
/* RMT_MEM_EMPTY_CH1 : RO ;bitpos:[25] ;default: 1'b0 ; */
/*description: This status bit will be set when the data to be set is more than memory size and
 the wraparound mode is disabled..*/
#define RMT_MEM_EMPTY_CH1    (BIT(25))
#define RMT_MEM_EMPTY_CH1_M  (BIT(25))
#define RMT_MEM_EMPTY_CH1_V  0x1
#define RMT_MEM_EMPTY_CH1_S  25
/* RMT_STATE_CH1 : RO ;bitpos:[24:22] ;default: 3'b0 ; */
/*description: This register records the FSM status of CHANNEL$n..*/
#define RMT_STATE_CH1    0x00000007
#define RMT_STATE_CH1_M  ((RMT_STATE_CH1_V)<<(RMT_STATE_CH1_S))
#define RMT_STATE_CH1_V  0x7
#define RMT_STATE_CH1_S  22
/* RMT_APB_MEM_WADDR_CH1 : RO ;bitpos:[20:11] ;default: 10'h30 ; */
/*description: This register records the memory address offset when writes RAM over APB bus..*/
#define RMT_APB_MEM_WADDR_CH1    0x000003FF
#define RMT_APB_MEM_WADDR_CH1_M  ((RMT_APB_MEM_WADDR_CH1_V)<<(RMT_APB_MEM_WADDR_CH1_S))
#define RMT_APB_MEM_WADDR_CH1_V  0x3FF
#define RMT_APB_MEM_WADDR_CH1_S  11
/* RMT_MEM_RADDR_EX_CH1 : RO ;bitpos:[9:0] ;default: 10'h30 ; */
/*description: This register records the memory address offset when transmitter of CHANNEL$n is
 using the RAM..*/
#define RMT_MEM_RADDR_EX_CH1    0x000003FF
#define RMT_MEM_RADDR_EX_CH1_M  ((RMT_MEM_RADDR_EX_CH1_V)<<(RMT_MEM_RADDR_EX_CH1_S))
#define RMT_MEM_RADDR_EX_CH1_V  0x3FF
#define RMT_MEM_RADDR_EX_CH1_S  0

#define RMT_CH2STATUS_REG          (DR_REG_RMT_BASE + 0x58)
/* RMT_APB_MEM_WR_ERR_CH2 : RO ;bitpos:[26] ;default: 1'b0 ; */
/*description: This status bit will be set if the offset address out of memory size when writes
 via APB bus..*/
#define RMT_APB_MEM_WR_ERR_CH2    (BIT(26))
#define RMT_APB_MEM_WR_ERR_CH2_M  (BIT(26))
#define RMT_APB_MEM_WR_ERR_CH2_V  0x1
#define RMT_APB_MEM_WR_ERR_CH2_S  26
/* RMT_MEM_EMPTY_CH2 : RO ;bitpos:[25] ;default: 1'b0 ; */
/*description: This status bit will be set when the data to be set is more than memory size and
 the wraparound mode is disabled..*/
#define RMT_MEM_EMPTY_CH2    (BIT(25))
#define RMT_MEM_EMPTY_CH2_M  (BIT(25))
#define RMT_MEM_EMPTY_CH2_V  0x1
#define RMT_MEM_EMPTY_CH2_S  25
/* RMT_STATE_CH2 : RO ;bitpos:[24:22] ;default: 3'b0 ; */
/*description: This register records the FSM status of CHANNEL$n..*/
#define RMT_STATE_CH2    0x00000007
#define RMT_STATE_CH2_M  ((RMT_STATE_CH2_V)<<(RMT_STATE_CH2_S))
#define RMT_STATE_CH2_V  0x7
#define RMT_STATE_CH2_S  22
/* RMT_APB_MEM_WADDR_CH2 : RO ;bitpos:[20:11] ;default: 10'h60 ; */
/*description: This register records the memory address offset when writes RAM over APB bus..*/
#define RMT_APB_MEM_WADDR_CH2    0x000003FF
#define RMT_APB_MEM_WADDR_CH2_M  ((RMT_APB_MEM_WADDR_CH2_V)<<(RMT_APB_MEM_WADDR_CH2_S))
#define RMT_APB_MEM_WADDR_CH2_V  0x3FF
#define RMT_APB_MEM_WADDR_CH2_S  11
/* RMT_MEM_RADDR_EX_CH2 : RO ;bitpos:[9:0] ;default: 10'h60 ; */
/*description: This register records the memory address offset when transmitter of CHANNEL$n is
 using the RAM..*/
#define RMT_MEM_RADDR_EX_CH2    0x000003FF
#define RMT_MEM_RADDR_EX_CH2_M  ((RMT_MEM_RADDR_EX_CH2_V)<<(RMT_MEM_RADDR_EX_CH2_S))
#define RMT_MEM_RADDR_EX_CH2_V  0x3FF
#define RMT_MEM_RADDR_EX_CH2_S  0

#define RMT_CH3STATUS_REG          (DR_REG_RMT_BASE + 0x5C)
/* RMT_APB_MEM_WR_ERR_CH3 : RO ;bitpos:[26] ;default: 1'b0 ; */
/*description: This status bit will be set if the offset address out of memory size when writes
 via APB bus..*/
#define RMT_APB_MEM_WR_ERR_CH3    (BIT(26))
#define RMT_APB_MEM_WR_ERR_CH3_M  (BIT(26))
#define RMT_APB_MEM_WR_ERR_CH3_V  0x1
#define RMT_APB_MEM_WR_ERR_CH3_S  26
/* RMT_MEM_EMPTY_CH3 : RO ;bitpos:[25] ;default: 1'b0 ; */
/*description: This status bit will be set when the data to be set is more than memory size and
 the wraparound mode is disabled..*/
#define RMT_MEM_EMPTY_CH3    (BIT(25))
#define RMT_MEM_EMPTY_CH3_M  (BIT(25))
#define RMT_MEM_EMPTY_CH3_V  0x1
#define RMT_MEM_EMPTY_CH3_S  25
/* RMT_STATE_CH3 : RO ;bitpos:[24:22] ;default: 3'b0 ; */
/*description: This register records the FSM status of CHANNEL$n..*/
#define RMT_STATE_CH3    0x00000007
#define RMT_STATE_CH3_M  ((RMT_STATE_CH3_V)<<(RMT_STATE_CH3_S))
#define RMT_STATE_CH3_V  0x7
#define RMT_STATE_CH3_S  22
/* RMT_APB_MEM_WADDR_CH3 : RO ;bitpos:[20:11] ;default: 10'h90 ; */
/*description: This register records the memory address offset when writes RAM over APB bus..*/
#define RMT_APB_MEM_WADDR_CH3    0x000003FF
#define RMT_APB_MEM_WADDR_CH3_M  ((RMT_APB_MEM_WADDR_CH3_V)<<(RMT_APB_MEM_WADDR_CH3_S))
#define RMT_APB_MEM_WADDR_CH3_V  0x3FF
#define RMT_APB_MEM_WADDR_CH3_S  11
/* RMT_MEM_RADDR_EX_CH3 : RO ;bitpos:[9:0] ;default: 10'h90 ; */
/*description: This register records the memory address offset when transmitter of CHANNEL$n is
 using the RAM..*/
#define RMT_MEM_RADDR_EX_CH3    0x000003FF
#define RMT_MEM_RADDR_EX_CH3_M  ((RMT_MEM_RADDR_EX_CH3_V)<<(RMT_MEM_RADDR_EX_CH3_S))
#define RMT_MEM_RADDR_EX_CH3_V  0x3FF
#define RMT_MEM_RADDR_EX_CH3_S  0

#define RMT_CH4STATUS_REG          (DR_REG_RMT_BASE + 0x60)
/* RMT_APB_MEM_RD_ERR_CH4 : RO ;bitpos:[27] ;default: 1'b0 ; */
/*description: This status bit will be set if the offset address out of memory size when reads
via APB bus..*/
#define RMT_APB_MEM_RD_ERR_CH4    (BIT(27))
#define RMT_APB_MEM_RD_ERR_CH4_M  (BIT(27))
#define RMT_APB_MEM_RD_ERR_CH4_V  0x1
#define RMT_APB_MEM_RD_ERR_CH4_S  27
/* RMT_MEM_FULL_CH4 : RO ;bitpos:[26] ;default: 1'b0 ; */
/*description: This status bit will be set if the receiver receives more data than the memory s
ize..*/
#define RMT_MEM_FULL_CH4    (BIT(26))
#define RMT_MEM_FULL_CH4_M  (BIT(26))
#define RMT_MEM_FULL_CH4_V  0x1
#define RMT_MEM_FULL_CH4_S  26
/* RMT_MEM_OWNER_ERR_CH4 : RO ;bitpos:[25] ;default: 1'b0 ; */
/*description: This status bit will be set when the ownership of memory block is wrong..*/
#define RMT_MEM_OWNER_ERR_CH4    (BIT(25))
#define RMT_MEM_OWNER_ERR_CH4_M  (BIT(25))
#define RMT_MEM_OWNER_ERR_CH4_V  0x1
#define RMT_MEM_OWNER_ERR_CH4_S  25
/* RMT_STATE_CH4 : RO ;bitpos:[24:22] ;default: 3'b0 ; */
/*description: This register records the FSM status of CHANNEL$m..*/
#define RMT_STATE_CH4    0x00000007
#define RMT_STATE_CH4_M  ((RMT_STATE_CH4_V)<<(RMT_STATE_CH4_S))
#define RMT_STATE_CH4_V  0x7
#define RMT_STATE_CH4_S  22
/* RMT_APB_MEM_RADDR_CH4 : RO ;bitpos:[20:11] ;default: 10'hc0 ; */
/*description: This register records the memory address offset when reads RAM over APB bus..*/
#define RMT_APB_MEM_RADDR_CH4    0x000003FF
#define RMT_APB_MEM_RADDR_CH4_M  ((RMT_APB_MEM_RADDR_CH4_V)<<(RMT_APB_MEM_RADDR_CH4_S))
#define RMT_APB_MEM_RADDR_CH4_V  0x3FF
#define RMT_APB_MEM_RADDR_CH4_S  11
/* RMT_MEM_WADDR_EX_CH4 : RO ;bitpos:[9:0] ;default: 10'hc0 ; */
/*description: This register records the memory address offset when receiver of CHANNEL$m is us
ing the RAM..*/
#define RMT_MEM_WADDR_EX_CH4    0x000003FF
#define RMT_MEM_WADDR_EX_CH4_M  ((RMT_MEM_WADDR_EX_CH4_V)<<(RMT_MEM_WADDR_EX_CH4_S))
#define RMT_MEM_WADDR_EX_CH4_V  0x3FF
#define RMT_MEM_WADDR_EX_CH4_S  0

#define RMT_CH5STATUS_REG          (DR_REG_RMT_BASE + 0x64)
/* RMT_APB_MEM_RD_ERR_CH5 : RO ;bitpos:[27] ;default: 1'b0 ; */
/*description: This status bit will be set if the offset address out of memory size when reads
via APB bus..*/
#define RMT_APB_MEM_RD_ERR_CH5    (BIT(27))
#define RMT_APB_MEM_RD_ERR_CH5_M  (BIT(27))
#define RMT_APB_MEM_RD_ERR_CH5_V  0x1
#define RMT_APB_MEM_RD_ERR_CH5_S  27
/* RMT_MEM_FULL_CH5 : RO ;bitpos:[26] ;default: 1'b0 ; */
/*description: This status bit will be set if the receiver receives more data than the memory s
ize..*/
#define RMT_MEM_FULL_CH5    (BIT(26))
#define RMT_MEM_FULL_CH5_M  (BIT(26))
#define RMT_MEM_FULL_CH5_V  0x1
#define RMT_MEM_FULL_CH5_S  26
/* RMT_MEM_OWNER_ERR_CH5 : RO ;bitpos:[25] ;default: 1'b0 ; */
/*description: This status bit will be set when the ownership of memory block is wrong..*/
#define RMT_MEM_OWNER_ERR_CH5    (BIT(25))
#define RMT_MEM_OWNER_ERR_CH5_M  (BIT(25))
#define RMT_MEM_OWNER_ERR_CH5_V  0x1
#define RMT_MEM_OWNER_ERR_CH5_S  25
/* RMT_STATE_CH5 : RO ;bitpos:[24:22] ;default: 3'b0 ; */
/*description: This register records the FSM status of CHANNEL$m..*/
#define RMT_STATE_CH5    0x00000007
#define RMT_STATE_CH5_M  ((RMT_STATE_CH5_V)<<(RMT_STATE_CH5_S))
#define RMT_STATE_CH5_V  0x7
#define RMT_STATE_CH5_S  22
/* RMT_APB_MEM_RADDR_CH5 : RO ;bitpos:[20:11] ;default: 10'hf0 ; */
/*description: This register records the memory address offset when reads RAM over APB bus..*/
#define RMT_APB_MEM_RADDR_CH5    0x000003FF
#define RMT_APB_MEM_RADDR_CH5_M  ((RMT_APB_MEM_RADDR_CH5_V)<<(RMT_APB_MEM_RADDR_CH5_S))
#define RMT_APB_MEM_RADDR_CH5_V  0x3FF
#define RMT_APB_MEM_RADDR_CH5_S  11
/* RMT_MEM_WADDR_EX_CH5 : RO ;bitpos:[9:0] ;default: 10'hf0 ; */
/*description: This register records the memory address offset when receiver of CHANNEL$m is us
ing the RAM..*/
#define RMT_MEM_WADDR_EX_CH5    0x000003FF
#define RMT_MEM_WADDR_EX_CH5_M  ((RMT_MEM_WADDR_EX_CH5_V)<<(RMT_MEM_WADDR_EX_CH5_S))
#define RMT_MEM_WADDR_EX_CH5_V  0x3FF
#define RMT_MEM_WADDR_EX_CH5_S  0

#define RMT_CH6STATUS_REG          (DR_REG_RMT_BASE + 0x68)
/* RMT_APB_MEM_RD_ERR_CH6 : RO ;bitpos:[27] ;default: 1'b0 ; */
/*description: This status bit will be set if the offset address out of memory size when reads
via APB bus..*/
#define RMT_APB_MEM_RD_ERR_CH6    (BIT(27))
#define RMT_APB_MEM_RD_ERR_CH6_M  (BIT(27))
#define RMT_APB_MEM_RD_ERR_CH6_V  0x1
#define RMT_APB_MEM_RD_ERR_CH6_S  27
/* RMT_MEM_FULL_CH6 : RO ;bitpos:[26] ;default: 1'b0 ; */
/*description: This status bit will be set if the receiver receives more data than the memory s
ize..*/
#define RMT_MEM_FULL_CH6    (BIT(26))
#define RMT_MEM_FULL_CH6_M  (BIT(26))
#define RMT_MEM_FULL_CH6_V  0x1
#define RMT_MEM_FULL_CH6_S  26
/* RMT_MEM_OWNER_ERR_CH6 : RO ;bitpos:[25] ;default: 1'b0 ; */
/*description: This status bit will be set when the ownership of memory block is wrong..*/
#define RMT_MEM_OWNER_ERR_CH6    (BIT(25))
#define RMT_MEM_OWNER_ERR_CH6_M  (BIT(25))
#define RMT_MEM_OWNER_ERR_CH6_V  0x1
#define RMT_MEM_OWNER_ERR_CH6_S  25
/* RMT_STATE_CH6 : RO ;bitpos:[24:22] ;default: 3'b0 ; */
/*description: This register records the FSM status of CHANNEL$m..*/
#define RMT_STATE_CH6    0x00000007
#define RMT_STATE_CH6_M  ((RMT_STATE_CH6_V)<<(RMT_STATE_CH6_S))
#define RMT_STATE_CH6_V  0x7
#define RMT_STATE_CH6_S  22
/* RMT_APB_MEM_RADDR_CH6 : RO ;bitpos:[20:11] ;default: 10'h120 ; */
/*description: This register records the memory address offset when reads RAM over APB bus..*/
#define RMT_APB_MEM_RADDR_CH6    0x000003FF
#define RMT_APB_MEM_RADDR_CH6_M  ((RMT_APB_MEM_RADDR_CH6_V)<<(RMT_APB_MEM_RADDR_CH6_S))
#define RMT_APB_MEM_RADDR_CH6_V  0x3FF
#define RMT_APB_MEM_RADDR_CH6_S  11
/* RMT_MEM_WADDR_EX_CH6 : RO ;bitpos:[9:0] ;default: 10'h120 ; */
/*description: This register records the memory address offset when receiver of CHANNEL$m is us
ing the RAM..*/
#define RMT_MEM_WADDR_EX_CH6    0x000003FF
#define RMT_MEM_WADDR_EX_CH6_M  ((RMT_MEM_WADDR_EX_CH6_V)<<(RMT_MEM_WADDR_EX_CH6_S))
#define RMT_MEM_WADDR_EX_CH6_V  0x3FF
#define RMT_MEM_WADDR_EX_CH6_S  0

#define RMT_CH7STATUS_REG          (DR_REG_RMT_BASE + 0x6C)
/* RMT_APB_MEM_RD_ERR_CH7 : RO ;bitpos:[27] ;default: 1'b0 ; */
/*description: This status bit will be set if the offset address out of memory size when reads
via APB bus..*/
#define RMT_APB_MEM_RD_ERR_CH7    (BIT(27))
#define RMT_APB_MEM_RD_ERR_CH7_M  (BIT(27))
#define RMT_APB_MEM_RD_ERR_CH7_V  0x1
#define RMT_APB_MEM_RD_ERR_CH7_S  27
/* RMT_MEM_FULL_CH7 : RO ;bitpos:[26] ;default: 1'b0 ; */
/*description: This status bit will be set if the receiver receives more data than the memory s
ize..*/
#define RMT_MEM_FULL_CH7    (BIT(26))
#define RMT_MEM_FULL_CH7_M  (BIT(26))
#define RMT_MEM_FULL_CH7_V  0x1
#define RMT_MEM_FULL_CH7_S  26
/* RMT_MEM_OWNER_ERR_CH7 : RO ;bitpos:[25] ;default: 1'b0 ; */
/*description: This status bit will be set when the ownership of memory block is wrong..*/
#define RMT_MEM_OWNER_ERR_CH7    (BIT(25))
#define RMT_MEM_OWNER_ERR_CH7_M  (BIT(25))
#define RMT_MEM_OWNER_ERR_CH7_V  0x1
#define RMT_MEM_OWNER_ERR_CH7_S  25
/* RMT_STATE_CH7 : RO ;bitpos:[24:22] ;default: 3'b0 ; */
/*description: This register records the FSM status of CHANNEL$m..*/
#define RMT_STATE_CH7    0x00000007
#define RMT_STATE_CH7_M  ((RMT_STATE_CH7_V)<<(RMT_STATE_CH7_S))
#define RMT_STATE_CH7_V  0x7
#define RMT_STATE_CH7_S  22
/* RMT_APB_MEM_RADDR_CH7 : RO ;bitpos:[20:11] ;default: 10'h150 ; */
/*description: This register records the memory address offset when reads RAM over APB bus..*/
#define RMT_APB_MEM_RADDR_CH7    0x000003FF
#define RMT_APB_MEM_RADDR_CH7_M  ((RMT_APB_MEM_RADDR_CH7_V)<<(RMT_APB_MEM_RADDR_CH7_S))
#define RMT_APB_MEM_RADDR_CH7_V  0x3FF
#define RMT_APB_MEM_RADDR_CH7_S  11
/* RMT_MEM_WADDR_EX_CH7 : RO ;bitpos:[9:0] ;default: 10'h150 ; */
/*description: This register records the memory address offset when receiver of CHANNEL$m is us
ing the RAM..*/
#define RMT_MEM_WADDR_EX_CH7    0x000003FF
#define RMT_MEM_WADDR_EX_CH7_M  ((RMT_MEM_WADDR_EX_CH7_V)<<(RMT_MEM_WADDR_EX_CH7_S))
#define RMT_MEM_WADDR_EX_CH7_V  0x3FF
#define RMT_MEM_WADDR_EX_CH7_S  0

#define RMT_INT_RAW_REG          (DR_REG_RMT_BASE + 0x70)
/* RMT_CH7_DMA_ACCESS_FAIL_INT_RAW : R/WTC/SS ;bitpos:[29] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$m. Triggered when dma accessing CHANNEL$m fail
s..*/
#define RMT_CH7_DMA_ACCESS_FAIL_INT_RAW    (BIT(29))
#define RMT_CH7_DMA_ACCESS_FAIL_INT_RAW_M  (BIT(29))
#define RMT_CH7_DMA_ACCESS_FAIL_INT_RAW_V  0x1
#define RMT_CH7_DMA_ACCESS_FAIL_INT_RAW_S  29
/* RMT_CH3_DMA_ACCESS_FAIL_INT_RAW : R/WTC/SS ;bitpos:[28] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$n. Triggered when dma accessing CHANNEL$n fail
s..*/
#define RMT_CH3_DMA_ACCESS_FAIL_INT_RAW    (BIT(28))
#define RMT_CH3_DMA_ACCESS_FAIL_INT_RAW_M  (BIT(28))
#define RMT_CH3_DMA_ACCESS_FAIL_INT_RAW_V  0x1
#define RMT_CH3_DMA_ACCESS_FAIL_INT_RAW_S  28
/* RMT_CH7_RX_THR_EVENT_INT_RAW : R/WTC/SS ;bitpos:[27] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$m. Triggered when receiver receive more data t
han configured value..*/
#define RMT_CH7_RX_THR_EVENT_INT_RAW    (BIT(27))
#define RMT_CH7_RX_THR_EVENT_INT_RAW_M  (BIT(27))
#define RMT_CH7_RX_THR_EVENT_INT_RAW_V  0x1
#define RMT_CH7_RX_THR_EVENT_INT_RAW_S  27
/* RMT_CH6_RX_THR_EVENT_INT_RAW : R/WTC/SS ;bitpos:[26] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$m. Triggered when receiver receive more data t
han configured value..*/
#define RMT_CH6_RX_THR_EVENT_INT_RAW    (BIT(26))
#define RMT_CH6_RX_THR_EVENT_INT_RAW_M  (BIT(26))
#define RMT_CH6_RX_THR_EVENT_INT_RAW_V  0x1
#define RMT_CH6_RX_THR_EVENT_INT_RAW_S  26
/* RMT_CH5_RX_THR_EVENT_INT_RAW : R/WTC/SS ;bitpos:[25] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$m. Triggered when receiver receive more data t
han configured value..*/
#define RMT_CH5_RX_THR_EVENT_INT_RAW    (BIT(25))
#define RMT_CH5_RX_THR_EVENT_INT_RAW_M  (BIT(25))
#define RMT_CH5_RX_THR_EVENT_INT_RAW_V  0x1
#define RMT_CH5_RX_THR_EVENT_INT_RAW_S  25
/* RMT_CH4_RX_THR_EVENT_INT_RAW : R/WTC/SS ;bitpos:[24] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$m. Triggered when receiver receive more data t
han configured value..*/
#define RMT_CH4_RX_THR_EVENT_INT_RAW    (BIT(24))
#define RMT_CH4_RX_THR_EVENT_INT_RAW_M  (BIT(24))
#define RMT_CH4_RX_THR_EVENT_INT_RAW_V  0x1
#define RMT_CH4_RX_THR_EVENT_INT_RAW_S  24
/* RMT_CH7_ERR_INT_RAW : R/WTC/SS ;bitpos:[23] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$m. Triggered when error occurs..*/
#define RMT_CH7_ERR_INT_RAW    (BIT(23))
#define RMT_CH7_ERR_INT_RAW_M  (BIT(23))
#define RMT_CH7_ERR_INT_RAW_V  0x1
#define RMT_CH7_ERR_INT_RAW_S  23
/* RMT_CH6_ERR_INT_RAW : R/WTC/SS ;bitpos:[22] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$m. Triggered when error occurs..*/
#define RMT_CH6_ERR_INT_RAW    (BIT(22))
#define RMT_CH6_ERR_INT_RAW_M  (BIT(22))
#define RMT_CH6_ERR_INT_RAW_V  0x1
#define RMT_CH6_ERR_INT_RAW_S  22
/* RMT_CH5_ERR_INT_RAW : R/WTC/SS ;bitpos:[21] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$m. Triggered when error occurs..*/
#define RMT_CH5_ERR_INT_RAW    (BIT(21))
#define RMT_CH5_ERR_INT_RAW_M  (BIT(21))
#define RMT_CH5_ERR_INT_RAW_V  0x1
#define RMT_CH5_ERR_INT_RAW_S  21
/* RMT_CH4_ERR_INT_RAW : R/WTC/SS ;bitpos:[20] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$m. Triggered when error occurs..*/
#define RMT_CH4_ERR_INT_RAW    (BIT(20))
#define RMT_CH4_ERR_INT_RAW_M  (BIT(20))
#define RMT_CH4_ERR_INT_RAW_V  0x1
#define RMT_CH4_ERR_INT_RAW_S  20
/* RMT_CH7_RX_END_INT_RAW : R/WTC/SS ;bitpos:[19] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$m. Triggered when reception done..*/
#define RMT_CH7_RX_END_INT_RAW    (BIT(19))
#define RMT_CH7_RX_END_INT_RAW_M  (BIT(19))
#define RMT_CH7_RX_END_INT_RAW_V  0x1
#define RMT_CH7_RX_END_INT_RAW_S  19
/* RMT_CH6_RX_END_INT_RAW : R/WTC/SS ;bitpos:[18] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$m. Triggered when reception done..*/
#define RMT_CH6_RX_END_INT_RAW    (BIT(18))
#define RMT_CH6_RX_END_INT_RAW_M  (BIT(18))
#define RMT_CH6_RX_END_INT_RAW_V  0x1
#define RMT_CH6_RX_END_INT_RAW_S  18
/* RMT_CH5_RX_END_INT_RAW : R/WTC/SS ;bitpos:[17] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$m. Triggered when reception done..*/
#define RMT_CH5_RX_END_INT_RAW    (BIT(17))
#define RMT_CH5_RX_END_INT_RAW_M  (BIT(17))
#define RMT_CH5_RX_END_INT_RAW_V  0x1
#define RMT_CH5_RX_END_INT_RAW_S  17
/* RMT_CH4_RX_END_INT_RAW : R/WTC/SS ;bitpos:[16] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$m. Triggered when reception done..*/
#define RMT_CH4_RX_END_INT_RAW    (BIT(16))
#define RMT_CH4_RX_END_INT_RAW_M  (BIT(16))
#define RMT_CH4_RX_END_INT_RAW_V  0x1
#define RMT_CH4_RX_END_INT_RAW_S  16
/* RMT_CH3_TX_LOOP_INT_RAW : R/WTC/SS ;bitpos:[15] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$n. Triggered when the loop count reaches the c
onfigured threshold value..*/
#define RMT_CH3_TX_LOOP_INT_RAW    (BIT(15))
#define RMT_CH3_TX_LOOP_INT_RAW_M  (BIT(15))
#define RMT_CH3_TX_LOOP_INT_RAW_V  0x1
#define RMT_CH3_TX_LOOP_INT_RAW_S  15
/* RMT_CH2_TX_LOOP_INT_RAW : R/WTC/SS ;bitpos:[14] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$n. Triggered when the loop count reaches the c
onfigured threshold value..*/
#define RMT_CH2_TX_LOOP_INT_RAW    (BIT(14))
#define RMT_CH2_TX_LOOP_INT_RAW_M  (BIT(14))
#define RMT_CH2_TX_LOOP_INT_RAW_V  0x1
#define RMT_CH2_TX_LOOP_INT_RAW_S  14
/* RMT_CH1_TX_LOOP_INT_RAW : R/WTC/SS ;bitpos:[13] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$n. Triggered when the loop count reaches the c
onfigured threshold value..*/
#define RMT_CH1_TX_LOOP_INT_RAW    (BIT(13))
#define RMT_CH1_TX_LOOP_INT_RAW_M  (BIT(13))
#define RMT_CH1_TX_LOOP_INT_RAW_V  0x1
#define RMT_CH1_TX_LOOP_INT_RAW_S  13
/* RMT_CH0_TX_LOOP_INT_RAW : R/WTC/SS ;bitpos:[12] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$n. Triggered when the loop count reaches the c
onfigured threshold value..*/
#define RMT_CH0_TX_LOOP_INT_RAW    (BIT(12))
#define RMT_CH0_TX_LOOP_INT_RAW_M  (BIT(12))
#define RMT_CH0_TX_LOOP_INT_RAW_V  0x1
#define RMT_CH0_TX_LOOP_INT_RAW_S  12
/* RMT_CH3_TX_THR_EVENT_INT_RAW : R/WTC/SS ;bitpos:[11] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$n. Triggered when transmitter sent more data t
han configured value..*/
#define RMT_CH3_TX_THR_EVENT_INT_RAW    (BIT(11))
#define RMT_CH3_TX_THR_EVENT_INT_RAW_M  (BIT(11))
#define RMT_CH3_TX_THR_EVENT_INT_RAW_V  0x1
#define RMT_CH3_TX_THR_EVENT_INT_RAW_S  11
/* RMT_CH2_TX_THR_EVENT_INT_RAW : R/WTC/SS ;bitpos:[10] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$n. Triggered when transmitter sent more data t
han configured value..*/
#define RMT_CH2_TX_THR_EVENT_INT_RAW    (BIT(10))
#define RMT_CH2_TX_THR_EVENT_INT_RAW_M  (BIT(10))
#define RMT_CH2_TX_THR_EVENT_INT_RAW_V  0x1
#define RMT_CH2_TX_THR_EVENT_INT_RAW_S  10
/* RMT_CH1_TX_THR_EVENT_INT_RAW : R/WTC/SS ;bitpos:[9] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$n. Triggered when transmitter sent more data t
han configured value..*/
#define RMT_CH1_TX_THR_EVENT_INT_RAW    (BIT(9))
#define RMT_CH1_TX_THR_EVENT_INT_RAW_M  (BIT(9))
#define RMT_CH1_TX_THR_EVENT_INT_RAW_V  0x1
#define RMT_CH1_TX_THR_EVENT_INT_RAW_S  9
/* RMT_CH0_TX_THR_EVENT_INT_RAW : R/WTC/SS ;bitpos:[8] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$n. Triggered when transmitter sent more data t
han configured value..*/
#define RMT_CH0_TX_THR_EVENT_INT_RAW    (BIT(8))
#define RMT_CH0_TX_THR_EVENT_INT_RAW_M  (BIT(8))
#define RMT_CH0_TX_THR_EVENT_INT_RAW_V  0x1
#define RMT_CH0_TX_THR_EVENT_INT_RAW_S  8
/* RMT_CH3_ERR_INT_RAW : R/WTC/SS ;bitpos:[7] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$n. Triggered when error occurs..*/
#define RMT_CH3_ERR_INT_RAW    (BIT(7))
#define RMT_CH3_ERR_INT_RAW_M  (BIT(7))
#define RMT_CH3_ERR_INT_RAW_V  0x1
#define RMT_CH3_ERR_INT_RAW_S  7
/* RMT_CH2_ERR_INT_RAW : R/WTC/SS ;bitpos:[6] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$n. Triggered when error occurs..*/
#define RMT_CH2_ERR_INT_RAW    (BIT(6))
#define RMT_CH2_ERR_INT_RAW_M  (BIT(6))
#define RMT_CH2_ERR_INT_RAW_V  0x1
#define RMT_CH2_ERR_INT_RAW_S  6
/* RMT_CH1_ERR_INT_RAW : R/WTC/SS ;bitpos:[5] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$n. Triggered when error occurs..*/
#define RMT_CH1_ERR_INT_RAW    (BIT(5))
#define RMT_CH1_ERR_INT_RAW_M  (BIT(5))
#define RMT_CH1_ERR_INT_RAW_V  0x1
#define RMT_CH1_ERR_INT_RAW_S  5
/* RMT_CH0_ERR_INT_RAW : R/WTC/SS ;bitpos:[4] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$n. Triggered when error occurs..*/
#define RMT_CH0_ERR_INT_RAW    (BIT(4))
#define RMT_CH0_ERR_INT_RAW_M  (BIT(4))
#define RMT_CH0_ERR_INT_RAW_V  0x1
#define RMT_CH0_ERR_INT_RAW_S  4
/* RMT_CH3_TX_END_INT_RAW : R/WTC/SS ;bitpos:[3] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$n. Triggered when transmission done..*/
#define RMT_CH3_TX_END_INT_RAW    (BIT(3))
#define RMT_CH3_TX_END_INT_RAW_M  (BIT(3))
#define RMT_CH3_TX_END_INT_RAW_V  0x1
#define RMT_CH3_TX_END_INT_RAW_S  3
/* RMT_CH2_TX_END_INT_RAW : R/WTC/SS ;bitpos:[2] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$n. Triggered when transmission done..*/
#define RMT_CH2_TX_END_INT_RAW    (BIT(2))
#define RMT_CH2_TX_END_INT_RAW_M  (BIT(2))
#define RMT_CH2_TX_END_INT_RAW_V  0x1
#define RMT_CH2_TX_END_INT_RAW_S  2
/* RMT_CH1_TX_END_INT_RAW : R/WTC/SS ;bitpos:[1] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$n. Triggered when transmission done..*/
#define RMT_CH1_TX_END_INT_RAW    (BIT(1))
#define RMT_CH1_TX_END_INT_RAW_M  (BIT(1))
#define RMT_CH1_TX_END_INT_RAW_V  0x1
#define RMT_CH1_TX_END_INT_RAW_S  1
/* RMT_CH0_TX_END_INT_RAW : R/WTC/SS ;bitpos:[0] ;default: 1'b0 ; */
/*description: The interrupt raw bit for CHANNEL$n. Triggered when transmission done..*/
#define RMT_CH0_TX_END_INT_RAW    (BIT(0))
#define RMT_CH0_TX_END_INT_RAW_M  (BIT(0))
#define RMT_CH0_TX_END_INT_RAW_V  0x1
#define RMT_CH0_TX_END_INT_RAW_S  0

#define RMT_INT_ST_REG          (DR_REG_RMT_BASE + 0x74)
/* RMT_CH7_DMA_ACCESS_FAIL_INT_ST : RO ;bitpos:[29] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for  CH$m_DMA_ACCESS_FAIL_INT..*/
#define RMT_CH7_DMA_ACCESS_FAIL_INT_ST    (BIT(29))
#define RMT_CH7_DMA_ACCESS_FAIL_INT_ST_M  (BIT(29))
#define RMT_CH7_DMA_ACCESS_FAIL_INT_ST_V  0x1
#define RMT_CH7_DMA_ACCESS_FAIL_INT_ST_S  29
/* RMT_CH3_DMA_ACCESS_FAIL_INT_ST : RO ;bitpos:[28] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for  CH$n_DMA_ACCESS_FAIL_INT..*/
#define RMT_CH3_DMA_ACCESS_FAIL_INT_ST    (BIT(28))
#define RMT_CH3_DMA_ACCESS_FAIL_INT_ST_M  (BIT(28))
#define RMT_CH3_DMA_ACCESS_FAIL_INT_ST_V  0x1
#define RMT_CH3_DMA_ACCESS_FAIL_INT_ST_S  28
/* RMT_CH7_RX_THR_EVENT_INT_ST : RO ;bitpos:[27] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$m_RX_THR_EVENT_INT..*/
#define RMT_CH7_RX_THR_EVENT_INT_ST    (BIT(27))
#define RMT_CH7_RX_THR_EVENT_INT_ST_M  (BIT(27))
#define RMT_CH7_RX_THR_EVENT_INT_ST_V  0x1
#define RMT_CH7_RX_THR_EVENT_INT_ST_S  27
/* RMT_CH6_RX_THR_EVENT_INT_ST : RO ;bitpos:[26] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$m_RX_THR_EVENT_INT..*/
#define RMT_CH6_RX_THR_EVENT_INT_ST    (BIT(26))
#define RMT_CH6_RX_THR_EVENT_INT_ST_M  (BIT(26))
#define RMT_CH6_RX_THR_EVENT_INT_ST_V  0x1
#define RMT_CH6_RX_THR_EVENT_INT_ST_S  26
/* RMT_CH5_RX_THR_EVENT_INT_ST : RO ;bitpos:[25] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$m_RX_THR_EVENT_INT..*/
#define RMT_CH5_RX_THR_EVENT_INT_ST    (BIT(25))
#define RMT_CH5_RX_THR_EVENT_INT_ST_M  (BIT(25))
#define RMT_CH5_RX_THR_EVENT_INT_ST_V  0x1
#define RMT_CH5_RX_THR_EVENT_INT_ST_S  25
/* RMT_CH4_RX_THR_EVENT_INT_ST : RO ;bitpos:[24] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$m_RX_THR_EVENT_INT..*/
#define RMT_CH4_RX_THR_EVENT_INT_ST    (BIT(24))
#define RMT_CH4_RX_THR_EVENT_INT_ST_M  (BIT(24))
#define RMT_CH4_RX_THR_EVENT_INT_ST_V  0x1
#define RMT_CH4_RX_THR_EVENT_INT_ST_S  24
/* RMT_CH7_ERR_INT_ST : RO ;bitpos:[23] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$m_ERR_INT..*/
#define RMT_CH7_ERR_INT_ST    (BIT(23))
#define RMT_CH7_ERR_INT_ST_M  (BIT(23))
#define RMT_CH7_ERR_INT_ST_V  0x1
#define RMT_CH7_ERR_INT_ST_S  23
/* RMT_CH6_ERR_INT_ST : RO ;bitpos:[22] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$m_ERR_INT..*/
#define RMT_CH6_ERR_INT_ST    (BIT(22))
#define RMT_CH6_ERR_INT_ST_M  (BIT(22))
#define RMT_CH6_ERR_INT_ST_V  0x1
#define RMT_CH6_ERR_INT_ST_S  22
/* RMT_CH5_ERR_INT_ST : RO ;bitpos:[21] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$m_ERR_INT..*/
#define RMT_CH5_ERR_INT_ST    (BIT(21))
#define RMT_CH5_ERR_INT_ST_M  (BIT(21))
#define RMT_CH5_ERR_INT_ST_V  0x1
#define RMT_CH5_ERR_INT_ST_S  21
/* RMT_CH4_ERR_INT_ST : RO ;bitpos:[20] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$m_ERR_INT..*/
#define RMT_CH4_ERR_INT_ST    (BIT(20))
#define RMT_CH4_ERR_INT_ST_M  (BIT(20))
#define RMT_CH4_ERR_INT_ST_V  0x1
#define RMT_CH4_ERR_INT_ST_S  20
/* RMT_CH7_RX_END_INT_ST : RO ;bitpos:[19] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$m_RX_END_INT..*/
#define RMT_CH7_RX_END_INT_ST    (BIT(19))
#define RMT_CH7_RX_END_INT_ST_M  (BIT(19))
#define RMT_CH7_RX_END_INT_ST_V  0x1
#define RMT_CH7_RX_END_INT_ST_S  19
/* RMT_CH6_RX_END_INT_ST : RO ;bitpos:[18] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$m_RX_END_INT..*/
#define RMT_CH6_RX_END_INT_ST    (BIT(18))
#define RMT_CH6_RX_END_INT_ST_M  (BIT(18))
#define RMT_CH6_RX_END_INT_ST_V  0x1
#define RMT_CH6_RX_END_INT_ST_S  18
/* RMT_CH5_RX_END_INT_ST : RO ;bitpos:[17] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$m_RX_END_INT..*/
#define RMT_CH5_RX_END_INT_ST    (BIT(17))
#define RMT_CH5_RX_END_INT_ST_M  (BIT(17))
#define RMT_CH5_RX_END_INT_ST_V  0x1
#define RMT_CH5_RX_END_INT_ST_S  17
/* RMT_CH4_RX_END_INT_ST : RO ;bitpos:[16] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$m_RX_END_INT..*/
#define RMT_CH4_RX_END_INT_ST    (BIT(16))
#define RMT_CH4_RX_END_INT_ST_M  (BIT(16))
#define RMT_CH4_RX_END_INT_ST_V  0x1
#define RMT_CH4_RX_END_INT_ST_S  16
/* RMT_CH3_TX_LOOP_INT_ST : RO ;bitpos:[15] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$n_TX_LOOP_INT..*/
#define RMT_CH3_TX_LOOP_INT_ST    (BIT(15))
#define RMT_CH3_TX_LOOP_INT_ST_M  (BIT(15))
#define RMT_CH3_TX_LOOP_INT_ST_V  0x1
#define RMT_CH3_TX_LOOP_INT_ST_S  15
/* RMT_CH2_TX_LOOP_INT_ST : RO ;bitpos:[14] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$n_TX_LOOP_INT..*/
#define RMT_CH2_TX_LOOP_INT_ST    (BIT(14))
#define RMT_CH2_TX_LOOP_INT_ST_M  (BIT(14))
#define RMT_CH2_TX_LOOP_INT_ST_V  0x1
#define RMT_CH2_TX_LOOP_INT_ST_S  14
/* RMT_CH1_TX_LOOP_INT_ST : RO ;bitpos:[13] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$n_TX_LOOP_INT..*/
#define RMT_CH1_TX_LOOP_INT_ST    (BIT(13))
#define RMT_CH1_TX_LOOP_INT_ST_M  (BIT(13))
#define RMT_CH1_TX_LOOP_INT_ST_V  0x1
#define RMT_CH1_TX_LOOP_INT_ST_S  13
/* RMT_CH0_TX_LOOP_INT_ST : RO ;bitpos:[12] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$n_TX_LOOP_INT..*/
#define RMT_CH0_TX_LOOP_INT_ST    (BIT(12))
#define RMT_CH0_TX_LOOP_INT_ST_M  (BIT(12))
#define RMT_CH0_TX_LOOP_INT_ST_V  0x1
#define RMT_CH0_TX_LOOP_INT_ST_S  12
/* RMT_CH3_TX_THR_EVENT_INT_ST : RO ;bitpos:[11] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$n_TX_THR_EVENT_INT..*/
#define RMT_CH3_TX_THR_EVENT_INT_ST    (BIT(11))
#define RMT_CH3_TX_THR_EVENT_INT_ST_M  (BIT(11))
#define RMT_CH3_TX_THR_EVENT_INT_ST_V  0x1
#define RMT_CH3_TX_THR_EVENT_INT_ST_S  11
/* RMT_CH2_TX_THR_EVENT_INT_ST : RO ;bitpos:[10] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$n_TX_THR_EVENT_INT..*/
#define RMT_CH2_TX_THR_EVENT_INT_ST    (BIT(10))
#define RMT_CH2_TX_THR_EVENT_INT_ST_M  (BIT(10))
#define RMT_CH2_TX_THR_EVENT_INT_ST_V  0x1
#define RMT_CH2_TX_THR_EVENT_INT_ST_S  10
/* RMT_CH1_TX_THR_EVENT_INT_ST : RO ;bitpos:[9] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$n_TX_THR_EVENT_INT..*/
#define RMT_CH1_TX_THR_EVENT_INT_ST    (BIT(9))
#define RMT_CH1_TX_THR_EVENT_INT_ST_M  (BIT(9))
#define RMT_CH1_TX_THR_EVENT_INT_ST_V  0x1
#define RMT_CH1_TX_THR_EVENT_INT_ST_S  9
/* RMT_CH0_TX_THR_EVENT_INT_ST : RO ;bitpos:[8] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$n_TX_THR_EVENT_INT..*/
#define RMT_CH0_TX_THR_EVENT_INT_ST    (BIT(8))
#define RMT_CH0_TX_THR_EVENT_INT_ST_M  (BIT(8))
#define RMT_CH0_TX_THR_EVENT_INT_ST_V  0x1
#define RMT_CH0_TX_THR_EVENT_INT_ST_S  8
/* RMT_CH3_ERR_INT_ST : RO ;bitpos:[7] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$n_ERR_INT..*/
#define RMT_CH3_ERR_INT_ST    (BIT(7))
#define RMT_CH3_ERR_INT_ST_M  (BIT(7))
#define RMT_CH3_ERR_INT_ST_V  0x1
#define RMT_CH3_ERR_INT_ST_S  7
/* RMT_CH2_ERR_INT_ST : RO ;bitpos:[6] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$n_ERR_INT..*/
#define RMT_CH2_ERR_INT_ST    (BIT(6))
#define RMT_CH2_ERR_INT_ST_M  (BIT(6))
#define RMT_CH2_ERR_INT_ST_V  0x1
#define RMT_CH2_ERR_INT_ST_S  6
/* RMT_CH1_ERR_INT_ST : RO ;bitpos:[5] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$n_ERR_INT..*/
#define RMT_CH1_ERR_INT_ST    (BIT(5))
#define RMT_CH1_ERR_INT_ST_M  (BIT(5))
#define RMT_CH1_ERR_INT_ST_V  0x1
#define RMT_CH1_ERR_INT_ST_S  5
/* RMT_CH0_ERR_INT_ST : RO ;bitpos:[4] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$n_ERR_INT..*/
#define RMT_CH0_ERR_INT_ST    (BIT(4))
#define RMT_CH0_ERR_INT_ST_M  (BIT(4))
#define RMT_CH0_ERR_INT_ST_V  0x1
#define RMT_CH0_ERR_INT_ST_S  4
/* RMT_CH3_TX_END_INT_ST : RO ;bitpos:[3] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$n_TX_END_INT..*/
#define RMT_CH3_TX_END_INT_ST    (BIT(3))
#define RMT_CH3_TX_END_INT_ST_M  (BIT(3))
#define RMT_CH3_TX_END_INT_ST_V  0x1
#define RMT_CH3_TX_END_INT_ST_S  3
/* RMT_CH2_TX_END_INT_ST : RO ;bitpos:[2] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$n_TX_END_INT..*/
#define RMT_CH2_TX_END_INT_ST    (BIT(2))
#define RMT_CH2_TX_END_INT_ST_M  (BIT(2))
#define RMT_CH2_TX_END_INT_ST_V  0x1
#define RMT_CH2_TX_END_INT_ST_S  2
/* RMT_CH1_TX_END_INT_ST : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$n_TX_END_INT..*/
#define RMT_CH1_TX_END_INT_ST    (BIT(1))
#define RMT_CH1_TX_END_INT_ST_M  (BIT(1))
#define RMT_CH1_TX_END_INT_ST_V  0x1
#define RMT_CH1_TX_END_INT_ST_S  1
/* RMT_CH0_TX_END_INT_ST : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description: The masked interrupt status bit for CH$n_TX_END_INT..*/
#define RMT_CH0_TX_END_INT_ST    (BIT(0))
#define RMT_CH0_TX_END_INT_ST_M  (BIT(0))
#define RMT_CH0_TX_END_INT_ST_V  0x1
#define RMT_CH0_TX_END_INT_ST_S  0

#define RMT_INT_ENA_REG          (DR_REG_RMT_BASE + 0x78)
/* RMT_CH7_DMA_ACCESS_FAIL_INT_ENA : R/W ;bitpos:[29] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$m_DMA_ACCESS_FAIL_INT..*/
#define RMT_CH7_DMA_ACCESS_FAIL_INT_ENA    (BIT(29))
#define RMT_CH7_DMA_ACCESS_FAIL_INT_ENA_M  (BIT(29))
#define RMT_CH7_DMA_ACCESS_FAIL_INT_ENA_V  0x1
#define RMT_CH7_DMA_ACCESS_FAIL_INT_ENA_S  29
/* RMT_CH3_DMA_ACCESS_FAIL_INT_ENA : R/W ;bitpos:[28] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$n_DMA_ACCESS_FAIL_INT..*/
#define RMT_CH3_DMA_ACCESS_FAIL_INT_ENA    (BIT(28))
#define RMT_CH3_DMA_ACCESS_FAIL_INT_ENA_M  (BIT(28))
#define RMT_CH3_DMA_ACCESS_FAIL_INT_ENA_V  0x1
#define RMT_CH3_DMA_ACCESS_FAIL_INT_ENA_S  28
/* RMT_CH7_RX_THR_EVENT_INT_ENA : R/W ;bitpos:[27] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$m_RX_THR_EVENT_INT..*/
#define RMT_CH7_RX_THR_EVENT_INT_ENA    (BIT(27))
#define RMT_CH7_RX_THR_EVENT_INT_ENA_M  (BIT(27))
#define RMT_CH7_RX_THR_EVENT_INT_ENA_V  0x1
#define RMT_CH7_RX_THR_EVENT_INT_ENA_S  27
/* RMT_CH6_RX_THR_EVENT_INT_ENA : R/W ;bitpos:[26] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$m_RX_THR_EVENT_INT..*/
#define RMT_CH6_RX_THR_EVENT_INT_ENA    (BIT(26))
#define RMT_CH6_RX_THR_EVENT_INT_ENA_M  (BIT(26))
#define RMT_CH6_RX_THR_EVENT_INT_ENA_V  0x1
#define RMT_CH6_RX_THR_EVENT_INT_ENA_S  26
/* RMT_CH5_RX_THR_EVENT_INT_ENA : R/W ;bitpos:[25] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$m_RX_THR_EVENT_INT..*/
#define RMT_CH5_RX_THR_EVENT_INT_ENA    (BIT(25))
#define RMT_CH5_RX_THR_EVENT_INT_ENA_M  (BIT(25))
#define RMT_CH5_RX_THR_EVENT_INT_ENA_V  0x1
#define RMT_CH5_RX_THR_EVENT_INT_ENA_S  25
/* RMT_CH4_RX_THR_EVENT_INT_ENA : R/W ;bitpos:[24] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$m_RX_THR_EVENT_INT..*/
#define RMT_CH4_RX_THR_EVENT_INT_ENA    (BIT(24))
#define RMT_CH4_RX_THR_EVENT_INT_ENA_M  (BIT(24))
#define RMT_CH4_RX_THR_EVENT_INT_ENA_V  0x1
#define RMT_CH4_RX_THR_EVENT_INT_ENA_S  24
/* RMT_CH7_ERR_INT_ENA : R/W ;bitpos:[23] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$m_ERR_INT..*/
#define RMT_CH7_ERR_INT_ENA    (BIT(23))
#define RMT_CH7_ERR_INT_ENA_M  (BIT(23))
#define RMT_CH7_ERR_INT_ENA_V  0x1
#define RMT_CH7_ERR_INT_ENA_S  23
/* RMT_CH6_ERR_INT_ENA : R/W ;bitpos:[22] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$m_ERR_INT..*/
#define RMT_CH6_ERR_INT_ENA    (BIT(22))
#define RMT_CH6_ERR_INT_ENA_M  (BIT(22))
#define RMT_CH6_ERR_INT_ENA_V  0x1
#define RMT_CH6_ERR_INT_ENA_S  22
/* RMT_CH5_ERR_INT_ENA : R/W ;bitpos:[21] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$m_ERR_INT..*/
#define RMT_CH5_ERR_INT_ENA    (BIT(21))
#define RMT_CH5_ERR_INT_ENA_M  (BIT(21))
#define RMT_CH5_ERR_INT_ENA_V  0x1
#define RMT_CH5_ERR_INT_ENA_S  21
/* RMT_CH4_ERR_INT_ENA : R/W ;bitpos:[20] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$m_ERR_INT..*/
#define RMT_CH4_ERR_INT_ENA    (BIT(20))
#define RMT_CH4_ERR_INT_ENA_M  (BIT(20))
#define RMT_CH4_ERR_INT_ENA_V  0x1
#define RMT_CH4_ERR_INT_ENA_S  20
/* RMT_CH7_RX_END_INT_ENA : R/W ;bitpos:[19] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$m_RX_END_INT..*/
#define RMT_CH7_RX_END_INT_ENA    (BIT(19))
#define RMT_CH7_RX_END_INT_ENA_M  (BIT(19))
#define RMT_CH7_RX_END_INT_ENA_V  0x1
#define RMT_CH7_RX_END_INT_ENA_S  19
/* RMT_CH6_RX_END_INT_ENA : R/W ;bitpos:[18] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$m_RX_END_INT..*/
#define RMT_CH6_RX_END_INT_ENA    (BIT(18))
#define RMT_CH6_RX_END_INT_ENA_M  (BIT(18))
#define RMT_CH6_RX_END_INT_ENA_V  0x1
#define RMT_CH6_RX_END_INT_ENA_S  18
/* RMT_CH5_RX_END_INT_ENA : R/W ;bitpos:[17] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$m_RX_END_INT..*/
#define RMT_CH5_RX_END_INT_ENA    (BIT(17))
#define RMT_CH5_RX_END_INT_ENA_M  (BIT(17))
#define RMT_CH5_RX_END_INT_ENA_V  0x1
#define RMT_CH5_RX_END_INT_ENA_S  17
/* RMT_CH4_RX_END_INT_ENA : R/W ;bitpos:[16] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$m_RX_END_INT..*/
#define RMT_CH4_RX_END_INT_ENA    (BIT(16))
#define RMT_CH4_RX_END_INT_ENA_M  (BIT(16))
#define RMT_CH4_RX_END_INT_ENA_V  0x1
#define RMT_CH4_RX_END_INT_ENA_S  16
/* RMT_CH3_TX_LOOP_INT_ENA : R/W ;bitpos:[15] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$n_TX_LOOP_INT..*/
#define RMT_CH3_TX_LOOP_INT_ENA    (BIT(15))
#define RMT_CH3_TX_LOOP_INT_ENA_M  (BIT(15))
#define RMT_CH3_TX_LOOP_INT_ENA_V  0x1
#define RMT_CH3_TX_LOOP_INT_ENA_S  15
/* RMT_CH2_TX_LOOP_INT_ENA : R/W ;bitpos:[14] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$n_TX_LOOP_INT..*/
#define RMT_CH2_TX_LOOP_INT_ENA    (BIT(14))
#define RMT_CH2_TX_LOOP_INT_ENA_M  (BIT(14))
#define RMT_CH2_TX_LOOP_INT_ENA_V  0x1
#define RMT_CH2_TX_LOOP_INT_ENA_S  14
/* RMT_CH1_TX_LOOP_INT_ENA : R/W ;bitpos:[13] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$n_TX_LOOP_INT..*/
#define RMT_CH1_TX_LOOP_INT_ENA    (BIT(13))
#define RMT_CH1_TX_LOOP_INT_ENA_M  (BIT(13))
#define RMT_CH1_TX_LOOP_INT_ENA_V  0x1
#define RMT_CH1_TX_LOOP_INT_ENA_S  13
/* RMT_CH0_TX_LOOP_INT_ENA : R/W ;bitpos:[12] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$n_TX_LOOP_INT..*/
#define RMT_CH0_TX_LOOP_INT_ENA    (BIT(12))
#define RMT_CH0_TX_LOOP_INT_ENA_M  (BIT(12))
#define RMT_CH0_TX_LOOP_INT_ENA_V  0x1
#define RMT_CH0_TX_LOOP_INT_ENA_S  12
/* RMT_CH3_TX_THR_EVENT_INT_ENA : R/W ;bitpos:[11] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$n_TX_THR_EVENT_INT..*/
#define RMT_CH3_TX_THR_EVENT_INT_ENA    (BIT(11))
#define RMT_CH3_TX_THR_EVENT_INT_ENA_M  (BIT(11))
#define RMT_CH3_TX_THR_EVENT_INT_ENA_V  0x1
#define RMT_CH3_TX_THR_EVENT_INT_ENA_S  11
/* RMT_CH2_TX_THR_EVENT_INT_ENA : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$n_TX_THR_EVENT_INT..*/
#define RMT_CH2_TX_THR_EVENT_INT_ENA    (BIT(10))
#define RMT_CH2_TX_THR_EVENT_INT_ENA_M  (BIT(10))
#define RMT_CH2_TX_THR_EVENT_INT_ENA_V  0x1
#define RMT_CH2_TX_THR_EVENT_INT_ENA_S  10
/* RMT_CH1_TX_THR_EVENT_INT_ENA : R/W ;bitpos:[9] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$n_TX_THR_EVENT_INT..*/
#define RMT_CH1_TX_THR_EVENT_INT_ENA    (BIT(9))
#define RMT_CH1_TX_THR_EVENT_INT_ENA_M  (BIT(9))
#define RMT_CH1_TX_THR_EVENT_INT_ENA_V  0x1
#define RMT_CH1_TX_THR_EVENT_INT_ENA_S  9
/* RMT_CH0_TX_THR_EVENT_INT_ENA : R/W ;bitpos:[8] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$n_TX_THR_EVENT_INT..*/
#define RMT_CH0_TX_THR_EVENT_INT_ENA    (BIT(8))
#define RMT_CH0_TX_THR_EVENT_INT_ENA_M  (BIT(8))
#define RMT_CH0_TX_THR_EVENT_INT_ENA_V  0x1
#define RMT_CH0_TX_THR_EVENT_INT_ENA_S  8
/* RMT_CH3_ERR_INT_ENA : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$n_ERR_INT..*/
#define RMT_CH3_ERR_INT_ENA    (BIT(7))
#define RMT_CH3_ERR_INT_ENA_M  (BIT(7))
#define RMT_CH3_ERR_INT_ENA_V  0x1
#define RMT_CH3_ERR_INT_ENA_S  7
/* RMT_CH2_ERR_INT_ENA : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$n_ERR_INT..*/
#define RMT_CH2_ERR_INT_ENA    (BIT(6))
#define RMT_CH2_ERR_INT_ENA_M  (BIT(6))
#define RMT_CH2_ERR_INT_ENA_V  0x1
#define RMT_CH2_ERR_INT_ENA_S  6
/* RMT_CH1_ERR_INT_ENA : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$n_ERR_INT..*/
#define RMT_CH1_ERR_INT_ENA    (BIT(5))
#define RMT_CH1_ERR_INT_ENA_M  (BIT(5))
#define RMT_CH1_ERR_INT_ENA_V  0x1
#define RMT_CH1_ERR_INT_ENA_S  5
/* RMT_CH0_ERR_INT_ENA : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$n_ERR_INT..*/
#define RMT_CH0_ERR_INT_ENA    (BIT(4))
#define RMT_CH0_ERR_INT_ENA_M  (BIT(4))
#define RMT_CH0_ERR_INT_ENA_V  0x1
#define RMT_CH0_ERR_INT_ENA_S  4
/* RMT_CH3_TX_END_INT_ENA : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$n_TX_END_INT..*/
#define RMT_CH3_TX_END_INT_ENA    (BIT(3))
#define RMT_CH3_TX_END_INT_ENA_M  (BIT(3))
#define RMT_CH3_TX_END_INT_ENA_V  0x1
#define RMT_CH3_TX_END_INT_ENA_S  3
/* RMT_CH2_TX_END_INT_ENA : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$n_TX_END_INT..*/
#define RMT_CH2_TX_END_INT_ENA    (BIT(2))
#define RMT_CH2_TX_END_INT_ENA_M  (BIT(2))
#define RMT_CH2_TX_END_INT_ENA_V  0x1
#define RMT_CH2_TX_END_INT_ENA_S  2
/* RMT_CH1_TX_END_INT_ENA : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$n_TX_END_INT..*/
#define RMT_CH1_TX_END_INT_ENA    (BIT(1))
#define RMT_CH1_TX_END_INT_ENA_M  (BIT(1))
#define RMT_CH1_TX_END_INT_ENA_V  0x1
#define RMT_CH1_TX_END_INT_ENA_S  1
/* RMT_CH0_TX_END_INT_ENA : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: The interrupt enable bit for CH$n_TX_END_INT..*/
#define RMT_CH0_TX_END_INT_ENA    (BIT(0))
#define RMT_CH0_TX_END_INT_ENA_M  (BIT(0))
#define RMT_CH0_TX_END_INT_ENA_V  0x1
#define RMT_CH0_TX_END_INT_ENA_S  0

#define RMT_INT_CLR_REG          (DR_REG_RMT_BASE + 0x7C)
/* RMT_CH7_DMA_ACCESS_FAIL_INT_CLR : WT ;bitpos:[29] ;default: 1'b0 ; */
/*description: Set this bit to clear the CH$m_DMA_ACCESS_FAIL_INT interrupt..*/
#define RMT_CH7_DMA_ACCESS_FAIL_INT_CLR    (BIT(29))
#define RMT_CH7_DMA_ACCESS_FAIL_INT_CLR_M  (BIT(29))
#define RMT_CH7_DMA_ACCESS_FAIL_INT_CLR_V  0x1
#define RMT_CH7_DMA_ACCESS_FAIL_INT_CLR_S  29
/* RMT_CH3_DMA_ACCESS_FAIL_INT_CLR : WT ;bitpos:[28] ;default: 1'b0 ; */
/*description: Set this bit to clear the CH$n_DMA_ACCESS_FAIL_INT interrupt..*/
#define RMT_CH3_DMA_ACCESS_FAIL_INT_CLR    (BIT(28))
#define RMT_CH3_DMA_ACCESS_FAIL_INT_CLR_M  (BIT(28))
#define RMT_CH3_DMA_ACCESS_FAIL_INT_CLR_V  0x1
#define RMT_CH3_DMA_ACCESS_FAIL_INT_CLR_S  28
/* RMT_CH7_RX_THR_EVENT_INT_CLR : WT ;bitpos:[27] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$m_RX_THR_EVENT_INT interrupt..*/
#define RMT_CH7_RX_THR_EVENT_INT_CLR    (BIT(27))
#define RMT_CH7_RX_THR_EVENT_INT_CLR_M  (BIT(27))
#define RMT_CH7_RX_THR_EVENT_INT_CLR_V  0x1
#define RMT_CH7_RX_THR_EVENT_INT_CLR_S  27
/* RMT_CH6_RX_THR_EVENT_INT_CLR : WT ;bitpos:[26] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$m_RX_THR_EVENT_INT interrupt..*/
#define RMT_CH6_RX_THR_EVENT_INT_CLR    (BIT(26))
#define RMT_CH6_RX_THR_EVENT_INT_CLR_M  (BIT(26))
#define RMT_CH6_RX_THR_EVENT_INT_CLR_V  0x1
#define RMT_CH6_RX_THR_EVENT_INT_CLR_S  26
/* RMT_CH5_RX_THR_EVENT_INT_CLR : WT ;bitpos:[25] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$m_RX_THR_EVENT_INT interrupt..*/
#define RMT_CH5_RX_THR_EVENT_INT_CLR    (BIT(25))
#define RMT_CH5_RX_THR_EVENT_INT_CLR_M  (BIT(25))
#define RMT_CH5_RX_THR_EVENT_INT_CLR_V  0x1
#define RMT_CH5_RX_THR_EVENT_INT_CLR_S  25
/* RMT_CH4_RX_THR_EVENT_INT_CLR : WT ;bitpos:[24] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$m_RX_THR_EVENT_INT interrupt..*/
#define RMT_CH4_RX_THR_EVENT_INT_CLR    (BIT(24))
#define RMT_CH4_RX_THR_EVENT_INT_CLR_M  (BIT(24))
#define RMT_CH4_RX_THR_EVENT_INT_CLR_V  0x1
#define RMT_CH4_RX_THR_EVENT_INT_CLR_S  24
/* RMT_CH7_ERR_INT_CLR : WT ;bitpos:[23] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$m_ERR_INT interrupt..*/
#define RMT_CH7_ERR_INT_CLR    (BIT(23))
#define RMT_CH7_ERR_INT_CLR_M  (BIT(23))
#define RMT_CH7_ERR_INT_CLR_V  0x1
#define RMT_CH7_ERR_INT_CLR_S  23
/* RMT_CH6_ERR_INT_CLR : WT ;bitpos:[22] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$m_ERR_INT interrupt..*/
#define RMT_CH6_ERR_INT_CLR    (BIT(22))
#define RMT_CH6_ERR_INT_CLR_M  (BIT(22))
#define RMT_CH6_ERR_INT_CLR_V  0x1
#define RMT_CH6_ERR_INT_CLR_S  22
/* RMT_CH5_ERR_INT_CLR : WT ;bitpos:[21] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$m_ERR_INT interrupt..*/
#define RMT_CH5_ERR_INT_CLR    (BIT(21))
#define RMT_CH5_ERR_INT_CLR_M  (BIT(21))
#define RMT_CH5_ERR_INT_CLR_V  0x1
#define RMT_CH5_ERR_INT_CLR_S  21
/* RMT_CH4_ERR_INT_CLR : WT ;bitpos:[20] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$m_ERR_INT interrupt..*/
#define RMT_CH4_ERR_INT_CLR    (BIT(20))
#define RMT_CH4_ERR_INT_CLR_M  (BIT(20))
#define RMT_CH4_ERR_INT_CLR_V  0x1
#define RMT_CH4_ERR_INT_CLR_S  20
/* RMT_CH7_RX_END_INT_CLR : WT ;bitpos:[19] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$m_RX_END_INT interrupt..*/
#define RMT_CH7_RX_END_INT_CLR    (BIT(19))
#define RMT_CH7_RX_END_INT_CLR_M  (BIT(19))
#define RMT_CH7_RX_END_INT_CLR_V  0x1
#define RMT_CH7_RX_END_INT_CLR_S  19
/* RMT_CH6_RX_END_INT_CLR : WT ;bitpos:[18] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$m_RX_END_INT interrupt..*/
#define RMT_CH6_RX_END_INT_CLR    (BIT(18))
#define RMT_CH6_RX_END_INT_CLR_M  (BIT(18))
#define RMT_CH6_RX_END_INT_CLR_V  0x1
#define RMT_CH6_RX_END_INT_CLR_S  18
/* RMT_CH5_RX_END_INT_CLR : WT ;bitpos:[17] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$m_RX_END_INT interrupt..*/
#define RMT_CH5_RX_END_INT_CLR    (BIT(17))
#define RMT_CH5_RX_END_INT_CLR_M  (BIT(17))
#define RMT_CH5_RX_END_INT_CLR_V  0x1
#define RMT_CH5_RX_END_INT_CLR_S  17
/* RMT_CH4_RX_END_INT_CLR : WT ;bitpos:[16] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$m_RX_END_INT interrupt..*/
#define RMT_CH4_RX_END_INT_CLR    (BIT(16))
#define RMT_CH4_RX_END_INT_CLR_M  (BIT(16))
#define RMT_CH4_RX_END_INT_CLR_V  0x1
#define RMT_CH4_RX_END_INT_CLR_S  16
/* RMT_CH3_TX_LOOP_INT_CLR : WT ;bitpos:[15] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$n_TX_LOOP_INT interrupt..*/
#define RMT_CH3_TX_LOOP_INT_CLR    (BIT(15))
#define RMT_CH3_TX_LOOP_INT_CLR_M  (BIT(15))
#define RMT_CH3_TX_LOOP_INT_CLR_V  0x1
#define RMT_CH3_TX_LOOP_INT_CLR_S  15
/* RMT_CH2_TX_LOOP_INT_CLR : WT ;bitpos:[14] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$n_TX_LOOP_INT interrupt..*/
#define RMT_CH2_TX_LOOP_INT_CLR    (BIT(14))
#define RMT_CH2_TX_LOOP_INT_CLR_M  (BIT(14))
#define RMT_CH2_TX_LOOP_INT_CLR_V  0x1
#define RMT_CH2_TX_LOOP_INT_CLR_S  14
/* RMT_CH1_TX_LOOP_INT_CLR : WT ;bitpos:[13] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$n_TX_LOOP_INT interrupt..*/
#define RMT_CH1_TX_LOOP_INT_CLR    (BIT(13))
#define RMT_CH1_TX_LOOP_INT_CLR_M  (BIT(13))
#define RMT_CH1_TX_LOOP_INT_CLR_V  0x1
#define RMT_CH1_TX_LOOP_INT_CLR_S  13
/* RMT_CH0_TX_LOOP_INT_CLR : WT ;bitpos:[12] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$n_TX_LOOP_INT interrupt..*/
#define RMT_CH0_TX_LOOP_INT_CLR    (BIT(12))
#define RMT_CH0_TX_LOOP_INT_CLR_M  (BIT(12))
#define RMT_CH0_TX_LOOP_INT_CLR_V  0x1
#define RMT_CH0_TX_LOOP_INT_CLR_S  12
/* RMT_CH3_TX_THR_EVENT_INT_CLR : WT ;bitpos:[11] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$n_TX_THR_EVENT_INT interrupt..*/
#define RMT_CH3_TX_THR_EVENT_INT_CLR    (BIT(11))
#define RMT_CH3_TX_THR_EVENT_INT_CLR_M  (BIT(11))
#define RMT_CH3_TX_THR_EVENT_INT_CLR_V  0x1
#define RMT_CH3_TX_THR_EVENT_INT_CLR_S  11
/* RMT_CH2_TX_THR_EVENT_INT_CLR : WT ;bitpos:[10] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$n_TX_THR_EVENT_INT interrupt..*/
#define RMT_CH2_TX_THR_EVENT_INT_CLR    (BIT(10))
#define RMT_CH2_TX_THR_EVENT_INT_CLR_M  (BIT(10))
#define RMT_CH2_TX_THR_EVENT_INT_CLR_V  0x1
#define RMT_CH2_TX_THR_EVENT_INT_CLR_S  10
/* RMT_CH1_TX_THR_EVENT_INT_CLR : WT ;bitpos:[9] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$n_TX_THR_EVENT_INT interrupt..*/
#define RMT_CH1_TX_THR_EVENT_INT_CLR    (BIT(9))
#define RMT_CH1_TX_THR_EVENT_INT_CLR_M  (BIT(9))
#define RMT_CH1_TX_THR_EVENT_INT_CLR_V  0x1
#define RMT_CH1_TX_THR_EVENT_INT_CLR_S  9
/* RMT_CH0_TX_THR_EVENT_INT_CLR : WT ;bitpos:[8] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$n_TX_THR_EVENT_INT interrupt..*/
#define RMT_CH0_TX_THR_EVENT_INT_CLR    (BIT(8))
#define RMT_CH0_TX_THR_EVENT_INT_CLR_M  (BIT(8))
#define RMT_CH0_TX_THR_EVENT_INT_CLR_V  0x1
#define RMT_CH0_TX_THR_EVENT_INT_CLR_S  8
/* RMT_CH3_ERR_INT_CLR : WT ;bitpos:[7] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$n_ERR_INT interrupt..*/
#define RMT_CH3_ERR_INT_CLR    (BIT(7))
#define RMT_CH3_ERR_INT_CLR_M  (BIT(7))
#define RMT_CH3_ERR_INT_CLR_V  0x1
#define RMT_CH3_ERR_INT_CLR_S  7
/* RMT_CH2_ERR_INT_CLR : WT ;bitpos:[6] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$n_ERR_INT interrupt..*/
#define RMT_CH2_ERR_INT_CLR    (BIT(6))
#define RMT_CH2_ERR_INT_CLR_M  (BIT(6))
#define RMT_CH2_ERR_INT_CLR_V  0x1
#define RMT_CH2_ERR_INT_CLR_S  6
/* RMT_CH1_ERR_INT_CLR : WT ;bitpos:[5] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$n_ERR_INT interrupt..*/
#define RMT_CH1_ERR_INT_CLR    (BIT(5))
#define RMT_CH1_ERR_INT_CLR_M  (BIT(5))
#define RMT_CH1_ERR_INT_CLR_V  0x1
#define RMT_CH1_ERR_INT_CLR_S  5
/* RMT_CH0_ERR_INT_CLR : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$n_ERR_INT interrupt..*/
#define RMT_CH0_ERR_INT_CLR    (BIT(4))
#define RMT_CH0_ERR_INT_CLR_M  (BIT(4))
#define RMT_CH0_ERR_INT_CLR_V  0x1
#define RMT_CH0_ERR_INT_CLR_S  4
/* RMT_CH3_TX_END_INT_CLR : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$n_TX_END_INT interrupt..*/
#define RMT_CH3_TX_END_INT_CLR    (BIT(3))
#define RMT_CH3_TX_END_INT_CLR_M  (BIT(3))
#define RMT_CH3_TX_END_INT_CLR_V  0x1
#define RMT_CH3_TX_END_INT_CLR_S  3
/* RMT_CH2_TX_END_INT_CLR : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$n_TX_END_INT interrupt..*/
#define RMT_CH2_TX_END_INT_CLR    (BIT(2))
#define RMT_CH2_TX_END_INT_CLR_M  (BIT(2))
#define RMT_CH2_TX_END_INT_CLR_V  0x1
#define RMT_CH2_TX_END_INT_CLR_S  2
/* RMT_CH1_TX_END_INT_CLR : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$n_TX_END_INT interrupt..*/
#define RMT_CH1_TX_END_INT_CLR    (BIT(1))
#define RMT_CH1_TX_END_INT_CLR_M  (BIT(1))
#define RMT_CH1_TX_END_INT_CLR_V  0x1
#define RMT_CH1_TX_END_INT_CLR_S  1
/* RMT_CH0_TX_END_INT_CLR : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description: Set this bit to clear theCH$n_TX_END_INT interrupt..*/
#define RMT_CH0_TX_END_INT_CLR    (BIT(0))
#define RMT_CH0_TX_END_INT_CLR_M  (BIT(0))
#define RMT_CH0_TX_END_INT_CLR_V  0x1
#define RMT_CH0_TX_END_INT_CLR_S  0

#define RMT_CH0CARRIER_DUTY_REG          (DR_REG_RMT_BASE + 0x80)
/* RMT_CARRIER_HIGH_CH0 : R/W ;bitpos:[31:16] ;default: 16'h40 ; */
/*description: This register is used to configure carrier wave 's high level clock period for C
HANNEL$n..*/
#define RMT_CARRIER_HIGH_CH0    0x0000FFFF
#define RMT_CARRIER_HIGH_CH0_M  ((RMT_CARRIER_HIGH_CH0_V)<<(RMT_CARRIER_HIGH_CH0_S))
#define RMT_CARRIER_HIGH_CH0_V  0xFFFF
#define RMT_CARRIER_HIGH_CH0_S  16
/* RMT_CARRIER_LOW_CH0 : R/W ;bitpos:[15:0] ;default: 16'h40 ; */
/*description: This register is used to configure carrier wave 's low level clock period for CH
ANNEL$n..*/
#define RMT_CARRIER_LOW_CH0    0x0000FFFF
#define RMT_CARRIER_LOW_CH0_M  ((RMT_CARRIER_LOW_CH0_V)<<(RMT_CARRIER_LOW_CH0_S))
#define RMT_CARRIER_LOW_CH0_V  0xFFFF
#define RMT_CARRIER_LOW_CH0_S  0

#define RMT_CH1CARRIER_DUTY_REG          (DR_REG_RMT_BASE + 0x84)
/* RMT_CARRIER_HIGH_CH1 : R/W ;bitpos:[31:16] ;default: 16'h40 ; */
/*description: This register is used to configure carrier wave 's high level clock period for C
HANNEL$n..*/
#define RMT_CARRIER_HIGH_CH1    0x0000FFFF
#define RMT_CARRIER_HIGH_CH1_M  ((RMT_CARRIER_HIGH_CH1_V)<<(RMT_CARRIER_HIGH_CH1_S))
#define RMT_CARRIER_HIGH_CH1_V  0xFFFF
#define RMT_CARRIER_HIGH_CH1_S  16
/* RMT_CARRIER_LOW_CH1 : R/W ;bitpos:[15:0] ;default: 16'h40 ; */
/*description: This register is used to configure carrier wave 's low level clock period for CH
ANNEL$n..*/
#define RMT_CARRIER_LOW_CH1    0x0000FFFF
#define RMT_CARRIER_LOW_CH1_M  ((RMT_CARRIER_LOW_CH1_V)<<(RMT_CARRIER_LOW_CH1_S))
#define RMT_CARRIER_LOW_CH1_V  0xFFFF
#define RMT_CARRIER_LOW_CH1_S  0

#define RMT_CH2CARRIER_DUTY_REG          (DR_REG_RMT_BASE + 0x88)
/* RMT_CARRIER_HIGH_CH2 : R/W ;bitpos:[31:16] ;default: 16'h40 ; */
/*description: This register is used to configure carrier wave 's high level clock period for C
HANNEL$n..*/
#define RMT_CARRIER_HIGH_CH2    0x0000FFFF
#define RMT_CARRIER_HIGH_CH2_M  ((RMT_CARRIER_HIGH_CH2_V)<<(RMT_CARRIER_HIGH_CH2_S))
#define RMT_CARRIER_HIGH_CH2_V  0xFFFF
#define RMT_CARRIER_HIGH_CH2_S  16
/* RMT_CARRIER_LOW_CH2 : R/W ;bitpos:[15:0] ;default: 16'h40 ; */
/*description: This register is used to configure carrier wave 's low level clock period for CH
ANNEL$n..*/
#define RMT_CARRIER_LOW_CH2    0x0000FFFF
#define RMT_CARRIER_LOW_CH2_M  ((RMT_CARRIER_LOW_CH2_V)<<(RMT_CARRIER_LOW_CH2_S))
#define RMT_CARRIER_LOW_CH2_V  0xFFFF
#define RMT_CARRIER_LOW_CH2_S  0

#define RMT_CH3CARRIER_DUTY_REG          (DR_REG_RMT_BASE + 0x8C)
/* RMT_CARRIER_HIGH_CH3 : R/W ;bitpos:[31:16] ;default: 16'h40 ; */
/*description: This register is used to configure carrier wave 's high level clock period for C
HANNEL$n..*/
#define RMT_CARRIER_HIGH_CH3    0x0000FFFF
#define RMT_CARRIER_HIGH_CH3_M  ((RMT_CARRIER_HIGH_CH3_V)<<(RMT_CARRIER_HIGH_CH3_S))
#define RMT_CARRIER_HIGH_CH3_V  0xFFFF
#define RMT_CARRIER_HIGH_CH3_S  16
/* RMT_CARRIER_LOW_CH3 : R/W ;bitpos:[15:0] ;default: 16'h40 ; */
/*description: This register is used to configure carrier wave 's low level clock period for CH
ANNEL$n..*/
#define RMT_CARRIER_LOW_CH3    0x0000FFFF
#define RMT_CARRIER_LOW_CH3_M  ((RMT_CARRIER_LOW_CH3_V)<<(RMT_CARRIER_LOW_CH3_S))
#define RMT_CARRIER_LOW_CH3_V  0xFFFF
#define RMT_CARRIER_LOW_CH3_S  0

#define RMT_CH4_RX_CARRIER_RM_REG          (DR_REG_RMT_BASE + 0x90)
/* RMT_CARRIER_HIGH_THRES_CH4 : R/W ;bitpos:[31:16] ;default: 16'h0 ; */
/*description: The high level period in a carrier modulation mode is (REG_RMT_REG_CARRIER_HIGH_
THRES_CH$m + 1) for channel $m..*/
#define RMT_CARRIER_HIGH_THRES_CH4    0x0000FFFF
#define RMT_CARRIER_HIGH_THRES_CH4_M  ((RMT_CARRIER_HIGH_THRES_CH4_V)<<(RMT_CARRIER_HIGH_THRES_CH4_S))
#define RMT_CARRIER_HIGH_THRES_CH4_V  0xFFFF
#define RMT_CARRIER_HIGH_THRES_CH4_S  16
/* RMT_CARRIER_LOW_THRES_CH4 : R/W ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: The low level period in a carrier modulation mode is (REG_RMT_REG_CARRIER_LOW_TH
RES_CH$m + 1) for channel $m..*/
#define RMT_CARRIER_LOW_THRES_CH4    0x0000FFFF
#define RMT_CARRIER_LOW_THRES_CH4_M  ((RMT_CARRIER_LOW_THRES_CH4_V)<<(RMT_CARRIER_LOW_THRES_CH4_S))
#define RMT_CARRIER_LOW_THRES_CH4_V  0xFFFF
#define RMT_CARRIER_LOW_THRES_CH4_S  0

#define RMT_CH5_RX_CARRIER_RM_REG          (DR_REG_RMT_BASE + 0x94)
/* RMT_CARRIER_HIGH_THRES_CH5 : R/W ;bitpos:[31:16] ;default: 16'h0 ; */
/*description: The high level period in a carrier modulation mode is (REG_RMT_REG_CARRIER_HIGH_
THRES_CH$m + 1) for channel $m..*/
#define RMT_CARRIER_HIGH_THRES_CH5    0x0000FFFF
#define RMT_CARRIER_HIGH_THRES_CH5_M  ((RMT_CARRIER_HIGH_THRES_CH5_V)<<(RMT_CARRIER_HIGH_THRES_CH5_S))
#define RMT_CARRIER_HIGH_THRES_CH5_V  0xFFFF
#define RMT_CARRIER_HIGH_THRES_CH5_S  16
/* RMT_CARRIER_LOW_THRES_CH5 : R/W ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: The low level period in a carrier modulation mode is (REG_RMT_REG_CARRIER_LOW_TH
RES_CH$m + 1) for channel $m..*/
#define RMT_CARRIER_LOW_THRES_CH5    0x0000FFFF
#define RMT_CARRIER_LOW_THRES_CH5_M  ((RMT_CARRIER_LOW_THRES_CH5_V)<<(RMT_CARRIER_LOW_THRES_CH5_S))
#define RMT_CARRIER_LOW_THRES_CH5_V  0xFFFF
#define RMT_CARRIER_LOW_THRES_CH5_S  0

#define RMT_CH6_RX_CARRIER_RM_REG          (DR_REG_RMT_BASE + 0x98)
/* RMT_CARRIER_HIGH_THRES_CH6 : R/W ;bitpos:[31:16] ;default: 16'h0 ; */
/*description: The high level period in a carrier modulation mode is (REG_RMT_REG_CARRIER_HIGH_
THRES_CH$m + 1) for channel $m..*/
#define RMT_CARRIER_HIGH_THRES_CH6    0x0000FFFF
#define RMT_CARRIER_HIGH_THRES_CH6_M  ((RMT_CARRIER_HIGH_THRES_CH6_V)<<(RMT_CARRIER_HIGH_THRES_CH6_S))
#define RMT_CARRIER_HIGH_THRES_CH6_V  0xFFFF
#define RMT_CARRIER_HIGH_THRES_CH6_S  16
/* RMT_CARRIER_LOW_THRES_CH6 : R/W ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: The low level period in a carrier modulation mode is (REG_RMT_REG_CARRIER_LOW_TH
RES_CH$m + 1) for channel $m..*/
#define RMT_CARRIER_LOW_THRES_CH6    0x0000FFFF
#define RMT_CARRIER_LOW_THRES_CH6_M  ((RMT_CARRIER_LOW_THRES_CH6_V)<<(RMT_CARRIER_LOW_THRES_CH6_S))
#define RMT_CARRIER_LOW_THRES_CH6_V  0xFFFF
#define RMT_CARRIER_LOW_THRES_CH6_S  0

#define RMT_CH7_RX_CARRIER_RM_REG          (DR_REG_RMT_BASE + 0x9C)
/* RMT_CARRIER_HIGH_THRES_CH7 : R/W ;bitpos:[31:16] ;default: 16'h0 ; */
/*description: The high level period in a carrier modulation mode is (REG_RMT_REG_CARRIER_HIGH_
THRES_CH$m + 1) for channel $m..*/
#define RMT_CARRIER_HIGH_THRES_CH7    0x0000FFFF
#define RMT_CARRIER_HIGH_THRES_CH7_M  ((RMT_CARRIER_HIGH_THRES_CH7_V)<<(RMT_CARRIER_HIGH_THRES_CH7_S))
#define RMT_CARRIER_HIGH_THRES_CH7_V  0xFFFF
#define RMT_CARRIER_HIGH_THRES_CH7_S  16
/* RMT_CARRIER_LOW_THRES_CH7 : R/W ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: The low level period in a carrier modulation mode is (REG_RMT_REG_CARRIER_LOW_TH
RES_CH$m + 1) for channel $m..*/
#define RMT_CARRIER_LOW_THRES_CH7    0x0000FFFF
#define RMT_CARRIER_LOW_THRES_CH7_M  ((RMT_CARRIER_LOW_THRES_CH7_V)<<(RMT_CARRIER_LOW_THRES_CH7_S))
#define RMT_CARRIER_LOW_THRES_CH7_V  0xFFFF
#define RMT_CARRIER_LOW_THRES_CH7_S  0

#define RMT_CH0_TX_LIM_REG          (DR_REG_RMT_BASE + 0xA0)
/* RMT_LOOP_STOP_EN_CH0 : R/W ;bitpos:[21] ;default: 1'b0 ; */
/*description: This bit is used to enable the loop send stop function after the loop counter co
unts to  loop number for CHANNEL$n..*/
#define RMT_LOOP_STOP_EN_CH0    (BIT(21))
#define RMT_LOOP_STOP_EN_CH0_M  (BIT(21))
#define RMT_LOOP_STOP_EN_CH0_V  0x1
#define RMT_LOOP_STOP_EN_CH0_S  21
/* RMT_LOOP_COUNT_RESET_CH0 : WT ;bitpos:[20] ;default: 1'b0 ; */
/*description: This register is used to reset the loop count when tx_conti_mode is valid..*/
#define RMT_LOOP_COUNT_RESET_CH0    (BIT(20))
#define RMT_LOOP_COUNT_RESET_CH0_M  (BIT(20))
#define RMT_LOOP_COUNT_RESET_CH0_V  0x1
#define RMT_LOOP_COUNT_RESET_CH0_S  20
/* RMT_TX_LOOP_CNT_EN_CH0 : R/W ;bitpos:[19] ;default: 1'b0 ; */
/*description: This register is the enabled bit for loop count..*/
#define RMT_TX_LOOP_CNT_EN_CH0    (BIT(19))
#define RMT_TX_LOOP_CNT_EN_CH0_M  (BIT(19))
#define RMT_TX_LOOP_CNT_EN_CH0_V  0x1
#define RMT_TX_LOOP_CNT_EN_CH0_S  19
/* RMT_TX_LOOP_NUM_CH0 : R/W ;bitpos:[18:9] ;default: 10'b0 ; */
/*description: This register is used to configure the maximum loop count when tx_conti_mode is
valid..*/
#define RMT_TX_LOOP_NUM_CH0    0x000003FF
#define RMT_TX_LOOP_NUM_CH0_M  ((RMT_TX_LOOP_NUM_CH0_V)<<(RMT_TX_LOOP_NUM_CH0_S))
#define RMT_TX_LOOP_NUM_CH0_V  0x3FF
#define RMT_TX_LOOP_NUM_CH0_S  9
/* RMT_TX_LIM_CH0 : R/W ;bitpos:[8:0] ;default: 9'h80 ; */
/*description: This register is used to configure the maximum entries that CHANNEL$n can send o
ut..*/
#define RMT_TX_LIM_CH0    0x000001FF
#define RMT_TX_LIM_CH0_M  ((RMT_TX_LIM_CH0_V)<<(RMT_TX_LIM_CH0_S))
#define RMT_TX_LIM_CH0_V  0x1FF
#define RMT_TX_LIM_CH0_S  0

#define RMT_CH1_TX_LIM_REG          (DR_REG_RMT_BASE + 0xA4)
/* RMT_LOOP_STOP_EN_CH1 : R/W ;bitpos:[21] ;default: 1'b0 ; */
/*description: This bit is used to enable the loop send stop function after the loop counter co
unts to  loop number for CHANNEL$n..*/
#define RMT_LOOP_STOP_EN_CH1    (BIT(21))
#define RMT_LOOP_STOP_EN_CH1_M  (BIT(21))
#define RMT_LOOP_STOP_EN_CH1_V  0x1
#define RMT_LOOP_STOP_EN_CH1_S  21
/* RMT_LOOP_COUNT_RESET_CH1 : WT ;bitpos:[20] ;default: 1'b0 ; */
/*description: This register is used to reset the loop count when tx_conti_mode is valid..*/
#define RMT_LOOP_COUNT_RESET_CH1    (BIT(20))
#define RMT_LOOP_COUNT_RESET_CH1_M  (BIT(20))
#define RMT_LOOP_COUNT_RESET_CH1_V  0x1
#define RMT_LOOP_COUNT_RESET_CH1_S  20
/* RMT_TX_LOOP_CNT_EN_CH1 : R/W ;bitpos:[19] ;default: 1'b0 ; */
/*description: This register is the enabled bit for loop count..*/
#define RMT_TX_LOOP_CNT_EN_CH1    (BIT(19))
#define RMT_TX_LOOP_CNT_EN_CH1_M  (BIT(19))
#define RMT_TX_LOOP_CNT_EN_CH1_V  0x1
#define RMT_TX_LOOP_CNT_EN_CH1_S  19
/* RMT_TX_LOOP_NUM_CH1 : R/W ;bitpos:[18:9] ;default: 10'b0 ; */
/*description: This register is used to configure the maximum loop count when tx_conti_mode is
valid..*/
#define RMT_TX_LOOP_NUM_CH1    0x000003FF
#define RMT_TX_LOOP_NUM_CH1_M  ((RMT_TX_LOOP_NUM_CH1_V)<<(RMT_TX_LOOP_NUM_CH1_S))
#define RMT_TX_LOOP_NUM_CH1_V  0x3FF
#define RMT_TX_LOOP_NUM_CH1_S  9
/* RMT_TX_LIM_CH1 : R/W ;bitpos:[8:0] ;default: 9'h80 ; */
/*description: This register is used to configure the maximum entries that CHANNEL$n can send o
ut..*/
#define RMT_TX_LIM_CH1    0x000001FF
#define RMT_TX_LIM_CH1_M  ((RMT_TX_LIM_CH1_V)<<(RMT_TX_LIM_CH1_S))
#define RMT_TX_LIM_CH1_V  0x1FF
#define RMT_TX_LIM_CH1_S  0

#define RMT_CH2_TX_LIM_REG          (DR_REG_RMT_BASE + 0xA8)
/* RMT_LOOP_STOP_EN_CH2 : R/W ;bitpos:[21] ;default: 1'b0 ; */
/*description: This bit is used to enable the loop send stop function after the loop counter co
unts to  loop number for CHANNEL$n..*/
#define RMT_LOOP_STOP_EN_CH2    (BIT(21))
#define RMT_LOOP_STOP_EN_CH2_M  (BIT(21))
#define RMT_LOOP_STOP_EN_CH2_V  0x1
#define RMT_LOOP_STOP_EN_CH2_S  21
/* RMT_LOOP_COUNT_RESET_CH2 : WT ;bitpos:[20] ;default: 1'b0 ; */
/*description: This register is used to reset the loop count when tx_conti_mode is valid..*/
#define RMT_LOOP_COUNT_RESET_CH2    (BIT(20))
#define RMT_LOOP_COUNT_RESET_CH2_M  (BIT(20))
#define RMT_LOOP_COUNT_RESET_CH2_V  0x1
#define RMT_LOOP_COUNT_RESET_CH2_S  20
/* RMT_TX_LOOP_CNT_EN_CH2 : R/W ;bitpos:[19] ;default: 1'b0 ; */
/*description: This register is the enabled bit for loop count..*/
#define RMT_TX_LOOP_CNT_EN_CH2    (BIT(19))
#define RMT_TX_LOOP_CNT_EN_CH2_M  (BIT(19))
#define RMT_TX_LOOP_CNT_EN_CH2_V  0x1
#define RMT_TX_LOOP_CNT_EN_CH2_S  19
/* RMT_TX_LOOP_NUM_CH2 : R/W ;bitpos:[18:9] ;default: 10'b0 ; */
/*description: This register is used to configure the maximum loop count when tx_conti_mode is
valid..*/
#define RMT_TX_LOOP_NUM_CH2    0x000003FF
#define RMT_TX_LOOP_NUM_CH2_M  ((RMT_TX_LOOP_NUM_CH2_V)<<(RMT_TX_LOOP_NUM_CH2_S))
#define RMT_TX_LOOP_NUM_CH2_V  0x3FF
#define RMT_TX_LOOP_NUM_CH2_S  9
/* RMT_TX_LIM_CH2 : R/W ;bitpos:[8:0] ;default: 9'h80 ; */
/*description: This register is used to configure the maximum entries that CHANNEL$n can send o
ut..*/
#define RMT_TX_LIM_CH2    0x000001FF
#define RMT_TX_LIM_CH2_M  ((RMT_TX_LIM_CH2_V)<<(RMT_TX_LIM_CH2_S))
#define RMT_TX_LIM_CH2_V  0x1FF
#define RMT_TX_LIM_CH2_S  0

#define RMT_CH3_TX_LIM_REG          (DR_REG_RMT_BASE + 0xAC)
/* RMT_LOOP_STOP_EN_CH3 : R/W ;bitpos:[21] ;default: 1'b0 ; */
/*description: This bit is used to enable the loop send stop function after the loop counter co
unts to  loop number for CHANNEL$n..*/
#define RMT_LOOP_STOP_EN_CH3    (BIT(21))
#define RMT_LOOP_STOP_EN_CH3_M  (BIT(21))
#define RMT_LOOP_STOP_EN_CH3_V  0x1
#define RMT_LOOP_STOP_EN_CH3_S  21
/* RMT_LOOP_COUNT_RESET_CH3 : WT ;bitpos:[20] ;default: 1'b0 ; */
/*description: This register is used to reset the loop count when tx_conti_mode is valid..*/
#define RMT_LOOP_COUNT_RESET_CH3    (BIT(20))
#define RMT_LOOP_COUNT_RESET_CH3_M  (BIT(20))
#define RMT_LOOP_COUNT_RESET_CH3_V  0x1
#define RMT_LOOP_COUNT_RESET_CH3_S  20
/* RMT_TX_LOOP_CNT_EN_CH3 : R/W ;bitpos:[19] ;default: 1'b0 ; */
/*description: This register is the enabled bit for loop count..*/
#define RMT_TX_LOOP_CNT_EN_CH3    (BIT(19))
#define RMT_TX_LOOP_CNT_EN_CH3_M  (BIT(19))
#define RMT_TX_LOOP_CNT_EN_CH3_V  0x1
#define RMT_TX_LOOP_CNT_EN_CH3_S  19
/* RMT_TX_LOOP_NUM_CH3 : R/W ;bitpos:[18:9] ;default: 10'b0 ; */
/*description: This register is used to configure the maximum loop count when tx_conti_mode is
valid..*/
#define RMT_TX_LOOP_NUM_CH3    0x000003FF
#define RMT_TX_LOOP_NUM_CH3_M  ((RMT_TX_LOOP_NUM_CH3_V)<<(RMT_TX_LOOP_NUM_CH3_S))
#define RMT_TX_LOOP_NUM_CH3_V  0x3FF
#define RMT_TX_LOOP_NUM_CH3_S  9
/* RMT_TX_LIM_CH3 : R/W ;bitpos:[8:0] ;default: 9'h80 ; */
/*description: This register is used to configure the maximum entries that CHANNEL$n can send o
ut..*/
#define RMT_TX_LIM_CH3    0x000001FF
#define RMT_TX_LIM_CH3_M  ((RMT_TX_LIM_CH3_V)<<(RMT_TX_LIM_CH3_S))
#define RMT_TX_LIM_CH3_V  0x1FF
#define RMT_TX_LIM_CH3_S  0

#define RMT_CH4_RX_LIM_REG          (DR_REG_RMT_BASE + 0xB0)
/* RMT_RX_LIM_CH4 : R/W ;bitpos:[8:0] ;default: 9'h80 ; */
/*description: This register is used to configure the maximum entries that CHANNEL$m can receiv
e..*/
#define RMT_RX_LIM_CH4    0x000001FF
#define RMT_RX_LIM_CH4_M  ((RMT_RX_LIM_CH4_V)<<(RMT_RX_LIM_CH4_S))
#define RMT_RX_LIM_CH4_V  0x1FF
#define RMT_RX_LIM_CH4_S  0

#define RMT_CH5_RX_LIM_REG          (DR_REG_RMT_BASE + 0xB4)
/* RMT_RX_LIM_CH5 : R/W ;bitpos:[8:0] ;default: 9'h80 ; */
/*description: This register is used to configure the maximum entries that CHANNEL$m can receiv
e..*/
#define RMT_RX_LIM_CH5    0x000001FF
#define RMT_RX_LIM_CH5_M  ((RMT_RX_LIM_CH5_V)<<(RMT_RX_LIM_CH5_S))
#define RMT_RX_LIM_CH5_V  0x1FF
#define RMT_RX_LIM_CH5_S  0

#define RMT_CH6_RX_LIM_REG          (DR_REG_RMT_BASE + 0xB8)
/* RMT_RX_LIM_CH6 : R/W ;bitpos:[8:0] ;default: 9'h80 ; */
/*description: This register is used to configure the maximum entries that CHANNEL$m can receiv
e..*/
#define RMT_RX_LIM_CH6    0x000001FF
#define RMT_RX_LIM_CH6_M  ((RMT_RX_LIM_CH6_V)<<(RMT_RX_LIM_CH6_S))
#define RMT_RX_LIM_CH6_V  0x1FF
#define RMT_RX_LIM_CH6_S  0

#define RMT_CH7_RX_LIM_REG          (DR_REG_RMT_BASE + 0xBC)
/* RMT_RX_LIM_CH7 : R/W ;bitpos:[8:0] ;default: 9'h80 ; */
/*description: This register is used to configure the maximum entries that CHANNEL$m can receiv
e..*/
#define RMT_RX_LIM_CH7    0x000001FF
#define RMT_RX_LIM_CH7_M  ((RMT_RX_LIM_CH7_V)<<(RMT_RX_LIM_CH7_S))
#define RMT_RX_LIM_CH7_V  0x1FF
#define RMT_RX_LIM_CH7_S  0

#define RMT_SYS_CONF_REG          (DR_REG_RMT_BASE + 0xC0)
/* RMT_CLK_EN : R/W ;bitpos:[31] ;default: 1'h0 ; */
/*description: RMT register clock gate enable signal. 1: Power up the drive clock of registers.
 0: Power down the drive clock of registers.*/
#define RMT_CLK_EN    (BIT(31))
#define RMT_CLK_EN_M  (BIT(31))
#define RMT_CLK_EN_V  0x1
#define RMT_CLK_EN_S  31
/* RMT_SCLK_ACTIVE : R/W ;bitpos:[26] ;default: 1'h1 ; */
/*description: rmt_sclk switch.*/
#define RMT_SCLK_ACTIVE    (BIT(26))
#define RMT_SCLK_ACTIVE_M  (BIT(26))
#define RMT_SCLK_ACTIVE_V  0x1
#define RMT_SCLK_ACTIVE_S  26
/* RMT_SCLK_SEL : R/W ;bitpos:[25:24] ;default: 2'h1 ; */
/*description: choose the clock source of rmt_sclk. 1:CLK_80Mhz;2:CLK_8MHz; 2:XTAL .*/
#define RMT_SCLK_SEL    0x00000003
#define RMT_SCLK_SEL_M  ((RMT_SCLK_SEL_V)<<(RMT_SCLK_SEL_S))
#define RMT_SCLK_SEL_V  0x3
#define RMT_SCLK_SEL_S  24
/* RMT_SCLK_DIV_B : R/W ;bitpos:[23:18] ;default: 6'h0 ; */
/*description: the denominator of the fractional part of the fractional divisor.*/
#define RMT_SCLK_DIV_B    0x0000003F
#define RMT_SCLK_DIV_B_M  ((RMT_SCLK_DIV_B_V)<<(RMT_SCLK_DIV_B_S))
#define RMT_SCLK_DIV_B_V  0x3F
#define RMT_SCLK_DIV_B_S  18
/* RMT_SCLK_DIV_A : R/W ;bitpos:[17:12] ;default: 6'h0 ; */
/*description: the numerator of the fractional part of the fractional divisor.*/
#define RMT_SCLK_DIV_A    0x0000003F
#define RMT_SCLK_DIV_A_M  ((RMT_SCLK_DIV_A_V)<<(RMT_SCLK_DIV_A_S))
#define RMT_SCLK_DIV_A_V  0x3F
#define RMT_SCLK_DIV_A_S  12
/* RMT_SCLK_DIV_NUM : R/W ;bitpos:[11:4] ;default: 8'h1 ; */
/*description: the integral part of the fractional divisor.*/
#define RMT_SCLK_DIV_NUM    0x000000FF
#define RMT_SCLK_DIV_NUM_M  ((RMT_SCLK_DIV_NUM_V)<<(RMT_SCLK_DIV_NUM_S))
#define RMT_SCLK_DIV_NUM_V  0xFF
#define RMT_SCLK_DIV_NUM_S  4
/* RMT_MEM_FORCE_PU : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: 1: Disable RMT memory light sleep power down function. 0: Power down RMT memory
when RMT is in light sleep mode..*/
#define RMT_MEM_FORCE_PU    (BIT(3))
#define RMT_MEM_FORCE_PU_M  (BIT(3))
#define RMT_MEM_FORCE_PU_V  0x1
#define RMT_MEM_FORCE_PU_S  3
/* RMT_MEM_FORCE_PD : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit to power down RMT memory..*/
#define RMT_MEM_FORCE_PD    (BIT(2))
#define RMT_MEM_FORCE_PD_M  (BIT(2))
#define RMT_MEM_FORCE_PD_V  0x1
#define RMT_MEM_FORCE_PD_S  2
/* RMT_MEM_CLK_FORCE_ON : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: Set this bit to enable the clock for RMT memory..*/
#define RMT_MEM_CLK_FORCE_ON    (BIT(1))
#define RMT_MEM_CLK_FORCE_ON_M  (BIT(1))
#define RMT_MEM_CLK_FORCE_ON_V  0x1
#define RMT_MEM_CLK_FORCE_ON_S  1
/* RMT_APB_FIFO_MASK : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: 1'h1: access memory directly.   1'h0: access memory by FIFO..*/
#define RMT_APB_FIFO_MASK    (BIT(0))
#define RMT_APB_FIFO_MASK_M  (BIT(0))
#define RMT_APB_FIFO_MASK_V  0x1
#define RMT_APB_FIFO_MASK_S  0

#define RMT_TX_SIM_REG          (DR_REG_RMT_BASE + 0xC4)
/* RMT_TX_SIM_EN : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: This register is used to enable multiple of channels to start sending data synch
ronously..*/
#define RMT_TX_SIM_EN    (BIT(4))
#define RMT_TX_SIM_EN_M  (BIT(4))
#define RMT_TX_SIM_EN_V  0x1
#define RMT_TX_SIM_EN_S  4
/* RMT_TX_SIM_CH3 : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Set this bit to enable CHANNEL$n to start sending data synchronously with other
enabled channels..*/
#define RMT_TX_SIM_CH3    (BIT(3))
#define RMT_TX_SIM_CH3_M  (BIT(3))
#define RMT_TX_SIM_CH3_V  0x1
#define RMT_TX_SIM_CH3_S  3
/* RMT_TX_SIM_CH2 : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit to enable CHANNEL$n to start sending data synchronously with other
enabled channels..*/
#define RMT_TX_SIM_CH2    (BIT(2))
#define RMT_TX_SIM_CH2_M  (BIT(2))
#define RMT_TX_SIM_CH2_V  0x1
#define RMT_TX_SIM_CH2_S  2
/* RMT_TX_SIM_CH1 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: Set this bit to enable CHANNEL$n to start sending data synchronously with other
enabled channels..*/
#define RMT_TX_SIM_CH1    (BIT(1))
#define RMT_TX_SIM_CH1_M  (BIT(1))
#define RMT_TX_SIM_CH1_V  0x1
#define RMT_TX_SIM_CH1_S  1
/* RMT_TX_SIM_CH0 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Set this bit to enable CHANNEL$n to start sending data synchronously with other
enabled channels..*/
#define RMT_TX_SIM_CH0    (BIT(0))
#define RMT_TX_SIM_CH0_M  (BIT(0))
#define RMT_TX_SIM_CH0_V  0x1
#define RMT_TX_SIM_CH0_S  0

#define RMT_REF_CNT_RST_REG          (DR_REG_RMT_BASE + 0xC8)
/* RMT_REF_CNT_RST_CH7 : WT ;bitpos:[7] ;default: 1'b0 ; */
/*description: This register is used to reset the clock divider of CHANNEL$m..*/
#define RMT_REF_CNT_RST_CH7    (BIT(7))
#define RMT_REF_CNT_RST_CH7_M  (BIT(7))
#define RMT_REF_CNT_RST_CH7_V  0x1
#define RMT_REF_CNT_RST_CH7_S  7
/* RMT_REF_CNT_RST_CH6 : WT ;bitpos:[6] ;default: 1'b0 ; */
/*description: This register is used to reset the clock divider of CHANNEL$m..*/
#define RMT_REF_CNT_RST_CH6    (BIT(6))
#define RMT_REF_CNT_RST_CH6_M  (BIT(6))
#define RMT_REF_CNT_RST_CH6_V  0x1
#define RMT_REF_CNT_RST_CH6_S  6
/* RMT_REF_CNT_RST_CH5 : WT ;bitpos:[5] ;default: 1'b0 ; */
/*description: This register is used to reset the clock divider of CHANNEL$m..*/
#define RMT_REF_CNT_RST_CH5    (BIT(5))
#define RMT_REF_CNT_RST_CH5_M  (BIT(5))
#define RMT_REF_CNT_RST_CH5_V  0x1
#define RMT_REF_CNT_RST_CH5_S  5
/* RMT_REF_CNT_RST_CH4 : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description: This register is used to reset the clock divider of CHANNEL$m..*/
#define RMT_REF_CNT_RST_CH4    (BIT(4))
#define RMT_REF_CNT_RST_CH4_M  (BIT(4))
#define RMT_REF_CNT_RST_CH4_V  0x1
#define RMT_REF_CNT_RST_CH4_S  4
/* RMT_REF_CNT_RST_CH3 : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description: This register is used to reset the clock divider of CHANNEL$n..*/
#define RMT_REF_CNT_RST_CH3    (BIT(3))
#define RMT_REF_CNT_RST_CH3_M  (BIT(3))
#define RMT_REF_CNT_RST_CH3_V  0x1
#define RMT_REF_CNT_RST_CH3_S  3
/* RMT_REF_CNT_RST_CH2 : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description: This register is used to reset the clock divider of CHANNEL$n..*/
#define RMT_REF_CNT_RST_CH2    (BIT(2))
#define RMT_REF_CNT_RST_CH2_M  (BIT(2))
#define RMT_REF_CNT_RST_CH2_V  0x1
#define RMT_REF_CNT_RST_CH2_S  2
/* RMT_REF_CNT_RST_CH1 : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description: This register is used to reset the clock divider of CHANNEL$n..*/
#define RMT_REF_CNT_RST_CH1    (BIT(1))
#define RMT_REF_CNT_RST_CH1_M  (BIT(1))
#define RMT_REF_CNT_RST_CH1_V  0x1
#define RMT_REF_CNT_RST_CH1_S  1
/* RMT_REF_CNT_RST_CH0 : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description: This register is used to reset the clock divider of CHANNEL$n..*/
#define RMT_REF_CNT_RST_CH0    (BIT(0))
#define RMT_REF_CNT_RST_CH0_M  (BIT(0))
#define RMT_REF_CNT_RST_CH0_V  0x1
#define RMT_REF_CNT_RST_CH0_S  0

#define RMT_DATE_REG          (DR_REG_RMT_BASE + 0xCC)
/* RMT_DATE : R/W ;bitpos:[27:0] ;default: 28'h2101181 ; */
/*description: This is the version register..*/
#define RMT_DATE    0x0FFFFFFF
#define RMT_DATE_M  ((RMT_DATE_V)<<(RMT_DATE_S))
#define RMT_DATE_V  0xFFFFFFF
#define RMT_DATE_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SOC_RMT_REG_H_ */