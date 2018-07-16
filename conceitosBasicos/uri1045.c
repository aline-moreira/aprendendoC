#include <stdio.h>
#include <stdlib.h>

int main (){
  double A, B, C, Ordem;
  scanf("%lf %lf %lf", &A, &B, &C);
  if(A < B){
    Ordem = A;
    A = B;
    B = Ordem;
  }
  if(B < C){
    Ordem = B;
    B =  C;
    C = Ordem;
  }
  if(A < B){
    Ordem = A;
    A = B;
    B = Ordem;
  }

  if(A >= B + C)
    printf("NAO FORMA TRIANGULO\n");

    else

  if(A * A == ((B * B + C * C)))
    printf("TRIANGULO RETANGULO\n");

  else
  if(A * A > (B * B)+(C * C))
    printf("TRIANGULO OBTUSANGULO\n");

  if(A * A < ((B * B + C * C)))
    printf("TRIANGULO ACUTANGULO\n");

  if(A == B && B == C)
    printf("TRIANGULO EQUILATERO\n");

  else
    if(A == B || B == C || A == C)
    printf("TRIANGULO ISOSCELES\n");

  return 0;

}
