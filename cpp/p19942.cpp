#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int n ;
int min_cost=2000000000;
int mp, mf, ms, mv, cost, sum;
int tp, tf, ts, tv;
int p[16], f[16], s[16], v[16], c[16];
vector<int> vlist;
map<int, vector<vector<int>>> mins;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    cin >> mp >> mf >> ms >> mv;
    for (int i = 0; i < n;i++){
        cin >> p[i] >> f[i] >> s[i] >> v[i] >> c[i];
    }
    for (int i = 1;i<(1<<n);i++){
        tp=tf=ts=tv=cost=0;
        vlist.clear();
        for (int j = 0; j < n;j++){
            if(i&(1<<j)){
                tp += p[j];
                tf += f[j];
                ts += s[j];
                tv += v[j];
                cost += c[j];
                vlist.push_back(j + 1);
            }
        }
        if(tp>=mp && tf>=mf && ts>=ms && tv>=mv){
            if(min_cost>=cost){
                min_cost = cost;
                mins[cost].push_back(vlist);
            }
        }
    }
    if(min_cost==2000000000){
        cout << -1;
    }else{
        sort(mins[min_cost].begin(), mins[min_cost].end());
        cout << min_cost << '\n';
        for (int i = 0; i < mins[min_cost][0].size();i++){
            cout << mins[min_cost][0][i] << ' ';
        }
    }

}