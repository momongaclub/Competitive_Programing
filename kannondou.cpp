#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;
#define le 1000000007;
int main(void){
  while(1==1){
  int n;
  cin >> n;
  if(n==0)return 0;
  int k[128];
  int memo[128];
  vector<int> fla(128,0);
  k[0]=0;
  k[1]=1;
  k[2]=2;
  k[3]=4;
  if(n==1 || n==2 || n==3){
    cout << 1 << endl;return 0;
  }
  if(fla[n]==8){
    cout << memo[n]/3650+1 << endl;
    return 0;
  }
  for(int i=4;i<=n;i++){
    k[i]=k[i-1]+k[i-2]+k[i-3];
    memo[i]=k[i];
    fla[i]=8;
  }
  cout << k[n]/3650+1 << endl;
}
  return 0;
}
