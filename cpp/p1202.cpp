#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int n, k, m, v, c;
long long ans;
vector<pair<int,int>> jewel;
vector<int> bag;
priority_queue<long long> pq;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> m >> v;
        jewel.push_back({m, v});
    }
    for(int i = 0; i < k; i++){
        cin >> c;
        bag.push_back(c);
    }
    sort(jewel.begin(), jewel.end());
    sort(bag.begin(), bag.end());
    int j = 0;
    for (int i = 0; i < k; i++)
    {
        while(j < n && jewel[j].first <= bag[i])
        {
            pq.push(jewel[j++].second);
        }
        if(!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
    }
    cout << ans;
    return 0;
}
