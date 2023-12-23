#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

int n, m, h, a, b, ans =1e9;
int ladder[31][31]={0};

bool LadderGame(){
    for(int i=1;i<=n;i++){
        int cur = i, depth=1;
        while(depth<=h){
            if(cur < n &&ladder[depth][cur]==1) cur++;
            else if(cur > 1 && ladder[depth][cur-1]==1) cur--;
            depth++;
        }
        if(cur!=i) return false;
    }
    return true;
}
void permutation(int depth,int here){
    if(depth>3 || depth >= ans) return;
    if(LadderGame()){
        ans = min(ans, depth);
        return;
    }
    for (int i = here; i <= h;i++){
        for (int j = 1; j < n;j++){
            if(ladder[i][j]==1 || ladder[i][j-1]==1 || ladder[i][j+1]==1) continue;
            ladder[i][j] = 1;
            permutation(depth + 1, i);
            ladder[i][j] = 0;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m >> h;
    memset(ladder, 0, sizeof(ladder));
    for (int i = 0; i < m;i++){
        cin >> a >> b;
        ladder[a][b] = 1;
    }
    permutation(0, 1);
    if(ans==1e9) cout << -1 << '\n';
    else cout << ans << '\n';
    return 0;
}