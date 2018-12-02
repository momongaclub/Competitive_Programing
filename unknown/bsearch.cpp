/*簡単な2分木*/
#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;
#define le 1000000007;

int target;
int test[7] = {3,7,8,9,17,22,30};

int bsearch(int start,int end){
  int ave = (start+end)/2;//最初と最後の位置を足して2で割り真ん中をだす。この際偶数であっても結局奇数に収束するため別に考慮しない
  if(test[ave]==target)return ave;//位置とtargetが同じならその位置を返す。

  if(test[ave]>target)end=ave;//数字が大きければエンドをその位置に
  else if(test[ave]<target)start=ave;//数字が小さければスタートをその位置に
  return bsearch(start,end);//必ず処理が終わるため再帰する
}

int main(void){
  cin >> target;
  cout << bsearch(0,7) << endl;//ページ数を入れて開始
  return 0;
}
//大きな配列であるほど効果的である。
