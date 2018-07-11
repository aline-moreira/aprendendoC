#include <stdlib.h>
#include <stdio.h>

int main(){
    double A, B, C, MEDIA;
    scanf("%lf %lf %lf", &A, &B, &C);
    A *= 0.2;
    B *= 0.3;
    C *= 0.5;
    MEDIA = A + B + C;
    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}
