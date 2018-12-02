#include <iostream>
using namespace std;
int main(void){
int x;
cin >> x;
int i;
int num=0;
for(i=1;i<=x;i++){
  num+=i*10000;
}
cout <<num/x << endl;
  return 0;
}
