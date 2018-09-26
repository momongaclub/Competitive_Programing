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
  int i;
  cin >> N;
  int count=0;
  for(i=1;i<=N;i++){
    if(i%25==0){
      count++;
    }
    //cout << i << endl;
  }
  cout << count << endl;
  return 0;
}
