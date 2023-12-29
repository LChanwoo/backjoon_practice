#include<iostream>
#include<map>
using namespace std;

int N, M;
long long temp;
map<long long, int> m;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for (int i = 0; i < N;i++){
        cin >> temp;
        m[temp]=1;
    }
    cin >> M;
    for (int i = 0; i < M;i++){
        cin >> temp;
        cout << m[temp] << '\n';
    }
    return 0;
}