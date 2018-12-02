#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;
#define le 1000000007;

int main(void){
  /*入力開始*/
  int n,m,s,g;
  cin >> n >> m >> s >> g;
  int fi[n][n];
  bool bfi[n][n];
  s=s-1;//0オリジン
  g=g-1;

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      fi[i][j]=0;
      bfi[i][j]=false;
    }
  }
  /*スタートの初期&確定*/
  fi[s][s]=0;
  bfi[s][s]=true;

  int a,b,c;
  for(int i=0;i<m;i++){
    cin >> a >> b >> c;
    fi[a-1][b-1]=c;
    fi[b-1][a-1]=c;
  }
  /*入力終了*/
  int C;//確定したノード番号を収納
  C=s;
  /*ノードがつながっていない場合の所を書く*/

  while(C!=g){

  int min=le;
    for(int i=0;i<n;i++){
      if(fi[C][i]!=0 && bfi[C][i]==false){//隣接している場合&&ノードをのぞく
        //今の隣接しているノードが現在の隣接しているノードの値より小さいとき
        if(fi[i][i]==0 || fi[i][i]>fi[C][i]+fi[C][C]){
          fi[i][i]=fi[C][i]+fi[C][C];
        }
      }
      //ここで最小値がでる
    }
    /*ここですべてのノードの計算が終わる*///で小さいやつを確定状態にするつまりfi[i][i]の一番小さいやつ*確定を除く
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
