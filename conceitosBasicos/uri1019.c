#include <stdio.h>
#include <stdlib.h>

int main(){

  int N,horas,minutos,segundos;
  scanf("%d", &N);
  segundos = N % 60;
  N /= 60;
  minutos = N % 60;
  N /=60;
  horas = N % 60;
  printf("%d:%d:%d\n",horas,minutos,segundos);

  return 0;
}
