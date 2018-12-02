#include <bits/stdc++.h>
using namespace std;
#define le 1000000007;

int main(void){
  int h,w,d;
  cin >> h >> w >> d;
  char mass[h][w];
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      mass[i][j] = 'R';
      //cout << mass[i][j];
    }
    //fsout << endl;
  }
  int x=0,y=0;
  int cnt=0;
  bool flag = true;
//while(cnt != 3){
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      int sa = abs(x-i)+abs(y-j);//最初の処理してる
      if(sa == d){
        //cout << 1 << endl;
        x=i;y=j;
        cout << x << y << endl;
        if(mass[x][y] == 'R' || mass[x][y] == 'B' || mass[x][y] == 'G'){
          mass[i][j] = 'Y';
        }else if(mass[x][y] == 'R' || mass[x][y] == 'B' || mass[x][y] == 'Y'){
          mass[i][j] = 'G';
        }else if(mass[x][y] == 'R' || mass[x][y] == 'Y' || mass[x][y] == 'G'){
          mass[i][j] = 'B';
        }
      }
    }
    x=i;y=0;
  }
  //cnt++;
  //flag = true;
//}

  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cout << mass[i][j];
    }
    cout << endl;
  }
  return 0;
}
