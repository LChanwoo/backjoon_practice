#include<iostream>
#include<algorithm>
using namespace std;

int t, n;
long long dp[31][31];

long long find(int w, int h){
    if(w==0 && h==0) return 1;
    if(dp[w][h] != 0) return dp[w][h];
    if(w>0) dp[w][h] += find(w-1, h+1);
    if(h>0) dp[w][h] += find(w, h-1);
    return dp[w][h];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(cin >> t){
        if(t==0) break;
        cout << find(t,0) << '\n';
    }
    return 0;
}