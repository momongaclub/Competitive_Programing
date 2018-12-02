#include <iostream>

using namespace std;

int main(void){
  int n;
  int i,j;
  cin >> n;
  int m[n];
  for(i=0;i<n;i++){
    cin >> m[i];
  }
int tmp;
  for(i=0;i<n-1;i++){
    for(j=n-1;j>i;j--){
      if(m[j-1]>m[j]){
        tmp=m[j];
        m[j]=m[j-1];
        m[j-1]=tmp;
      }
    }
  }
for(i=n-1;i>0;i--){
  if(m[i]!=m[i-1]){
  cout << m[i-1] << endl;
  break;
  }
}
//cout << m[0] << m[4];
  return 0;
}
