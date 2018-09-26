#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;

int main(void){
  int tmp=0;
  string fi,sec,str;
  cin >> fi >> sec >> str;
  while(str[tmp+sec.size()+1]!='\0'){
    for(int i=(int)str.find(fi)+(fi.size());i<(int)str.find(sec);i++){
      cout << str[i];
    }
    cout << endl;
    tmp=(int)str.find(sec);
  }
  return 0;
}
