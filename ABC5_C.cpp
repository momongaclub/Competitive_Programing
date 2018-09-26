#include <iostream>

using namespace std;

int main(void){
  bool b1=true;
  int T,N;
  cin >> T >> N;
  int A[N];
  int i;
  for (i=0;i<N;i++){
    cin >> A[i];
  }
  int M;
  cin >> M;
  int B[M];
  for(i=0;i<M;i++){
    cin >> B[i];
  }

  if(N<M){
    cout << "no" << endl;
  }else if(N>M){
int j;
bool C[M];
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
          if(B[i]-A[j]<=T){
            C[j]=true;
          }
        }
    }
    if(b1==false){
      cout << "no" << endl;
    }else{
      cout << "yes" << endl;
    }

  }else if(N==M){

    for(i=0;i<M;i++){
      if(B[i]-A[i]<=T && A[i]<B[i]){

      }else{
        b1=false;
      }
    }
    if(b1==false){
      cout << "no" << endl;
    }else{
      cout << "yes" << endl;
    }

  }

  return 0;
}
