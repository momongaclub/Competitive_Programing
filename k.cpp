#include <iostream>
using namespace std;

int main(){
  bool a[8][8] = {};
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      if(a[i][j]==false)cout << 8;
    }
    cout << endl;
  }

  return 0;
}
