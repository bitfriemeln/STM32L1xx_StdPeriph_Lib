/**
  ******************************************************************************
  * @file    COMP/AnalogVoltageMonitoring/main.h 
  * @author  MCD Application Team
  * @version V1.2.0
  * @date    16-May-2014
  * @brief   Header for main.c module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2014 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#include "stm32l1xx.h"

#ifdef USE_STM32L152D_EVAL
#include "stm32l152d_eval.h"
#include "stm32l152d_eval_glass_lcd.h"
#include "stm32l152d_eval_lcd.h"
#elif USE_STM32L152_EVAL
#include "stm32l152_eval.h"
#include "stm32l152_eval_glass_lcd.h"
#include "stm32l152_eval_lcd.h"
#endif

#include <stdio.h>


/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
#define STATE_OVER_THRESHOLD    0x00000001
#define STATE_UNDER_THRESHOLD   0x00000003

/* Exported functions ------------------------------------------------------- */


#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
