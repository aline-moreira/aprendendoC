#include <stdio.h>
#include <stdlib.h>

int main(){
  double valor, MO;
  int M=0, um=0, zcinq=0, zvintc=0, zdez=0, zcinco=0, zum=0;
  int N, cem, cinq, vinte, dez, cinco, dois;

  scanf("%lf",&valor);


  N = valor;
  N = (int) N;
  cem = N / 100;
  N %= 100;
  cinq = N / 50;
  N %= 50;
  vinte = N / 20;
  N %= 20;
  dez = N / 10;
  N %= 10;
  cinco = N / 5;
  N %= 5;
  dois = N /2;
  N %= 2;

  um = N / 1;
  MO = valor;
  MO = (int) M;
  M = valor * 100;
  M %= 100;
  zcinq = M / 50;
  M %= 50;
  zvintc = M / 25;
  M %= 25;
  zdez = M / 10;
  M %= 10;
  zcinco = M / 5;
  zum = M % 5;

  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n",cem);
  printf("%d nota(s) de R$ 50.00\n",cinq);
  printf("%d nota(s) de R$ 20.00\n",vinte);
  printf("%d nota(s) de R$ 10.00\n",dez);
  printf("%d nota(s) de R$ 5.00\n",cinco);
  printf("%d nota(s) de R$ 2.00\n",dois);
  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n",zum);
  printf("%d moeda(s) de R$ 0.50\n",zum);
  printf("%d moeda(s) de R$ 0.25\n",zum);
  printf("%d moeda(s) de R$ 0.10\n",zum);
  printf("%d moeda(s) de R$ 0.05\n",zum);
  printf("%d moeda(s) de R$ 0.01\n",zum);

  return 0;

}
