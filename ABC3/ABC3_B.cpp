
#include <iostream>
#include <cstring>
#define z 10
using namespace std;

int main(void){
  char s[z];
  char t[z];
  cin >> s >> t;
  int i;
  int ok=0;
  for(i=0;i<strlen(s);i++){
    if(s[i]!=t[i]){

      if(s[i]=='@'){
        if(t[i]=='a' || t[i]=='t' || t[i] == 'c' || t[i]=='o' || t[i]=='d' || t[i]=='e' || t[i]=='r' || t[i]=='@'){

        }else{
          ok=1;
        }
      }else if(t[i]=='@'){
        if(s[i]=='a' || s[i]=='t' || s[i] == 'c' || s[i]=='o' || s[i]=='d' || s[i]=='e' || s[i]=='r' || s[i]=='@'){

        }else{
          ok=1;
        }
      }else{
        ok=1;
      }
    }
  }
  if(ok==0){
    cout << "You can win" << endl;
  }else{
    cout << "You will lose" << endl;
  }
  return 0;
}
