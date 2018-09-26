#include <bits/stdc++.h>
using namespace std;
#define le 1000000007;

int main(void){
  int n,m,s,g;
  cin >> n >> m >> s >> g;
  int fi[n][n] = {};
  bool bfi[n][n]={};
  s--;g--;
  bfi[s][s]=true;
  int a,b,c,C=s;
  for(int i=0;i<m;i++){
    cin >> a >> b >> c;
    fi[a-1][b-1]=c;
    fi[b-1][a-1]=c;
  }
  while(C!=g){
    for(int i=0;i<n;i++){
      if(fi[C][i]!=0 && bfi[C][i]==false){
        int tmp = fi[C][i]+fi[C][C];
        if(fi[i][i]==0 || fi[i][i]>tmp){
          fi[i][i]=tmp;
        }
      }
    }
    int min=le;
    for(int i=0;i<n;i++){
      if(bfi[i][i]==false && min>fi[i][i] && fi[i][i]!=0){
        min=fi[i][i];
        C=i;
      }
    }
    bfi[C][C]=true;
  }
  cout << fi[g][g] << endl;
  return 0;
}
