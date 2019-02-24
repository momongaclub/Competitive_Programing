#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

int define_length(int sum){

    return 0;
}

int main(){
    // まず桁数を重視, 次に数値の大きさかな
    int n;
    int length;
    cin >> n >> length;
    vector<int> number(length);
    int sum = 0;
    for (int i=0;i<length;i++){
        cin >> number[i];
        sum += number[i];
    }
    define_length(sum);
    return 0;
}
