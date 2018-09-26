#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <sstream>
#define REP(i,n) for(int i = 0;i < n ;i++)
#define FOR(i,m,n) for(int i= m ;i<n;i++)
using namespace std;

int main(void){
  int count=0;
  int i;
  //stringstream ss;
  string str,str2;
  cin >> str;
  for(i=0;i<(str.size());i++){
    count++;
    if(str[i]!=str[i+1]){
      str2 += str[i];
      stringstream ss;
      ss << count;
      str2 += ss.str();
      //cout << ss.str()<< endl;
      count=0;
    }
  }
  cout << str2 << endl;

  return 0;
}
