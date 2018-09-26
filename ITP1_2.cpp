#include <iostream>
#include <cstring>
#define REP(i,n) for(int i = 0;i < n ;i++)
#define FOR(i,m,n) for(int i= m ;i<n;i++)
using namespace std;

int main(void){
  int x,y;
  int W,H,r;

  cin >> W >> H >> x >> y >> r;
  if(x-r>=0 && x+r<=W && y-r>=0 && y+r<=H){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;
}
