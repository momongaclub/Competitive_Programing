#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(void){
  int x,y;
  cin >> x >> y;
  pair<int,int>pa;
  pa=make_pair(x,y);
  cout << pa.first << endl;

  return 0;
}
