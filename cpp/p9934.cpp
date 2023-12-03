#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;

int k;
int building[1024];
vector<int> v[11];

void makeTree(int n,int depth){
    if(depth == 0){
        v[0].push_back(building[(1<<k)/2-1]);
        return;
    }
    for (int i = n/2;i <= (1 << k) - 1;i += n){
        v[depth].push_back(building[i - 1]);
    }
    makeTree(2*n, depth - 1);

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> k;
    for (int i = 0; i < pow(2,k) - 1;i++){
        cin >> building[i];
    }   
    makeTree(2,k - 1);
    for (int i = 0; i < k;i++){
        for (int j = 0; j < v[i].size();j++){
            cout << v[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}