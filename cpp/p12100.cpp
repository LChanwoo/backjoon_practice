#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
int s[21][21];
int ans = 0;

int find_max(vector<vector<int>> v){
    int max = 0;
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n/2;j++){
            if(v[i][j] > max)
                max = v[i][j];
        }
    }
    return max;
}

void dfs(int depth, int start, vector<vector<int>> v){
    if(depth == 6){
        int max = find_max(v);
        if(ans > max)
            ans = max;
        return;
    }
    vector<vector<int>> temp;
    memcpy(temp, v, sizeof(v));
    for (int i = )
        return;
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> s[i][j];
        }
    }
}
