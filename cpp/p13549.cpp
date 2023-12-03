#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int n, k, cnt;
int visited[100001];
int from[100001];
queue<int> q;

void bfs(int n, int k){
    visited[n] = 1;
    from[n] = n;
    q.push(n);
    while(q.size()){
        int x = q.front();
        q.pop();
        if(x == k){
            vector<int> v;
            while(x != n){
                v.push_back(x);
                x = from[x];
            }
            v.push_back(n);
            reverse(v.begin(), v.end());
            for (int i = 0; i<v.size()-1; i++)
            {
                if(v[i+1]-v[i] != v[i+1]/2) cnt++;
            }
            cout << cnt;
            return;
        }
        for(int next : {x-1,x+1,2*x}){
            if(next < 0 || next > 100000)
                continue;
            if(!visited[next]){
                visited[next] = visited[x] + 1;
                from[next] = x;
                q.push(next);
            }
        }
    }
}

int main()
{
    cin >> n>> k;
    bfs(n, k);
    return 0;
}