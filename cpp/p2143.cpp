#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m;i++){
        cin >> b[i];
    }
    vector<int> first;
    for (int i = 0; i < n;i++){
        int sum = 0;
        for (int j = i; j < n;j++){
            sum += a[j];
            first.push_back(sum);
        }
    }
    vector<int> second;
    for (int i = 0; i < m;i++){
        int sum = 0;
        for (int j = i; j < m;j++){
            sum += b[j];
            second.push_back(sum);
        }
    }
    sort(first.begin(), first.end());
    sort(second.begin(), second.end());
    long long ans = 0;
    for (int i = 0; i < first.size();i++){
        int x = t - first[i];
        auto p = equal_range(second.begin(), second.end(), x);
        ans += p.second - p.first;
    }
    cout << ans << '\n';
    return 0;
}