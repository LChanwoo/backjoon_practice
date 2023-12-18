#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

int n, x, y;
int prev_x, prev_y;
long long ans;
vector<pair<int, int>> a;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        a.push_back({x, y});
    }
    sort(a.begin(), a.end());
    prev_x = a[0].first, prev_y = a[0].second;
    ans = prev_y - prev_x;
    for (int i = 1; i < n; i++)
    {
        if(a[i].first < prev_y){
            if(a[i].second < prev_y) continue;
            else a[i].first = prev_y;
        } 
        ans += a[i].second - a[i].first;
        prev_x = a[i].first, prev_y = a[i].second;
    }
    cout << ans;
}