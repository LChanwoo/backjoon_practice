#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long n, m, a,mid, cnt,l = 1, r = 60000000004, ans=0;
long long v[10001];

bool check(long long mid){
    cnt = m;
    for (int i = 0; i < m;i++) cnt += mid / v[i];
    return cnt >= n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < m;i++){
        cin >> v[i];
    }
    if(n <= m){
        cout << n; return 0;
    } 
    while(l<=r){
        mid = (l + r) / 2;
        if(check(mid)){
            r = mid - 1;
            ans = mid;
        }
        else{
            l = mid + 1;
        }
    }
    cnt = m;
    for (int i = 0; i < m;i++){
        cnt += (ans - 1) / v[i];
    }
    for(int i=0;i<m;i++){
        if(ans%v[i]==0) cnt++;
        if(cnt==n){
            cout << i+1;
            return 0;
        }
    }
    return 0;
}
