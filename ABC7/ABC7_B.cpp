#include <iostream>
#include <string.h>
using namespace std;

int main(void){
  char T[11];
  int a;
  cin >> T;
  a = strlen(T);
  if(a!=1){
    T[a-1]='\0';
  }else{
    if(T[0]=='a'){
      T[0]='?';
    }else{
      T[0]='a';
    }
  }
  if(T[0]=='?'){
    cout << -1 << endl;
  }else{
  cout << T <<endl;
}
  return 0;
}
