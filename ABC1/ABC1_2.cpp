#include <iostream>
#define km 1000
using namespace std;
int main(void){
  int M;
  cin >> M;
  if(M<km/10)cout << "00" << endl;
  else if(M>=km/10 && M<=5*km){
    M *= 10;
    if(M<10*km)cout << '0'<<M << endl;
    else cout << M << endl;
  }
  else if(M<=30*km)cout << M+50 << endl;
  else if(M<=70*km)cout << << endl;
  else cout << 89 << endl;
  return 0;
}
