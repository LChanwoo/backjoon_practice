#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long t, n, m, tmp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    while(t--){
        vector<int> a,b;
        cin>>n>>m;
        long long ans = 0, cnt = 0,mn = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            a.push_back(tmp);
        }
        for (int i = 0; i < m;i++)
        {
            cin >> tmp;
            b.push_back(tmp);
            mn = min(mn, tmp);
        }
        sort(a.begin(), a.end(),greater<int>());
        sort(b.begin(), b.end());
        for(int i = 0;i<n;i++){
            if(a[i]<=mn) break;
            auto it = lower_bound(b.begin(), b.end(), a[i]);
            ans += it - b.begin();
        }
        cout << ans << '\n';
    }
}