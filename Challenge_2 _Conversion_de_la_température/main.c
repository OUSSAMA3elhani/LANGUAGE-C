#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    printf("donner la temp�rature en Celsius ");
    scanf("%lf",&c);
    printf("donner la temp�rature en Kelvin :%f",c+273.15);

    return 0;
}
