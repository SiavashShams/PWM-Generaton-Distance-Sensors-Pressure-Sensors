/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
TIM_HandleTypeDef htim1;

/* USER CODE BEGIN PV */
int count;
int dig1;
int dig2;
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_TIM1_Init(void);
/* USER CODE BEGIN PFP */
void SystemClock_Config(void);
void My_num_bcd(uint8_t x){
	HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
	if(x==0){

	}
	if(x==1){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
	}
	if(x==2){
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
	}
	if(x==3){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
	}
	if(x==4){
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_SET);
	}
	if(x==5){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_SET);
	}
	if(x==6){
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_SET);
	}
	if(x==7){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_SET);
	}
	if(x==8){
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
	}
	if(x==9){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
	}
	if(x==10){
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
	}
	if(x==11){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
	}
	if(x==12){
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
	}
	if(x==13){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
	}
	if(x==14){
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
	}
	if(x==15){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
	}
}
void My_num_bcd2(uint8_t x){
	HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(h_GPIO_Port, h_Pin, GPIO_PIN_RESET);
	if(x==0){

	}
	if(x==1){
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
	}
	if(x==2){
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
	}
	if(x==3){
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
	}
	if(x==4){
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
	}
	if(x==5){
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
	}
	if(x==6){
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
	}
	if(x==7){
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
	}
	if(x==8){
		HAL_GPIO_WritePin(h_GPIO_Port, h_Pin, GPIO_PIN_SET);
	}
	if(x==9){
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(h_GPIO_Port, h_Pin, GPIO_PIN_SET);
	}
	if(x==10){
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(h_GPIO_Port, h_Pin, GPIO_PIN_SET);
	}
	if(x==11){
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(h_GPIO_Port, h_Pin, GPIO_PIN_SET);
	}
	if(x==12){
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(h_GPIO_Port, h_Pin, GPIO_PIN_SET);
	}
	if(x==13){
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(h_GPIO_Port, h_Pin, GPIO_PIN_SET);
	}
	if(x==14){
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(h_GPIO_Port, h_Pin, GPIO_PIN_SET);
	}
	if(x==15){
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(h_GPIO_Port, h_Pin, GPIO_PIN_SET);
	}
}
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_TIM1_Init();
  /* USER CODE BEGIN 2 */
  //HAL_TIM_Base_Start_IT(&htim1);
  HAL_TIM_Base_Start(&htim1);

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */
	  count =__HAL_TIM_GetCounter(&htim1);
	  	 // count = TIM1->CNT;
	  	  dig1=count%10;
	  	  dig2=count/10;
	  	  My_num_bcd(dig1);
	  	  My_num_bcd2(dig2);
	  	  HAL_Delay(10);
    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE2);
  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 84;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 4;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief TIM1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM1_Init(void)
{

  /* USER CODE BEGIN TIM1_Init 0 */

  /* USER CODE END TIM1_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM1_Init 1 */

  /* USER CODE END TIM1_Init 1 */
  htim1.Instance = TIM1;
  htim1.Init.Prescaler = 0;
  htim1.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim1.Init.Period = 21;
  htim1.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim1.Init.RepetitionCounter = 0;
  htim1.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_ENABLE;
  if (HAL_TIM_Base_Init(&htim1) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_ETRMODE2;
  sClockSourceConfig.ClockPolarity = TIM_CLOCKPOLARITY_NONINVERTED;
  sClockSourceConfig.ClockPrescaler = TIM_CLOCKPRESCALER_DIV1;
  sClockSourceConfig.ClockFilter = 15;
  if (HAL_TIM_ConfigClockSource(&htim1, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim1, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM1_Init 2 */

  /* USER CODE END TIM1_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, a_Pin|b_Pin|c_Pin|d_Pin
                          |e_Pin|f_Pin|g_Pin|h_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : a_Pin b_Pin c_Pin d_Pin
                           e_Pin f_Pin g_Pin h_Pin */
  GPIO_InitStruct.Pin = a_Pin|b_Pin|c_Pin|d_Pin
                          |e_Pin|f_Pin|g_Pin|h_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
