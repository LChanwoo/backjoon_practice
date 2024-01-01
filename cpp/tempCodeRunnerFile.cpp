#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int n, a[500004], c[8001], sum, mode, mode_max = -1, median;
vector<int> v, mode_v;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int max = -4001, min = 4001;
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> a[i];
        sum += a[i];
        c[a[i] + 4000]++;
        if(max < a[i]) max = a[i];
        if(min > a[i]) min = a[i];
    }
    for (int i = 0; i < 8001;i++){
        if(c[i] > mode_max){
            mode_max = c[i];
            mode = i - 4000;
        }
    }
    for (int i = 0; i < 8001;i++){
        if(c[i] == mode_max){
            mode_v.push_back(i - 4000);
        }
    }
    sort(a, a + n);
    sort(mode_v.begin(), mode_v.end());
    if(mode_v.size() > 1) mode = mode_v[1];
    else mode = mode_v[0];
    median = a[n / 2];
    cout << fixed;
    cout.precision(0);
    cout << round((double)sum / n) << '\n';
    cout << median << '\n';
    cout << mode << '\n';
    cout << max - min << '\n';
    return 0;
}