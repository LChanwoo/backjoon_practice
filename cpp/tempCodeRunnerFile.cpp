#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int prefix[250001];
int xday[250001];
int main(){
    int n, x;
    cin >> n >> x;
    for (int i = 1;i<=n;i++){
        cin >> prefix[i];
        prefix[i] += prefix[i - 1];
        if(i>=x){
            xday[i] = prefix[i] - prefix[i - x];
        }
    }   
    int max = *max_element(xday, xday + n);
    int cnt = count(xday, xday + n, max);
    if(max==0){
        cout << "SAD\n";
        return 0;
    }
    cout << max << '\n';
    cout << cnt << '\n';
    return 0;
}