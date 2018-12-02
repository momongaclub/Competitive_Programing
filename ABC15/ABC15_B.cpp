#include <iostream>
#include <cstring>
#include <cmath>
#define REP(i,n) for(int i = 0;i < n ;i++)
#define FOR(i,m,n) for(int i= m ;i<n;i++)
using namespace std;

int main(void){
  int N;
  cin >> N;
  int a[N];
  int i;
  int total=0;
  int waru=0;
  for(i=0;i<N;i++){
    cin >> a[i];
    total+=a[i];
    if(a[i]!=0){
      waru++;
    }
  }
  if(double(total)/double(waru) - total/waru==0){
  cout << total/waru << endl;
}else{
  cout << total/waru+1 << endl;
}

  return 0;
}
