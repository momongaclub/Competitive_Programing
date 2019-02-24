#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

int euclidean_algorithm(int a, int b){
    int r;
    int answer = 1e9;
    if (b == 0){
        return a;
    }
    if (a >= b){
        r = a%b;
        answer = euclidean_algorithm(b, r);
    }
    return answer;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int answer = 1e9;
    int hp = 1e9;
    for(int i=0; i<n-1; i++){
        hp = euclidean_algorithm(a[i+1], a[i]);
        if (answer > hp){
            answer = hp;
        }
    }
    cout << answer << endl;
    return 0;
}
