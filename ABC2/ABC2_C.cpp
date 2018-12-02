#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main(void){
double x[3],y[3];
int i;
for(i=0;i<3;i++){
  cin >> x[i] >> y[i];
}
for(i=1;i<3;i++){
  x[i]-=x[0];
  y[i]-=y[0];
}
x[0]=0;
y[0]=0;
printf("%.10f\n",abs((x[1]*y[2]-x[2]*y[1]))/2);
  return 0;
}
