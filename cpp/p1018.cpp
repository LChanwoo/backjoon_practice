#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<char>> wF ={
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'}
};
vector<vector<char>> bF ={
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'}
};

int check(vector<vector<char>> v,int x,int y){
    int wCnt = 0;
    int bCnt = 0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(v[i+x][j+y]!=wF[i][j]){
                wCnt++;
            }
            if(v[i+x][j+y]!=bF[i][j]){
                bCnt++;
            }
        }
    }
    return wCnt>bCnt?bCnt:wCnt;
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,M;
    cin >> N >> M;
    vector<vector<char>> v(N+1,vector<char>(M+1));
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> v[i][j];
        }
    }
    int min = 100000;
    for(int i=0;i<=N-8;i++){
        for(int j=0;j<=M-8;j++){
            int tmp = check(v,i,j);
            if(tmp<min){
                min = tmp;
            }
        }
    }
    cout << min << endl;
    return 0;
    
}

