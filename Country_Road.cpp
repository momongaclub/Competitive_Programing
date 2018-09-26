/*Country Road*/
#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;

int main(void){
  int o;
  cin >> o;
  for(int i=0;i<o;i++){
    int p,n;
    cin >> p >> n;
    vector<int> v(p,0),l(p,0);
    for(int j=0;j<p;j++){
      cin >> v[j];
    }
    for(int j=0;j<p-1;j++){
      l[j]=v[j+1]-v[j];
      //cout << l[j] <<endl;
    }
    int sum=accumulate(l.begin(),l.end(),0);
    //cout << sum << endl;
    sort(l.begin(),l.end());
    reverse(l.begin(),l.end());
    for(int j=0;j<n-1;j++){
      sum=sum-l[j];
      //cout << sum << ' ' << l[j] << endl;
    }
    if(sum<0)cout << 0 << endl;
    else cout << sum << endl;
  }
  return 0;
}
