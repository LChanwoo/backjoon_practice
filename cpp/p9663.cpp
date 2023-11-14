#include<iostream>

using namespace std;

//N-Queen 문제
//N*N 체스판에 N개의 퀸을 서로 공격할 수 없게 놓는 문제
//퀸은 상하좌우, 대각선으로 이동할 수 있다.
//퀸은 같은 행, 열에 놓을 수 없다.
//퀸은 같은 대각선에 놓을 수 없다.
//N이 주어졌을 때, 퀸을 놓는 방법의 수를 구하는 프로그램을 작성하시오.
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
