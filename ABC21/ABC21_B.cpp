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
  int i,j;

  int A[N];

  for(i=0;i<N;i++){
    cin >> A[i];
  }

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(A[i]>A[j]){

      }
    }
  }
  return 0;
}
