#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
  double x1, x2, y1, y2, sub, suby, Distancia;
  scanf("%lf %lf %lf %lf",&x1, &y1, &x2, &y2);
  sub = (pow(x2 - x1,2))+(pow(y2 - y1,2));
  Distancia = sqrt(sub);
  printf("%.4lf\n", Distancia);

  return 0;
}
