#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int t, n, m, tmp;

bool check(int tmp, vector<int> &v1){
    int l=0, r=v1.size()-1;
    while(l<=r){
        long long mid = (l + r) / 2;
        if(v1[mid] == tmp) return true;
        else if(v1[mid] > tmp) r = mid - 1;
        else l = mid + 1;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>> t;
    while(t--){
        vector<int> v1, v2;
        cin >> n;
        for (int i = 0; i < n;i++){
            cin >> tmp;
            v1.push_back(tmp);
        }
        cin >> m;
        for (int i = 0; i < m;i++){
            cin >> tmp;
            v2.push_back(tmp);
        }
        sort(v1.begin(), v1.end());
        for(int i : v2){
            if(check(i,v1)) cout << "1"<<"\n";
            else cout << "0"<<"\n";
        }
    }
}