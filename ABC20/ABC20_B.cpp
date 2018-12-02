#include <iostream>
#include <cstring>
#include <cmath>
#include <stdlib.h>
#define REP(i,n) for(int i = 0;i < n ;i++)
#define FOR(i,m,n) for(int i= m ;i<n;i++)
using namespace std;

int main(void){
string a,b;
cin >> a >> b;
cout << atoi((a+b).c_str())*2 << endl;
  return 0;
}
