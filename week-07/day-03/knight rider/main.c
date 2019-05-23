/**
 ******************************************************************************
 * @file    main.c
 * @author  Ac6
 * @version V1.0
 * @date    01-December-2013
 * @brief   Default main function.
 ******************************************************************************
 */

//knight rider

#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

void init_pins()
{
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOFEN; /* GPIOI clock enable */

    //////configure 4 leds, PF7-PF10
    /* configure PF7 in output mode */
    GPIOF->MODER |= (GPIO_MODER_MODER7_0);
    /* ensure push pull mode selected default */
    GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_7);
    /* ensure maximum speed setting (even though it is unnecessary) */
    GPIOF->OSPEEDR |= (GPIO_OSPEEDER_OSPEEDR7);
    /* ensure all pull up pull down resistors are disabled */
    GPIOF->PUPDR &= ~(GPIO_PUPDR_PUPDR7);

    /* configure PF8 in output mode */
    GPIOF->MODER |= (GPIO_MODER_MODER8_0);
    /* ensure push pull mode selected default */
    GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_8);
    /* ensure maximum speed setting (even though it is unnecessary) */
    GPIOF->OSPEEDR |= (GPIO_OSPEEDER_OSPEEDR8);
    /* ensure all pull up pull down resistors are disabled */
    GPIOF->PUPDR &= ~(GPIO_PUPDR_PUPDR8);

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

    /*uint16_t user_led = (1 << 7);

     int i = 0;

     while (1) {
     for (i = 0; i < 3; i++) {
     GPIOF->BSRR = user_led;
     HAL_Delay(100);
     GPIOF->BSRR = user_led << 16;
     user_led = user_led << 1;
     }
     for (i = 0; i < 3; i++) {
     GPIOF->BSRR = user_led;
     HAL_Delay(100);
     GPIOF->BSRR = user_led << 16;
     user_led = user_led >> 1;

     }
     }*/

    /*uint32_t red_led[] =
    { (1 << 10), (1 << 9), (1 << 8), (1 << 7) };

    int counter = 0;
    int direction = -1;

    while (1) {
        if (counter == 3 || counter == 0)
            direction *= -1;
        GPIOF->BSRR = red_led[counter];
        HAL_Delay(70);
        GPIOF->BSRR = red_led[counter] << 16;
        HAL_Delay(70);
        counter += direction;
    }*/

    uint32_t led = (1 << 6);
    uint32_t led_prev = led;

    while (1) {
        for (int i = 0; i < 4; ++i) {
            GPIOF->BSRR = led_prev << 16;
            led = led << 1;
            GPIOF->BSRR = led;
            HAL_Delay(100);
            led_prev = led;
        }
        for (int i = 4; i > 0; --i) {
            GPIOF->BSRR = led_prev << 16;
            led = led >> 1;
            GPIOF->BSRR = led;
            HAL_Delay(100);
            led_prev = led;
        }
    }
}
