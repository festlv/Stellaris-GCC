#include <stdio.h>

#include <stdint.h>
#include <stdbool.h>

#include "inc/hw_ints.h"
#include "inc/hw_gpio.h"
#include "inc/hw_memmap.h"
#include "driverlib/pin_map.h"
#include "driverlib/rom.h"
#include "inc/hw_sysctl.h"
#include "inc/hw_types.h"

#include "driverlib/gpio.h"
#include "driverlib/sysctl.h"

int32_t i = 0xDEAD;
int32_t j;

int main(void)
{
    volatile int32_t i2 = i;
    volatile int32_t j2 = j;
    volatile float a = 3.14;
    while (1) {
        ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
        ROM_GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1);
        ROM_GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, 0xFF); 
    }
    return 0;
}
