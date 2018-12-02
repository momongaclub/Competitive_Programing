#include <iostream>
#include <cmath>
#include <cctype>
#include <string>
#include <cstdio>
#include <stdio.h>
using namespace std;
int main(void){
  int N,T,M;
  cin >> N  >> M >> T;

  string a[N];
  int p[N];
  int i,j,k;
  int tmp;
  string tmp2;


  for(i=0;i<N;i++){
    cin >> a[i] >> p[i];
  }

  for(i=0;i<N-1;i++){
    for(j=N-1;j>i;j--){
      if(p[j-1]<p[j]){
        tmp=p[j];
        tmp2=a[j];
        p[j]=p[j-1];
        a[j]=a[j-1];
        p[j-1]=tmp;
        a[j-1]=tmp2;
      }
    }
  }

for(i=0;i<T;i++){
  //cout <<  a[i] <<' '<<p[i] << ' ';
}

int d[M],x[M];
string w[M];

for(i=0;i<M;i++){
  cin >> d[i] >> w[i] >> x[i];
}

for(i=0;i<M-2;i++){
  for(j=i+1;j<M-1;j++){
    if(w[i]==w[j]){
      x[i]+=x[j];
      x[j]=0;
    }
  }
}



for(i=0;i<M-1;i++){
  for(j=M-1;j>i;j--){
    if(x[j-1]<x[j]){
      tmp=x[j];
      tmp2=w[j];
      x[j]=x[j-1];
      w[j]=w[j-1];
      x[j-1]=tmp;
      w[j-1]=tmp2;
    }
  }
}
string kekka[T];
for(i=0;i<T;i++){
  for(j=0;j<T;j++){
    if(i==j && w[i] == a[j])kekka[i]="same";
  else if(i>j && w[i] == a[j])kekka[i]="up";
  else if(i<j && w[i] == a[j])kekka[i]="down";
  }
}
for(i=0;i<T;i++){
  if(kekka[i]!="same" && kekka[i]!="up" && kekka[i]!="down"){
    kekka[i]="new";
  }
}

for(i=0;i<T;i++){
  cout  << w[i] << ' ' << x[i] << ' '<< kekka[i] << endl;
}

    return 0;
}
