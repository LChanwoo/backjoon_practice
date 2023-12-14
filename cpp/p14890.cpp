#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,l,a[101][101],b[101][101],ans;

void dfs(int a[101][101]){
    for (int i = 0; i < n;i++){
        int cnt = 1;
        int j;
        for (j = 0; j < n-1;j++){
            if(a[i][j]==a[i][j+1]) cnt++;
            else if(a[i][j]+1==a[i][j+1] && cnt>=l) cnt = 1;
            else if(a[i][j]-1==a[i][j+1] && cnt>=0) cnt = -l + 1;
            else break;
        }
        if(j==n-1 && cnt>=0) ans++;
    }
}

int main(){
    cin>> n >> l;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
            b[j][i] = a[i][j];
        }
    }
    dfs(a);
    dfs(b);
    cout << ans;

}