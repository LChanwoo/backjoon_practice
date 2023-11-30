#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int T,N;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> T;
    while(T--){
        cin >> N;
        int div2 = 0;
        int div5 = 0;
        for(int i = 2; i <= N;i*=2){
            div2 += N / i;
        }
        for(int i = 5; i <= N;i*=5){
            div5 += N / i;
        }
        cout << min(div2, div5) << '\n';
    }
    return 0;
}
