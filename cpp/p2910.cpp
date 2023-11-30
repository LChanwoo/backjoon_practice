#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int n, c, a,tmp;
vector<int> v;
map<int, int> m;
map<int, int> m2;

int main(){
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
        m[a]++;
        if(!m2[a]){
            m2[a] = i+1;
        }

    }
    sort(v.begin(), v.end(), [](int a, int b){
        if(m[a]==m[b]){
            return m2[a] < m2[b];
        }
        return m[a] > m[b];
    });
    for(int i=0;i<n;i++){
        cout << v[i]<< " ";
    }
    return 0;
}
