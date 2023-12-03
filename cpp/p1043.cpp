#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int n, m, h, tmp, ret;
int parent[51];
vector<int> know;
vector<int> party[51];  

int find(int x){
    if(parent[x]==x) return x;
    return parent[x] = find(parent[x]);
}

void merge(int x, int y){
    x = find(x);
    y = find(y);
    parent[y] = x;
}

bool isKnow(int x,int y){
    x = find(x);
    y = find(y);
    if(x==y) return true;
    return false;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> h;
    for (int i = 0; i < h; i++)
    {
        cin >> tmp;
        know.push_back(tmp);
    }
    for(int i = 0; i < m;i++)
    {
        cin >> h;
        for (int j = 0;j<h;j++){
            cin >> tmp;
            party[i].push_back(tmp);
        }
    }
    ret=m;
    for (int i = 1; i <= n;i++) parent[i] = i;
    for (int i = 0; i < m;i++){
        for (int j = 1; j < party[i].size();j++){
            merge(party[i][0], party[i][j]);
        }
    }
    for (int i = 0; i < m;i++){
        bool flag = false;
        for(int j=0;j<party[i].size();j++){
            if(flag) break;
            for(int k=0;k<know.size();k++){
                if(isKnow(party[i][j], know[k])){
                    flag = true;
                    break;
                }
            }
        }
        if(flag) ret--;
    }
    cout << ret;
    return 0;
}