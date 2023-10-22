#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<pair<int,int>> v;
    for(int i=0;i<N;i++){
        int x,y;
        cin >> x >> y;
        v.push_back(make_pair(y,x));
    }
    sort(v.begin(),v.end());
    int cnt=0, end=0;
    for(int i=0;i<N;i++){
        if(v[i].second>=end){
            end=v[i].first;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}