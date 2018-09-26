#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <sstream>
#define REP(i,n) for(int i = 0;i < n ;i++)
#define FOR(i,m,n) for(int i= m ;i<n;i++)
using namespace std;

int main(void){
  string S,T;
  bool b1=true;
  cin >> S >> T;
  int i;
  for(i=0;i<S.size();i++){


    if(S[i]!=T[i]){

      if(S[i]=='@'){
        if(T[i]=='a' || T[i]=='t' || T[i]=='c' || T[i] == 'o' || T[i] == 'd' || T[i] == 'e' || T[i] == 'r'){

        }else{
          b1=false;
        }
      }else if(T[i]=='@'){
        if(S[i]=='a' || S[i]=='t' || S[i]=='c' || S[i] == 'o' || S[i] == 'd' || S[i] == 'e' || S[i] == 'r'){

        }else{
          b1=false;
        }
      }

    }else if(S[i]!='@' && T[i]!='@'){
      b1=false;
    }
  }

  if(b1==true){
    cout << "You can win" << endl;
  }else{
    cout << "You will lose" << endl;
  }
  return 0;
}
