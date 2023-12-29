#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N, a[1000001] = {0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for (int i = 0; i < N;i++){
        cin >> a[i];
    }
    sort(a, a + N);
    reverse(a, a + N);
    for (int i = 0; i < N;i++){
        cout << a[i] << '\n';
    }
    return 0;
}