#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int N, M;
int prefix[100001]={0};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for (int i = 1; i <= N;i++){
        cin >> prefix[i];
        prefix[i] += prefix[i - 1];
    }
    for (int i = 0; i < M;i++){
        int a, b;
        cin >> a >> b;
        cout << prefix[b] - prefix[a - 1] << '\n';
    }
    return 0;
}