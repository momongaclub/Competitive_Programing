#include <iostream>

using namespace std;

int main(void){
  int long long a,b,x;
  cin >> a >> b >> x;
  int long long i;
  int long long count=0;
  for(i=a;i<=b;i++){
    if(i%x==0)count++;
  }
cout << count << endl;
  return 0;
}
