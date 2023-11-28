#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    int prefix[1025][1025]={0};
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            cin >> prefix[i][j];
            prefix[i][j] += prefix[i][j - 1];
        }
    }
    for(int i=0;i<m;i++){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int ans = 0;
        for (int i = x1; i <= x2;i++){
            ans += prefix[i][y2] - prefix[i][y1 - 1];
        }
        cout << ans << '\n';
    }
    return 0;
}