#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
int a[1000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    vector<int> d;
    for (int i = 0; i < n;i++){
        if(i==0){
            d.push_back(a[i]);
        }else{
            if(d.back()<a[i]){
                d.push_back(a[i]);
            }else{
                auto it = lower_bound(d.begin(), d.end(), a[i]);
                *it = a[i];
            }
        }
    }
    cout << d.size() << '\n';

    for(int i : d)
        cout << i << " ";


    return 0;
}