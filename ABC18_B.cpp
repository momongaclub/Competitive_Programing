#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <cstdlib>
#include <sstream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#define REP(i,n) for(int i = 0;i < n ;i++)
#define FOR(i,m,n) for(int i= m ;i<n;i++)
using namespace std;

int main(void){
  int i,j;
  string str;
  cin >> str;
  int N;
  cin >> N;
  int a,b;
  string tmp;
  REP(i,N){
    cin >> a >> b;
    a-=1;
    b-=1;
     tmp=str.substr(a,b-a+1);
     //tmp を逆にする

     str.replace(a,b,tmp);
     cout << str << endl;
  }
cout << str << endl;
  return 0;
}
