#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
char a[20];
int ans = -2147483647;

int calc(int x, int y, char op){
    if(op=='+'){
        return x + y;
    }
    else if(op=='-'){
        return x - y;
    }
    else if(op=='*'){
        return x * y;
    }
    return 0;
}

void go(int idx, int sum){
    cout << idx <<" ::: "<<sum << '\n';
    if(idx>=n){
        ans = max(ans, sum);
        return;
    }
    char op = idx == 0 ? '+' : a[idx - 1];
    if(idx+2<n){
        int next = calc(a[idx] - '0', a[idx + 2] - '0', a[idx + 1]);
        go(idx + 4, calc(sum, next, op));
    }
    go(idx + 2, calc(sum, a[idx] - '0', op));
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    go(0, 0);
    cout << ans << '\n';
    return 0;
}