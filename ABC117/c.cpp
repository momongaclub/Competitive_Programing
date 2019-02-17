#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> x(m);
    vector<int> diff(m-1);
    for(int i=0; i<m; i++){
        cin >> x[i];
    }

    if (n >= m){
        cout << 0 << endl;
        return 0;
    }

    sort(x.begin(), x.end());
    for(int i=0; i<m-1; i++){
        diff[i] = abs(x[i] - x[i+1]);
    }

    sort(diff.begin(), diff.end());
    reverse(diff.begin(), diff.end());
    diff.erase(diff.begin(), diff.begin() + n-1);

    int sum = 0;
    for(int i=0; i<m-n; i++){
        sum += diff[i];
    }
    cout << sum << endl;
    return 0;
}
