#include "stm32f7xx.h"
#include "stm32746g_discovery.h"
#include <string.h>

#define UART_PUTCHAR int __io_putchar(int ch)

UART_HandleTypeDef uart_handle;

void init_uart()
{
    /* enable the clock of the used peripherial instance */
    __HAL_RCC_USART1_CLK_ENABLE();

    /* defining the UART configuration structure */
    uart_handle.Instance = USART1;
    uart_handle.Init.BaudRate = 115200;
    uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
    uart_handle.Init.StopBits = UART_STOPBITS_1;
    uart_handle.Init.Parity = UART_PARITY_NONE;
    uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
    uart_handle.Init.Mode = UART_MODE_TX_RX;

    BSP_COM_Init(COM1, &uart_handle);
}

int main(void)
{
    HAL_Init();
    init_uart();

    char hello[] = "Hello World!\r\n";

    while (1) {
        HAL_UART_Transmit(&uart_handle, (uint8_t*) hello, strlen(hello), 0xFFFF);
        HAL_Delay(1000);

        /* or using printf(): */
        printf("%s", hello);
    }
}

UART_PUTCHAR
{
    HAL_UART_Transmit(&uart_handle, (uint8_t*)&ch, 1, 0xFFFF);
    return ch;
}
