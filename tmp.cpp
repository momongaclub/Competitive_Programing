#include <iostream>
#include <cstring>
#define REP(i,n) for(int i = 0;i < n ;i++)
#define FOR(i,m,n) for(int i= m ;i<n;i++)
using namespace std;


int main(void){
  char s[10000000];
  int K;
  cin >> s;
  cin >> K;
  int i;
  for(i=0;K!=0;i++){
    if(s[i+1]!='\0'){
      if(s[i]!='a'){
        x = s[i];
        //K=K-(123-x);
        s[i]='a';
      }
    }else{
      x=s[i];
      K=0;
    }
  }
  cout << s << endl;
  return 0;
}
