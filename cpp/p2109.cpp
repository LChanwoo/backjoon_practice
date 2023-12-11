#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<queue>
using namespace std;

int n, p, d, sum=0;
vector<pair<int, int>> v;
priority_queue<int,vector<int>,greater<int>> pq;
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> p >> d;
        v.push_back(make_pair(d, p));
    }
    sort(v.begin(), v.end());
    for (int i = 0;i<n;i++){
        pq.push(v[i].second);
        sum += v[i].second;
        if(pq.size()>v[i].first){
            sum -= pq.top();
            pq.pop();
        }
    }
    cout << sum;

}