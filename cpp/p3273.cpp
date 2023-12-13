#include<iostream>  
#include<vector>
#include<algorithm>
using namespace std;

int n, x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    cin >> x;
    sort(a.begin(), a.end());
    int start = 0, end = n - 1, cnt = 0;
    while (start < end){
        if (a[start] + a[end] == x){
            cnt++;
            end--;
        }
        else if (a[start] + a[end] > x)
            end--;
        else
            start++;
    }
    cout << cnt;
    return 0;
}