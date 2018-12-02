#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <sstream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cctype>
#include <map>
#include <cstring>
#include <typeinfo>
#define REP(i,n) for(int i = 0;i < n ;i++)
#define FOR(i,m,n) for(int i= m ;i<n;i++)
using namespace std;

int main(void){
  char s[1000000];
  cin >> s;
  int count=0;
  int i;
  for(i=1;strlen(s);i++){
    cout << 1;
    /*if(s[i-1]!=s[i]){
      count++;
      cout << 1 << endl;
    }*/
  }

  cout << count << endl;
  return 0;
}
