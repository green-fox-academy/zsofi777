/**
 ******************************************************************************
 * @file    main.c
 * @author  Ac6
 * @version V1.0
 * @date    01-December-2013
 * @brief   Default main function.
 ******************************************************************************
 */

//railroad crossing

#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

void init_pins()
{
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOFEN; /* GPIOI clock enable */

    //////configure 2 leds, PF9-PF10 (=A1-A2)
    /* configure PF9 in output mode */
    GPIOF->MODER |= (GPIO_MODER_MODER9_0);
    /* ensure push pull mode selected default */
    GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_9);
    /* ensure maximum speed setting (even though it is unnecessary) */
    GPIOF->OSPEEDR |= (GPIO_OSPEEDER_OSPEEDR9);
    /* ensure all pull up pull down resistors are disabled */
    GPIOF->PUPDR &= ~(GPIO_PUPDR_PUPDR9);

    /* configure PF10 in output mode */
    GPIOF->MODER |= (GPIO_MODER_MODER10_0);
    /* ensure push pull mode selected default */
    GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_10);
    /* ensure maximum speed setting (even though it is unnecessary) */
    GPIOF->OSPEEDR |= (GPIO_OSPEEDER_OSPEEDR10);
    /* ensure all pull up pull down resistors are disabled */
    GPIOF->PUPDR &= ~(GPIO_PUPDR_PUPDR10);
}

int main(void)
{

    HAL_Init();
    init_pins();

    uint32_t user_led = (1 << 9);

     /*while (1) {
     for (int i = 0; i < 2; i++) {
     GPIOF->BSRR = user_led << i;
     HAL_Delay(400);
     GPIOF->BSRR = user_led << i << 16;
     }
     }*/

    while (1) {
        uint32_t user_led = (1 << 9);
        for (int i = 0; i < 2; ++i) {
            GPIOF->BSRR = user_led;
            HAL_Delay(300);
            GPIOF->BSRR = user_led << 16;
            user_led = user_led << 1;
        }
    }
}
