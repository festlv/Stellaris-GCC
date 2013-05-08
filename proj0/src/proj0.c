#include <stdio.h>

#include <math.h>

#include <stdint.h>
#include <stdbool.h>

#include "driverlib/rom.h"
#include "driverlib/rom_map.h"

const float  PI_F=3.14159265358979f;
int main(void)
{
    float test=3.14;
    printf("Test\n");
    printf("test= %f\n", test);
    printf("Pi = %f\n", PI_F);
    printf("Sin(0.5) = %f\n", sin(0.5));
    while (1) {

    }
    return 0;
}


