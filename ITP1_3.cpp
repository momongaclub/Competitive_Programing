#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
  double r;
  cin >> r;
  cout << setprecision(6) << r*r*3.14 << ' ' << (r+r)*3.14<< endl;
}
