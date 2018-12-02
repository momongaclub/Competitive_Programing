/*Finding Minimum String*/
#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;

int main(void){
  int n;
  cin >> n;
  vector<string> str;
  string str2;
  for(int i=0;i<n;i++){
    cin >> str2;
    str.push_back(str2);
  }
  sort(str.begin(),str.end());
  cout << str[0] <<endl;
  return 0;
}
