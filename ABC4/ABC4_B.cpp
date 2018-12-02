#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <cstdlib>
#include <sstream>
#define REP(i,n) for(int i = 0;i < n ;i++)
#define FOR(i,m,n) for(int i= m ;i<n;i++)
using namespace std;

int main(void){
  string mas[4][4];
  int i,j;
  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      cin >> mas[i][j];
      //cout << mas[i][j];
    }
  }


  for(i=3;i>-1;i--){
    for(j=3;j>-1;j--){
      cout << mas[i][j] << ' ';
    }
    cout << endl;
  }

  return 0;
}
