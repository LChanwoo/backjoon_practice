#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int a[100001] = {0};
    for (int i = 1; i <= n;i++){
        cin >> a[i];
        a[i] += a[i - 1];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int start, end;
        cin >> start >> end;
        cout << a[end] - a[start - 1] << '\n';
    }
    
}