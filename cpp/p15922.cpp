#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, x, y ,prev_x, prev_y;    
vector<pair<int, int>> a;
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        a.push_back({x, y});
    }
    int ans = a[0].second - a[0].first;
    sort(a.begin(), a.end());
    prev_x = a[0].first, prev_y = a[0].second;
    for (int i = 1;i<n;i++)
    {
        if(a[i].first < prev_y){
            if(a[i].second < prev_y) continue;
            else a[i].first = prev_y;
        }
        ans += a[i].second - a[i].first;
        prev_x = a[i].first, prev_y = a[i].second;
    }
    cout<<ans;
    return 0;
}