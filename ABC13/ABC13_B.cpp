#include <iostream>
#include <cstring>
#include <cmath>
#define REP(i,n) for(int i = 0;i < n ;i++)
#define FOR(i,m,n) for(int i= m ;i<n;i++)
using namespace std;

int main(void){
  int a,b;
  cin >> a >> b;
  if(abs(b-a)>10-abs(b-a)){
    cout << 10-abs(b-a) << endl;
  }else{
    cout << abs(b-a) << endl;
  }

  return 0;
}
