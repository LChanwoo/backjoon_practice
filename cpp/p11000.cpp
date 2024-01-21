#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

int n, tmp1, tmp2, ans = 0;
vector<pair<int, int> > v;
priority_queue< int, vector<int>, greater<int> > pq;
pair<int, int> a[200001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> tmp1 >> tmp2;
        v.push_back({tmp1, tmp2});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n;i++){
        pq.push(v[i].second);
        if(pq.top() <= v[i].first) pq.pop();
    }
    cout << pq.size() << '\n';
    return 0;
}