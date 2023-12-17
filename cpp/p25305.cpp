#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int N, k, x;
    cin >> N >> k;
    vector<int> a(N);
    for (int i = 0; i < N;i++) cin >> a[i];
    sort(a.begin(), a.end(),greater<int>());
    cout << a[k - 1];
    return 0;
}