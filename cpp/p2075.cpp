#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,x;
    priority_queue<int,vector<int>,greater<int>> pq;
    cin >> N;
    for (int i = 0; i < N;i++){
        for(int j = 0; j < N;j++){
            cin >> x;
            pq.push(x);
            if(pq.size() > N) pq.pop();
        }
    }
    cout << pq.top();
    return 0;
}