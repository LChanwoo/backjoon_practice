#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n , min_cost = 2000000000;
int mp, mf, ms, mv;
int p[16], f[16], s[16], v[16], c[16];
int visited[16];
vector<int> vlist;

void dfs(int depth,int sum,int psum,int fsum,int ssum,int vsum){
    if(depth==n){
        return;
    }
    if(psum>=mp&&fsum>=mf&&ssum>=ms&&vsum>=mv){
        if(min_cost>sum){
            min_cost = sum;
            vlist.clear();
            for (int i = 0; i < n;i++){
                if(visited[i]==1)
                    vlist.push_back(i + 1);
            }
        }
        return;
    }
    for (int i = depth; i < n;i++){
        if(visited[i]==0){
            visited[i] = 1;
            dfs(depth + 1, sum + c[i], psum + p[i], fsum + f[i], ssum + s[i], vsum + v[i]);
            visited[i] = 0;
        }
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    cin >> mp >> mf >> ms >> mv;
    for (int i = 0; i < n;i++){
        cin >> p[i] >> f[i] >> s[i] >> v[i] >> c[i];
    }
    dfs(0, 0, 0, 0, 0, 0);
    if(min_cost==2000000000){
        cout << -1;
    }else{
        cout << min_cost << '\n';
        for (int i : vlist)
            cout << i << " ";
    }
}