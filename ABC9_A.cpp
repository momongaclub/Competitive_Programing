#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <cstdlib>
#include <sstream>
#define REP(i,n) for(int i = 0;i < n ;i++)
#define FOR(i,m,n) for(int i= m ;i<n;i++)
using namespace std;

int main(void){
  int N;
  cin >> N;
  if(N==12)cout << 1 << endl;
  else cout << N+1 << endl;
  return 0;
}
