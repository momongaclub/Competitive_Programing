/*sort2*/
#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;
#define le 1000000007;

int main(void){
  /*入力開始*/
  int n;
  cin >> n;
  string s,sf,se,rsf,rse;
  string str[2][2];
  int bex[2]={1,0},bey[2]={0,1};
  for(int i=0;i<n;i++){
    map<string,int> train;
    cin >> s;
    for(int j=0;j<s.size();j++){
      str[0][0]=str[0][1]=s.substr(0,j);
      str[1][0]=str[1][1]=s.substr(j,s.size());
      reverse(str[0][1].begin(),str[0][1].end());
      reverse(str[1][1].begin(),str[1][1].end());
      for(int k=0;k<2;k++){
        for(int l=0;l<2;l++){
          train[str[bex[i]][bey[i]]+str[bex[i]][bey[i]]];//8通りのfor文
        }
      }
    }
  }
  /*入力終了*/
  return 0;
}
