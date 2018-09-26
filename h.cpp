#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;
#define mod 1000000007;

int main(void){
  int h,w,d;
  cin >> h >> w >> d;
  int intmass[h][w];
  char charmass[h+1][w+1];
  bool boolmass[h][w] ={};
  //bool bfi[n][n]={};
  //基準を保持
  int cnt = 0;
  int x,y;
  x=1;
  y=1;
  charmass[1][1] = 'R';
  while(1){
    for(int i=1;i<=h;i++){
      for(int j=1;j<=w;j++){
        if(boolmass[i][j] == false){
          break;
        }
      }
    }

    for(int i=1;i<=h;i++){
      for(int j=1;j<=w;j++){
        if(abs(x-(i+1))+abs(y-(j+1)) == d){
          if(cnt == 0){
            charmass[i][j] = 'R';
          }else if(cnt == 1){
            charmass[i][j] = 'Y';
          }else if(cnt == 2){
            charmass[i][j] = 'G';
          }else if(cnt == 3){
            charmass[i][j] = 'B';
          }
          boolmass[i][j]=true;
        }
      }
    }
    cnt++;
  }
  return 0;
}
