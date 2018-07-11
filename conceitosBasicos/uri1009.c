#include <stdlib.h>
#include <stdio.h>

int main(){
    
    char vendedor[30];
    double salario, TOTAL;
    scanf("%s %lf %lf", vendedor, &salario, &TOTAL);
    TOTAL = TOTAL*  0.15 + salario;
    printf("TOTAL = R$ %.2lf\n", TOTAL);

    return 0;
}
