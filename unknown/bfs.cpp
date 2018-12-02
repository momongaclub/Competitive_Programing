#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <sstream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cctype>
#include <map>
#include <cstring>
#include <typeinfo>
#include <utility>
#include <queue>
//#define REP(i,n) for(int i = 0;i < n ;i++)
//#define FOR(i,m,n) for(int i= m ;i<n;i++)
#define PI acos(-1);
//#define max_n 200
//#define max_w pow(10,9)
//#define max pow(10,9)+7
#define fi first;
#define se second;
using namespace std;
bool field[52][52];
int arr[52][52];
typedef pair<int,int> P;
queue<P>q;
P goal;

int bfs(){
  while(!q.empty()){
    pair<int,int> now = q.front();
    q.pop();
    int x = now.fi;
    int y = now.se;
    if(now==goal)return arr[x][y];
    int cost =arr[x][y]+1;

    if(field[x+1][y]){
      arr[x+1][y]=cost;
      field[x+1][y]=false;
      q.push(make_pair(x+1,y));
    }

    if(field[x-1][y]){
      arr[x-1][y]=cost;
      field[x-1][y]=false;
      q.push(make_pair(x-1,y));
    }

    if(field[x][y+1]){
      arr[x][y+1]=cost;
      field[x][y+1]=false;
      q.push(make_pair(x,y+1));
    }

    if(field[x][y-1]){
      arr[x][y-1]=cost;
      field[x][y-1]=false;
      q.push(make_pair(x,y-1));
    }

  }
  return 0;
}


int main(void){
  int r,c;
  cin >> r >> c;
  int x,y;
  cin >> x >> y;
  pair<int,int> start=make_pair(x,y);
  cin >> x >> y;
  goal=make_pair(x,y);
  for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){
      char a;
      cin >> a;
      field[i][j]=(a=='.');
    }
  }
  q.push(start);
  cout << bfs() << endl;
  return 0;
}
