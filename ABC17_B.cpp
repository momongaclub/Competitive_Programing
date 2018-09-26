#include <iostream>
#include <cstring>
#include <cmath>
#define REP(i,n) for(int i = 0;i < n ;i++)
#define FOR(i,m,n) for(int i= m ;i<n;i++)
using namespace std;

int main(void){
  char S[51];
  cin >> S;
  if(S[0]=='\0'){
    cout << "YES" << endl;
  }else if(S[0]=='c' && S[1]=='h' && S[2]=='o' && S[3]=='k' && S[4]=='u'){
  if(S[strlen(S)-1]=='o')cout << "YES" << endl;
  else if(S[strlen(S)-1]=='k')cout << "YES" << endl;
  else if(S[strlen(S)-1]=='u')cout << "YES" << endl;
  else if(S[strlen(S)-1]=='h' && S[strlen(S)-2]=='c')cout << "YES" << endl;
  else cout << "NO" << endl;
}else{
  cout << "NO" << endl;
}
  return 0;
}
