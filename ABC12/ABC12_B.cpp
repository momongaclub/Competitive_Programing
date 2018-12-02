#include <iostream>
#include <cstring>
#define REP(i,n) for(int i = 0;i < n ;i++)
#define FOR(i,m,n) for(int i= m ;i<n;i++)
using namespace std;

int main(void){
  int N;
  cin >> N;
  if(N/3600<10){
  cout << '0'<< N/3600;
}else{
  cout << N/3600;
}
cout << ':';
if(N/60%60<10){
  cout << '0' <<N/60%60;
}else{
  cout << N/60%60;
}
cout << ':';
if(N%60<10){
  cout <<'0'<< N%60 <<endl;
}else{
  cout << N%60 << endl;
}
  return 0;
}
