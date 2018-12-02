 #include <iostream>
 using namespace std;

 int main(void){
   string str;
   cin >> str;
   int cnt=0;
   for(int i=0;i<1000;i++){
     if(str[i]==';')cnt++;
   }
   cout << cnt << endl;


   return 0;
 }
