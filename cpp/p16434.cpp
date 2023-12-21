#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long hp_max, atk, n, ans=1e18;

int t;
long long a, h;

struct room{
    int t;
    long long atk, hp;
};

vector<room> rooms;

int check(long long mid){
    long long hp = mid;
    long long t_atk = atk;
    for (int i = 0; i < n;i++){
        if(rooms[i].t==1){
            long long atk_cnt = rooms[i].hp / t_atk;
            if(rooms[i].hp % t_atk) atk_cnt++;
            hp -= (atk_cnt-1) * rooms[i].atk;
            if(hp<=0) return 0;

        }else{
            hp += rooms[i].hp;
            if(hp>mid) hp = mid;
            t_atk += rooms[i].atk;
        }
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> atk;
    for(int i = 0;i<n;i++){
        cin >> t >> a >> h;
        rooms.push_back({t, a, h});
    }   
    long long l = 1, r = 1e18;
    while(l<=r){
        long long mid = (l + r) / 2;
        if(check(mid)){
            ans = mid;
            r = mid-1;
        }
        else l = mid + 1;
    }
    cout << ans;
}