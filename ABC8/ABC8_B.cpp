#include <iostream>
#include <cstring>
using namespace std;

int main(void){
  int N;
  cin >> N;
  int i;
  int ans,max=-100;
  int count[N];
  char str[N][51];
  for(i=0;i<N;i++){
    cin >>str[i];
    count[i]=0;
  }
int j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(strcmp(str[i],str[j]) == 0)count[i]++;
    }
  }
  for(i=0;i<N;i++){
    if(max<count[i]){
      max=count[i];
      ans=i;
    }
  }
  cout << str[ans] << endl;
  return 0;
}
