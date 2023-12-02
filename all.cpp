#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n,ret,cnt;
vector<int> v;
int mod = 11;
void go(int sum, int idx)
{
    if(idx==n){
        ret = max(ret, sum%mod);
            cnt++;
        return;
    }
    go(sum + v[idx], idx + 1);
    go(sum, idx + 1);
}

int main()
{
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    go(0, 0);
    cout << ret << '\n';
    cout << cnt << '\n';
    return 0;
}