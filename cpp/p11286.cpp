#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

struct cmp{
    bool operator()(long long a, long long b){
        if(abs(a)==abs(b)){
            return a > b;
        }else{
            return abs(a) > abs(b);
        }
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    priority_queue<long long, vector<long long>, cmp> pq;
    cin >> N;
    for (int i = 0; i < N;i++){
        int a;
        cin >> a;
        if(a==0){
            if(pq.empty()){
                cout << 0 << '\n';
            }else{
                cout << pq.top() << '\n';
                pq.pop();
            }
        }else{
            pq.push(a);
        }
    }
    return 0;
}