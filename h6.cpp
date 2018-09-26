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
  int N,M;
  cin >> N >> M;
  int happy=0;
  vector<int>x(N),y(N);
  int i,j;
  for(i=0;i<N;i++){
    cin >> x[i] >> y[i];
  }
int tmpx,tmpy;
for(i=0;i<N-1;i++){
  for(j=N-1;j>i;j--){
    if(x[j-1]>x[j]){
      tmpx=x[j-1];
      tmpy=y[j-1];
      x[j-1]=x[j];
      y[j-1]=y[j];
      x[j]=tmpx;
      y[j]=tmpy;
    }
  }
}

  for(i=N-1;i>=0;i--){
    cout << x[i] << y[i] << endl;
    if(x[i]>y[i] && M!=0){
    happy+=x[i];
    M--;
  }else{
    happy+=y[i];
  }
}
cout << happy << endl;
    return 0;
}
