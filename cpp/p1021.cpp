#include<iostream>
#include<deque>

using namespace std;

int main(){
    int n, m, tmp, cnt = 0;
    deque<int> dq;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        dq.push_back(i);
    }
    for(int i=0;i<m;i++){
        cin >> tmp;
        int idx = 0;
        for(int j=0; j<dq.size();j++){
            if(dq[j]==tmp){
                idx=j;
                break;
            }
        }
        if(idx<=dq.size()/2){
            while(dq.front()!=tmp){
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
        }
        else{
            while(dq.front()!=tmp){
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
        }
        dq.pop_front();
    }
    cout << cnt;
    return 0;
}