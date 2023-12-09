#include<iostream>  
#include<vector>
#include<algorithm>
using namespace std;

int N, M, tmp;
int visited[8] = {0};
vector<int> v, ans;
void dfs(int start, int depth)
{
    if(depth == M){
        for (int i = 0; i < M;i++){
            cout << ans[i] << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = 0; i < N;i++){
        ans.push_back(v[i]);
        dfs(i, depth+1);
        ans.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for (int i = 0; i < N;i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    v.erase(unique(v.begin(), v.end()), v.end());
    sort(v.begin(), v.end());
    dfs(0, 0);
}