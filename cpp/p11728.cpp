#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, m,p1,p2,tmp, c[2000001];
vector<int> a, b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> tmp;
        a.push_back(tmp);
    }
    for(int i=0;i<m;i++){
        cin >> tmp;
        b.push_back(tmp);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    p1 = 0;
    p2 = 0;
    while(p1<n&&p2<m){
        if(a[p1]<=b[p2]){
            c[p1 + p2] = a[p1];
            p1++;
        }else{
            c[p1 + p2] = b[p2];
            p2++;
        }
    }
    while(p1<n){
        c[p1 + p2] = a[p1];
        p1++;
    }
    while(p2<m){
        c[p1 + p2] = b[p2];
        p2++;
    }
    for(int i=0;i<n+m;i++){
        cout << c[i] << " ";
    }
    cout << '\n';
    return 0;
}