/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BUTTON1_Pin GPIO_PIN_13
#define BUTTON1_GPIO_Port GPIOC
#define BUTTON2_Pin GPIO_PIN_14
#define BUTTON2_GPIO_Port GPIOC
#define BUTTON3_Pin GPIO_PIN_15
#define BUTTON3_GPIO_Port GPIOC
#define LED_RED_Pin GPIO_PIN_5
#define LED_RED_GPIO_Port GPIOA
#define LED_YELLOW_Pin GPIO_PIN_6
#define LED_YELLOW_GPIO_Port GPIOA
#define SEG0_Pin GPIO_PIN_7
#define SEG0_GPIO_Port GPIOA
#define R1_Pin GPIO_PIN_0
#define R1_GPIO_Port GPIOB
#define Y1_Pin GPIO_PIN_1
#define Y1_GPIO_Port GPIOB
#define G1_Pin GPIO_PIN_2
#define G1_GPIO_Port GPIOB
#define SEG4_1_Pin GPIO_PIN_10
#define SEG4_1_GPIO_Port GPIOB
#define SEG5_1_Pin GPIO_PIN_11
#define SEG5_1_GPIO_Port GPIOB
#define SEG6_1_Pin GPIO_PIN_12
#define SEG6_1_GPIO_Port GPIOB
#define SEG1_Pin GPIO_PIN_8
#define SEG1_GPIO_Port GPIOA
#define SEG2_Pin GPIO_PIN_9
#define SEG2_GPIO_Port GPIOA
#define SEG3_Pin GPIO_PIN_10
#define SEG3_GPIO_Port GPIOA
#define SEG4_Pin GPIO_PIN_11
#define SEG4_GPIO_Port GPIOA
#define SEG5_Pin GPIO_PIN_12
#define SEG5_GPIO_Port GPIOA
#define SEG6_Pin GPIO_PIN_13
#define SEG6_GPIO_Port GPIOA
#define EN0_Pin GPIO_PIN_14
#define EN0_GPIO_Port GPIOA
#define EN1_Pin GPIO_PIN_15
#define EN1_GPIO_Port GPIOA
#define R2_Pin GPIO_PIN_3
#define R2_GPIO_Port GPIOB
#define Y2_Pin GPIO_PIN_4
#define Y2_GPIO_Port GPIOB
#define G2_Pin GPIO_PIN_5
#define G2_GPIO_Port GPIOB
#define SEG0_1_Pin GPIO_PIN_6
#define SEG0_1_GPIO_Port GPIOB
#define SEG1_1_Pin GPIO_PIN_7
#define SEG1_1_GPIO_Port GPIOB
#define SEG2_1_Pin GPIO_PIN_8
#define SEG2_1_GPIO_Port GPIOB
#define SEG3_1_Pin GPIO_PIN_9
#define SEG3_1_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
