/*Rummy*/
#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;

int main(void){
  //連番と同じ数字の処理
  //string 二個で合わせる
  int n;
  cin >> n;
  vector<int> b(9,0);
  char s;
  for(int o=0;o<n;o++){
    vector<bool> flag(9,false);
  for(int i=0;i<9;i++){
    cin >> b[i];
  }
  for(int i=0;i<9;i++){
    cin >> s;
    if(s=='R')b[i]+=10;
    else if(s=='G')b[i]+=20;
    else b[i]+=30;
  }
  sort(b.begin(),b.end());
  int cnt=0;
  for(int i=0;i<9;i++){
    for(int j=i+1;j<9;j++){
      for(int k=j+1;k<9;k++){
        if(flag[i]==false && flag[j]==false && flag[k]==false){
          if(b[i]==b[j] && b[i]==b[k] && b[j]==b[k]){
            cnt++;
            flag[i]=flag[j]=flag[k]=true;
            break;
          }else if(b[i]==b[j]-1 && b[i]==b[j]-1 && b[j]-1==b[k]-2){
            cnt++;
            flag[i]=flag[j]=flag[k]=true;
            break;
          }
        }
      }
    }
  }
  if(cnt==3)cout << 1 << endl;
  else cout << 0 << endl;
}
  return 0;
}
