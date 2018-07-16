#include <stdio.h>
#include <stdlib.h>

int main(){
  double salario;
  scanf("%lf",&salario);
  if (salario <= 2000.0){
    printf("Isento\n",salario);
}
  else if(salario <= 3000.0){
    salario = (salario - 2000.0) * 0.08;
    printf("R$ %.2lf\n",salario);
}
  else if (salario <= 4500.0){
    salario = (1000.0 * 0.08 + (salario - 3000.0) * 0.18);
    printf("R$ %.2lf\n",salario);
  }

  else{
    salario = (1000.0 * 0.08 + 1500.0 * 0.18 + (salario - 4500.0) * 0.28);
    printf("R$ %.2lf\n",salario);
  }

  return 0;

}
