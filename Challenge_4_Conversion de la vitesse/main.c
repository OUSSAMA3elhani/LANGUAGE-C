#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k;
    printf("donner la vitesse en kilom�tres par heure (km/h):");
    scanf("%f",&k);
    printf("donner la vitesse en m�tres par seconde (m/s):%f",k*0.27778);
    return 0;
}
