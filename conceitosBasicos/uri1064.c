#include <stdio.h>
#include <stdlib.h>

int main(){
  float media = 0, valor, somaP = 0;
  int quantP = 0, cont;

  for(cont = 1; cont <= 6; cont++){
    scanf("%f",&valor);
    if(valor > 0){
      quantP += 1;
       somaP += valor;
    }
  }
    media = somaP / quantP;
    printf("%d valores positivos\n",quantP);
    printf("%.1f\n",media);

    return 0;
}
