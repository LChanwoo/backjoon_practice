#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int a[5][5];
set<int> s;
const int dy[4]={-1,0,1,0};
const int dx[4]={0,1,0,-1};

void go(int y, int x, int num, int cnt){
    if(cnt==6){
        s.insert(num);
        return;
    }
    for(int i=0;i<4;i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny>=0 && ny<5 && nx>=0 && nx<5){
            go(ny, nx, num * 10 + a[ny][nx], cnt + 1);
        }
    }
}

int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            go(i, j, a[i][j], 1);
        }
    }
    cout << s.size();
    return 0;
}