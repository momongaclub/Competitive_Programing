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
  int N;
  cin >> N;
  int a,b;
  cin >> a >> b;
  int K;
  cin >> K;
  int i,j;
  bool b1=true;
  int p[K];
  for(i=0;i<K;i++){
    cin >> p[i];
    if(p[i]==a ||p[i]==b)b1=false;
  }
  cout << 'a' << endl;
  for(i=0;i<K;i++){
    for(j=i+1;j<K;j++){
      if(p[i]==p[j]){
        b1=false;
      }
    }
  }


  if(b1==true){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  return 0;
}
