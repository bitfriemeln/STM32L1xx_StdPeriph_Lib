/**
  ******************************************************************************
  * @file    Lib_DEBUG/Lib_DEBUG_Example/stm32l1xx_ip_dbg.c 
  * @author  MCD Application Team
  * @version V1.2.0
  * @date    16-May-2014
  * @brief   This file provides all peripherals pointers initialization.
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

/* Includes ------------------------------------------------------------------*/
#include "stm32l1xx_ip_dbg.h"

/** @addtogroup STM32L1xx_StdPeriph_Examples
  * @{
  */

/** @addtogroup Lib_DEBUG_Example
  * @{
  */ 

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
TIM_TypeDef             *TIM2_DBG;
TIM_TypeDef             *TIM3_DBG;
TIM_TypeDef             *TIM4_DBG;
TIM_TypeDef             *TIM5_DBG;
TIM_TypeDef             *TIM6_DBG;
TIM_TypeDef             *TIM7_DBG;
TIM_TypeDef             *TIM9_DBG;
TIM_TypeDef             *TIM10_DBG;
TIM_TypeDef             *TIM11_DBG;
RTC_TypeDef             *RTC_DBG;
WWDG_TypeDef            *WWDG_DBG;
IWDG_TypeDef            *IWDG_DBG;
SPI_TypeDef             *SPI2_DBG;
SPI_TypeDef             *SPI3_DBG;
USART_TypeDef           *USART1_DBG;
USART_TypeDef           *USART2_DBG;
USART_TypeDef           *USART3_DBG;
I2C_TypeDef             *I2C1_DBG;
I2C_TypeDef             *I2C2_DBG;
PWR_TypeDef             *PWR_DBG;
DAC_TypeDef             *DAC_DBG;
EXTI_TypeDef            *EXTI_DBG;
GPIO_TypeDef            *GPIOA_DBG;
GPIO_TypeDef            *GPIOB_DBG;
GPIO_TypeDef            *GPIOC_DBG;
GPIO_TypeDef            *GPIOD_DBG;
GPIO_TypeDef            *GPIOE_DBG;
GPIO_TypeDef            *GPIOF_DBG;
GPIO_TypeDef            *GPIOG_DBG;
GPIO_TypeDef            *GPIOH_DBG;
ADC_TypeDef             *ADC1_DBG;
ADC_Common_TypeDef      *ADC_DBG;
SPI_TypeDef             *SPI1_DBG;
DMA_TypeDef             *DMA1_DBG;
DMA_Channel_TypeDef     *DMA1_Channel1_DBG;
DMA_Channel_TypeDef     *DMA1_Channel2_DBG;
DMA_Channel_TypeDef     *DMA1_Channel3_DBG;
DMA_Channel_TypeDef     *DMA1_Channel4_DBG;
DMA_Channel_TypeDef     *DMA1_Channel5_DBG;
DMA_Channel_TypeDef     *DMA1_Channel6_DBG;
DMA_Channel_TypeDef     *DMA1_Channel7_DBG;
RCC_TypeDef             *RCC_DBG;
CRC_TypeDef             *CRC_DBG;
FLASH_TypeDef           *FLASH_DBG;
OB_TypeDef              *OB_DBG;  
DBGMCU_TypeDef          *DBGMCU_DBG;
NVIC_Type               *NVIC_DBG;
SCB_Type                *SCB_DBG;
SysTick_Type            *SysTick_DBG;
MPU_Type                *MPU_DBG;
COMP_TypeDef            *COMP_DBG;
LCD_TypeDef             *LCD_DBG;
USART_TypeDef           *UART4_DBG;
USART_TypeDef           *UART5_DBG;
RI_TypeDef              *RI_DBG;
OPAMP_TypeDef           *OPAMP_DBG;
SYSCFG_TypeDef          *SYSCFG_DBG;
SDIO_TypeDef            *SDIO_DBG;
DMA_TypeDef             *DMA2_DBG;
DMA_Channel_TypeDef     *DMA2_Channel1_DBG;
DMA_Channel_TypeDef     *DMA2_Channel2_DBG;
DMA_Channel_TypeDef     *DMA2_Channel3_DBG;
DMA_Channel_TypeDef     *DMA2_Channel4_DBG;
DMA_Channel_TypeDef     *DMA2_Channel5_DBG;
AES_TypeDef             *AES_DBG;
FSMC_Bank1_TypeDef      *FSMC_Bank1_DBG;
FSMC_Bank1E_TypeDef     *FSMC_Bank1E_DBG;

/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  This function initialize peripherals pointers.
  * @param  None
  * @retval None
  */
void IP_Debug(void)
{
/************************************* ADC ************************************/
  ADC1_DBG = (ADC_TypeDef *)  ADC1_BASE;
  
  ADC_DBG = (ADC_Common_TypeDef *)  ADC_BASE;
  
/************************************* CRC ************************************/
  CRC_DBG = (CRC_TypeDef *)  CRC_BASE;

/************************************* DAC ************************************/
  DAC_DBG = (DAC_TypeDef *)  DAC_BASE;

/************************************* DBGMCU**********************************/
  DBGMCU_DBG = (DBGMCU_TypeDef *)  DBGMCU_BASE;


/************************************* DMA ************************************/
  DMA1_DBG = (DMA_TypeDef *)  DMA1_BASE;

  DMA1_Channel1_DBG = (DMA_Channel_TypeDef *)  DMA1_Channel1_BASE;

  DMA1_Channel2_DBG = (DMA_Channel_TypeDef *)  DMA1_Channel2_BASE;

  DMA1_Channel3_DBG = (DMA_Channel_TypeDef *)  DMA1_Channel3_BASE;

  DMA1_Channel4_DBG = (DMA_Channel_TypeDef *)  DMA1_Channel4_BASE;

  DMA1_Channel5_DBG = (DMA_Channel_TypeDef *)  DMA1_Channel5_BASE;

  DMA1_Channel6_DBG = (DMA_Channel_TypeDef *)  DMA1_Channel6_BASE;

  DMA1_Channel7_DBG = (DMA_Channel_TypeDef *)  DMA1_Channel7_BASE;
  
  DMA2_DBG = (DMA_TypeDef *)  DMA2_BASE;

  DMA2_Channel1_DBG = (DMA_Channel_TypeDef *)  DMA2_Channel1_BASE;

  DMA2_Channel2_DBG = (DMA_Channel_TypeDef *)  DMA2_Channel2_BASE;

  DMA2_Channel3_DBG = (DMA_Channel_TypeDef *)  DMA2_Channel3_BASE;

  DMA2_Channel4_DBG = (DMA_Channel_TypeDef *)  DMA2_Channel4_BASE;

  DMA2_Channel5_DBG = (DMA_Channel_TypeDef *)  DMA2_Channel5_BASE;

/************************************* EXTI ***********************************/
  EXTI_DBG = (EXTI_TypeDef *)  EXTI_BASE;

/************************************* FLASH and Option Bytes *****************/
  FLASH_DBG = (FLASH_TypeDef *)  FLASH_R_BASE;
  OB_DBG = (OB_TypeDef *)        OB_BASE;

/************************************* GPIO ***********************************/
  GPIOA_DBG = (GPIO_TypeDef *)  GPIOA_BASE;

  GPIOB_DBG = (GPIO_TypeDef *)  GPIOB_BASE;

  GPIOC_DBG = (GPIO_TypeDef *)  GPIOC_BASE;

  GPIOD_DBG = (GPIO_TypeDef *)  GPIOD_BASE;

  GPIOE_DBG = (GPIO_TypeDef *)  GPIOE_BASE;
  
  GPIOF_DBG = (GPIO_TypeDef *)  GPIOF_BASE;

  GPIOG_DBG = (GPIO_TypeDef *)  GPIOG_BASE;

  GPIOH_DBG = (GPIO_TypeDef *)  GPIOH_BASE;

/************************************* I2C ************************************/
  I2C1_DBG = (I2C_TypeDef *)  I2C1_BASE;

  I2C2_DBG = (I2C_TypeDef *)  I2C2_BASE;

/************************************* IWDG ***********************************/
  IWDG_DBG = (IWDG_TypeDef *) IWDG_BASE;

/************************************* NVIC ***********************************/
  NVIC_DBG = (NVIC_Type *)  NVIC_BASE;
  SCB_DBG = (SCB_Type *)  SCB_BASE;
  MPU_DBG = (MPU_Type *)  MPU_BASE;
  
/************************************* PWR ************************************/
  PWR_DBG = (PWR_TypeDef *)  PWR_BASE;

/************************************* RCC ************************************/
  RCC_DBG = (RCC_TypeDef *)  RCC_BASE;

/************************************* RTC ************************************/
  RTC_DBG = (RTC_TypeDef *)  RTC_BASE;

/************************************* SPI ************************************/
  SPI1_DBG = (SPI_TypeDef *)  SPI1_BASE;

  SPI2_DBG = (SPI_TypeDef *)  SPI2_BASE;
  
  SPI3_DBG = (SPI_TypeDef *)  SPI3_BASE;

/************************************* SysTick ********************************/
  SysTick_DBG = (SysTick_Type *)  SysTick_BASE;

/************************************* TIM ************************************/
  TIM2_DBG = (TIM_TypeDef *)  TIM2_BASE;

  TIM3_DBG = (TIM_TypeDef *)  TIM3_BASE;

  TIM4_DBG = (TIM_TypeDef *)  TIM4_BASE;
  
  TIM5_DBG = (TIM_TypeDef *)  TIM5_BASE;

  TIM6_DBG = (TIM_TypeDef *)  TIM6_BASE;

  TIM7_DBG = (TIM_TypeDef *)  TIM7_BASE;

  TIM9_DBG = (TIM_TypeDef *)  TIM9_BASE;

  TIM10_DBG = (TIM_TypeDef *)  TIM10_BASE;

  TIM11_DBG = (TIM_TypeDef *)  TIM11_BASE;      

/************************************* USART **********************************/
  USART1_DBG = (USART_TypeDef *) USART1_BASE;

  USART2_DBG = (USART_TypeDef *) USART2_BASE;

  USART3_DBG = (USART_TypeDef *) USART3_BASE;
  
  UART4_DBG = (USART_TypeDef *) UART4_BASE;

  UART5_DBG = (USART_TypeDef *) UART5_BASE;  


/************************************* WWDG ***********************************/
  WWDG_DBG = (WWDG_TypeDef *)  WWDG_BASE;

/************************************* LCD ************************************/
  LCD_DBG = (LCD_TypeDef *)  LCD_BASE;
  
/************************************* RI *************************************/  
  RI_DBG = (RI_TypeDef *)  RI_BASE;
  
/************************************* OPAMP **********************************/  
  OPAMP_DBG = (OPAMP_TypeDef *)  OPAMP_BASE; 
  
/************************************* SYSCFG *********************************/  
  SYSCFG_DBG = (SYSCFG_TypeDef *)  SYSCFG_BASE;   

/************************************* SDIO ***********************************/  
  SDIO_DBG = (SDIO_TypeDef *)  SDIO_BASE; 

/************************************* AES ************************************/  
  AES_DBG = (AES_TypeDef *)  AES_BASE; 
  
/************************************* FSMC ***********************************/  
  FSMC_Bank1_DBG = (FSMC_Bank1_TypeDef *)  FSMC_Bank1_R_BASE;
  
  FSMC_Bank1E_DBG = (FSMC_Bank1E_TypeDef *)  FSMC_Bank1E_R_BASE;

}

/**
  * @}
  */

/**
  * @}
  */
  
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
