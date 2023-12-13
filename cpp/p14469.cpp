#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, arrive, duration, sum;
vector<pair<int, int>> v;

int main(){
    cin >> n;
    while(n--){
        cin >> arrive >> duration;
        v.push_back({arrive, duration});
    }   
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        if(sum < v[i].first)
            sum = v[i].first;
        sum += v[i].second;
    }
    cout << sum;
}