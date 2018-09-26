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
  int tmp;
  int N,K;
  double rate=0;
  cin >> N >> K;
  vector<double> R(N);
  for(i=0;i<N;i++){
    cin >> R[i];
  }

  sort(R.begin(),R.end());

  for(i=0;i<K;i++){
    rate = (rate+R[N-K+i])/2;
  }
  printf("%.16f\n",rate);
  return 0;
}
