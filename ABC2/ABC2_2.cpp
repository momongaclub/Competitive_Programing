#include <iostream>
using namespace std;
int main(void){
  char s[31];
  cin >> s;
  int i;
  for(i=0;s[i]!='\0';i++){
    if(s[i]=='a' || s[i]=='i' || s[i]=='u' || s[i]=='e' || s[i] == 'o'){
    }else{
      cout <<s[i];
    }
}
cout << endl;
  return 0;
}
