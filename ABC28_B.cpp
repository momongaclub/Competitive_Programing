#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <cstdlib>
#include <sstream>
#include <cstdio>
#include <vector>
#include <algorithm>
#define REP(i,n) for(int i = 0;i < n ;i++)
#define FOR(i,m,n) for(int i= m ;i<n;i++)
using namespace std;

int main(void){
  int i,j;
  string ABC = "ABCDEF";
  string str;
  vector<int> c(6,0);
  cin >> str;

  for(i=0;i<6;i++){
      c[i]=(count(str.begin(),str.end(),ABC[i]));
  }

  for(i=0;i<6;i++){
    if(i!=5){
    cout << c[i] <<' ';
    }
    else{
      cout << c[i] << endl;
    }
  }
  return 0;
}
