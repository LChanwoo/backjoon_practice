#include<iostream>
#include<algorithm>
using namespace std;

int a[5000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, K;
    cin >> N >> K;
    for (int i = 0; i < N;i++){
        cin >> a[i];
    }
    sort(a, a + N);
    cout << a[K - 1];
    return 0;
}
