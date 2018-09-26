#include <iostream>

using namespace std;

int main(void){
int N;
cin >> N;
int T[N];
int i;
int min=101;
for(i=0;i<N;i++){
  cin >> T[i];
}
for(i=0;i<N;i++){
  if(min>T[i]){
    min=T[i];
  }
}
cout << min << endl;

  return 0;
}
