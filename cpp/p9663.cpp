#include<iostream>

using namespace std;

int N;
int cnt = 0;
int col[15];

bool isPossible(int level){
    for(int i=0; i<level; i++){
        if(col[i] == col[level] || abs(col[level] - col[i]) == level - i){
            return false;
        }
    }
    return true;
}

void dfs(int level){
    if(level == N){
        cnt++;
        return;
    }
    for(int i=0; i<N; i++){
        col[level] = i;
        if(isPossible(level)){
            dfs(level+1);
        }
    }
}

int main(){
    
    cin >> N;
    dfs(0);
    cout << cnt;
}
