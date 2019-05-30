#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

/* necessary include files */
#include "stm32746g_discovery_lcd.h" // Feel free to look inside and explore!

static void Error_Handler(void);
static void SystemClock_Config(void);

void LCD_Init()
{
    BSP_LCD_Init();
    BSP_LCD_LayerDefaultInit(1, LCD_FB_START_ADDRESS);
    BSP_LCD_SelectLayer(1);
    BSP_LCD_SetFont(&LCD_DEFAULT_FONT);
    BSP_LCD_SetBackColor(LCD_COLOR_WHITE);
    BSP_LCD_Clear(LCD_COLOR_WHITE);
}

int main(void)
{
    HAL_Init();
    SystemClock_Config();
    LCD_Init();

    /* drawing a red circle */
    BSP_LCD_SetTextColor(LCD_COLOR_LIGHTRED); //colors 32 bit numbers (4*8 bit),0xFF(not clear)rrggbb
    BSP_LCD_FillCircle(420, 220, 30); //50-x:from left[0],to right[500],50-y:from down[0]to up[300],30:size
    BSP_LCD_SetTextColor(LCD_COLOR_CYAN);
    BSP_LCD_FillCircle(20, 30, 10);
    BSP_LCD_SetTextColor(LCD_COLOR_YELLOW);
    BSP_LCD_FillCircle(76, 100, 20);
    BSP_LCD_SetTextColor(LCD_COLOR_LIGHTMAGENTA);
    BSP_LCD_FillCircle(80, 40, 9);
    BSP_LCD_SetTextColor(LCD_COLOR_LIGHTBLUE);
    BSP_LCD_FillCircle(340, 230, 9);

    /* drawing text */
    BSP_LCD_SetTextColor(LCD_COLOR_BLUE);
    BSP_LCD_SetFont(&Font16);
    BSP_LCD_DisplayChar(263, 113, 0x2E);
    BSP_LCD_DisplayChar(269, 113, 0x2E);
    BSP_LCD_SetFont(&Font24);
    BSP_LCD_DisplayStringAt(0, 125, "BOLDOG 40. SZULINAPOT!!", CENTER_MODE); //50-x from left to right,50-y from up to down,mode:LEFT-RIGHT-CENTER
    BSP_LCD_SetFont(&Font20);
    BSP_LCD_DisplayStringAt(190, 160, ",", LEFT_MODE);
    BSP_LCD_SetFont(&Font24);
    BSP_LCD_DisplayStringAt(0, 175, "(utolag is:)", CENTER_MODE);
    BSP_LCD_DisplayStringAt(0, 220, ":D", CENTER_MODE);
    while (1) {
    }
}

static void Error_Handler(void)
{
}

static void SystemClock_Config(void)
{
    RCC_OscInitTypeDef RCC_OscInitStruct =
    { 0 };
    RCC_ClkInitTypeDef RCC_ClkInitStruct =
    { 0 };

    /**Configure the main internal regulator output voltage */
    __HAL_RCC_PWR_CLK_ENABLE();
    __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

    /**Initializes the CPU, AHB and APB busses clocks */
    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
    RCC_OscInitStruct.HSIState = RCC_HSI_ON;
    RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
    RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
    RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
    RCC_OscInitStruct.PLL.PLLM = 8;
    RCC_OscInitStruct.PLL.PLLN = 216;
    RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
    RCC_OscInitStruct.PLL.PLLQ = 2;

    if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
        Error_Handler();
    }

    /**Activate the Over-Drive mode */
    if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
        Error_Handler();
    }

    /**Initializes the CPU, AHB and APB busses clocks */
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
            | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
        Error_Handler();
    }
}
