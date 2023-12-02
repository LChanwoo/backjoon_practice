#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>
using namespace std;

int r,c,x,y,jx,jy,ret;
char a[1001][1001];
const int dy[4]={-1,0,1,0};
const int dx[4]={0,1,0,-1};
queue<pair<int,int>> jq;
queue<pair<int,int>> fq;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
            if(a[i][j]=='J'){
                jq.push({i,j});
            }
            if(a[i][j]=='F'){
                fq.push({i,j});
            }
        }
    }
    while(!jq.empty()){
        int qsize=fq.size();
        for(int i=0;i<qsize;i++){
            int fy=fq.front().first;
            int fx=fq.front().second;
            fq.pop();
            for(int i=0;i<4;i++){
                int ny=fy+dy[i];
                int nx=fx+dx[i];
                if(ny<0||ny>=r||nx<0||nx>=c)
                    continue;
                if(a[ny][nx]=='#'||a[ny][nx]=='F')
                    continue;
                a[ny][nx]='F';
                fq.push({ny,nx});
            }
        }
        int jsize=jq.size();
        for(int i=0;i<jsize;i++){
            int jy=jq.front().first;
            int jx=jq.front().second;
            jq.pop();
            for(int i=0;i<4;i++){
                int ny=jy+dy[i];
                int nx=jx+dx[i];
                if(ny<0||ny>=r||nx<0||nx>=c){
                    cout<<ret+1<<'\n';
                    return 0;
                }
                if(a[ny][nx]=='#'||a[ny][nx]=='F'||a[ny][nx]=='J')
                    continue;
                a[ny][nx]='J';
                jq.push({ny,nx});
            }
        }
        ret++;
    }
    cout<<"IMPOSSIBLE"<<'\n';
    return 0;

}
