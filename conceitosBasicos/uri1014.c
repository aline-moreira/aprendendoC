#include <stdlib.h>
#include <stdio.h>

int main(){
  int km;
  float total, media;
  scanf("%d %f", &km, &total);
  media = km/total;
  printf("%.3f km/l\n",media);

  return 0;
}
