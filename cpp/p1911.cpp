#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n, l, x, y;
vector<pair<int, int>> a;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> l;
    for (int i = 0; i < n;i++){
        cin >> x >> y;
        a.push_back({x, y});
    }
    sort(a.begin(), a.end());
    int ans = 0;
    int last = 0;
    for (int i = 0; i < n;i++){
        if(last<a[i].first){
            last = a[i].first;
        }
        while(last<a[i].second){
            last += l;
            ans += 1;
        }
    }
    cout << ans << '\n';
    return 0;
}