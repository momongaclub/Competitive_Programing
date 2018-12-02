#include <iostream>

using namespace std;
int main(void){
  int n,m;
  cin >> n >> m;
  int r[m];
  int i;
  int ok=0;
  for(i=0;i<m;i++){
    cin >>r[i];
    if(r[i]==n || r[i]/100 == n || r[i]/1000 == n || r[i]/10%10==n || r[i]%10 == n){

  }else{
    cout << r[i] << endl;
    ok=1;
  }
}

  if(ok==0){
    cout << "None" << endl;
  }


  return 0;
}
