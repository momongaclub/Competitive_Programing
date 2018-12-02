/*Kannondou*/
#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;

int main(void){
  //a,b,x,y,r,0,L
  double L;
  int a,b,r,o;
  double x,y;
  cin >> a >> b >> x >> y >> r >> o >> L;
  //cout << L*cos(o)+x <<' '<<L*sin(o)+y<< endl;
  p f;
  f=make_pair(0,0);
    cout << L*abs(cos(o)) <<' '<<L*abs(sin(o))<< endl;
    double cm=abs(cos(o))*abs(cos(o))+abs(sin(o))*abs(sin(o));
    cm = sqrt(cm);
    cout << cm*L << endl;
  while(L>0){
    L--;
    if(f.first==0){
      x+=cos(o);
    }else if(f.first==1){
      x-=cos(o);
    }

    if(f.second==0){
      y+=sin(o);
    }else if(f.second==1){
      y-=sin(o);
    }
    //double cm=abs(cos(o))*abs(cos(o))+abs(sin(o))*abs(sin(o));
    //cm = sqrt(cm);
    //cout << L << endl;
    //L-=cm;

    if(x+r>=a){
      if(f.first==0)f.first=1;
      else if(f.first==1)f.first=0;
    }else if(x-r<=0){
      if(f.first==0)f.first=1;
      else if(f.first==1)f.first=0;
    }else if(y+r>=b){
      if(f.second==0)f.second=1;
      else if(f.second==1)f.second=0;
    }else if(y-r<=0){
      if(f.second==0)f.second=1;
      else if(f.second==1)f.second=0;
    }
    cout << x << ' ' << y << endl;
    if(x==50 && y==50)cout << L << endl;
  }
  /*if(0<o && o<90)kaku=90-(90-o)*2;
  else if(90<o && o<180)kaku=180-(180-o)*2;
  else if(180<o && o<270)kaku=270-(270-o)*2;
  else if(270<o && o<360)kaku=360-(360-o)*2;
  int flag=0;
  for(int i=0;i<L;i++){
    if(flag == 0){
      x+=cos(o);
      y+=sin(o);
    }else if(flag==1){
      x-=cos(o);
      y+=sin(o);
    }else if(flag==2){
      x+=cos(o);
      y-=sin(o);
    }else if(flag==3){
      x-=cos(o);
      y-=sin(o);
    }

    if(0>=x+r && flag==1)flag=0;
    else if(0>=x+r && flag==3)flag=2;
    else if(x+r>=a && flag==0)flag=1;
    else if(x+r>=a && flag==2)flag=3;
    else if(0>=y+r && flag==)//o=
    else if(0>=y+r && flag==)
    //if(y+r>=b)//o=
    cout << x << ' ' << y << endl;
    //cout << cos(o) <<' ' << sin(o) << endl;
  }
  if(0==o)
  else if(0<o && o<90)
  else if(90==o)
  else if(90<o && o<180)
  else if(180==o)
  else if(180<o && o<270)
  else if(270==o)
  else if(270<o && o<360)
  */
  //100,100,50,50,2,90,288
  //50,50*/
  return 0;
}
