#include <stdio.h>
#include <stdlib.h>

int main(){

  int cod, quant;
  double total;
  scanf("%d %d",&cod, &quant);

  if(cod == 1){
    total = quant * 4.00;
    printf("Total: R$ %.2lf\n", total);
  }
  else if(cod == 2){
    total = quant * 4.50;
    printf("Total: R$ %.2lf\n", total);
  }

  else if(cod == 3){
    total = quant * 5.00;
    printf("Total: R$ %.2lf\n", total);
  }
  else if(cod == 4){
    total = quant * 2.00;
    printf("Total: R$ %.2lf\n", total);
  }
  else if(cod == 5){
    total = quant * 1.50;
    printf("Total: R$ %.2lf\n", total);
  }

  return 0;

}
