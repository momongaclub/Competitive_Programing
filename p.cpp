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
  int N;
  cin >> N;
  int i;
  long long sum=0;
  int tmp;
  vector<int>a(N);
  map<int,int>c;
  for(i=0;i<N;i++){
    cin >> a[i];
    sum+=a[i];
    c[a[i]]++;
  }
  sum+=c[4];
  for(i=0;i<N;i++){
    if(c[4-a[i]]!=0){
      sum++;
      c[4-a[i]]--;
    }
  }
  cout << sum << endl;
  return 0;
}
