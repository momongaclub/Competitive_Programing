#include <iostream>
#include <cstring>
#include <cmath>
#define REP(i,n) for(int i = 0;i < n ;i++)
#define FOR(i,m,n) for(int i= m ;i<n;i++)
using namespace std;

int main(void){
  int a,b,c;
  cin >> a >> b >> c;
  if(a+b==c && a-b ==c){
    cout << '?' << endl;
  }else if(a-b==c){
    cout << "-" << endl;
  }else if(a+b==c){
    cout << "+" << endl;
  }else{
cout << '!' << endl;
  }

  return 0;
}
