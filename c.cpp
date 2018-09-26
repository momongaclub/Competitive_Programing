#include <iostream>

using namespace std;

int main(void){
int N,x;
cin >> N >> x;
int i;
int a[N];
int count=0;
for(i=0;i<N;i++){
  cin >> a[i];
}
int mi;
for(i=0;i<N-1;i++){
  while(a[i]+a[i+1]>x){
    mi=a[i]+a[i+1]-x;
  if(a[i+1]!=0){
      if(a[i+1]-mi<0){
        a[i+1]=0;
        mi=mi-a[i+1];
        count+=a[i+1];
    }else{
      a[i+1]=a[i+1]-mi;
      count+=mi;
    }
  }else{
    count +=mi;
  }

    }
  }
cout << count <<endl;
  return 0;
}
