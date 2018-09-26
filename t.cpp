#include <stdio.h>

int huave(double x,double y){
printf("人口は%.0f[人]\n",x);
printf("面積は%.0f[km^2]\n",y);
printf("人口密度は%.1f[人/km^2]です.\n",x/y);

  return 0;
}


int main(void){
  double a,b;
  printf("人口密度の計算をします.\n");
  printf("人口は？[人]:\n");
  scanf("%lf",&a);
  printf("面積は?[km^2]:\n");
  scanf("%lf",&b);
  huave(a,b);
  
  return 0;
}
