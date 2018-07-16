#include <stdio.h>
#include <stdlib.h>

int main(){

  double Num;
  scanf("%lf", &Num);

  if((Num >= 0) && (Num <= 25.0000)){
    printf("Intervalo [0,25]\n");
  }
  else if((Num > 25) && (Num <= 50.0000)){
    printf("Intervalo (25,50]\n");
  }
  else if((Num > 50) && (Num <= 75.0000)){
    printf("Intervalo (50,75]\n");
  }
  else if((Num > 75) && (Num <= 100.0000)){
    printf("Intervalo (75,100]\n");
  }
  else{
    printf("Fora de intervalo\n");
  }

  return 0;

}
