#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    double VOLUME, pi = 3.14159, raio;
    scanf("%lf", &raio);
    VOLUME = (4/3.0) * pi * pow(raio,3);
    printf("VOLUME = %.3lf\n", VOLUME);

    return 0;

}
