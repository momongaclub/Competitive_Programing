#include <iostream>
#include <cstring>
#include <cctype>
#define REP(i,n) for(int i = 0;i < n ;i++)
#define FOR(i,m,n) for(int i= m ;i<n;i++)
using namespace std;

int main(void){
  char S[13];
  int i;
  cin >> S;
  S[0]=toupper(S[0]);
  for(i=1;i<strlen(S);i++){
    S[i]=tolower(S[i]);
  }
cout << S << endl;
  return 0;
}
