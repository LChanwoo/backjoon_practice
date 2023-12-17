#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int N;
string s;
pair<int, string> a[100001];

bool compare(pair<int, string> a, pair<int, string> b){
    if(a.first==b.first)
        return false;
    return a.first < b.first;
}

int main(){
    cin >> N;
    for (int i = 0; i < N;i++){
        cin >> a[i].first >> a[i].second;
    }
    stable_sort(a, a + N, compare);
    for (int i = 0; i < N;i++){
        cout << a[i].first << ' ' << a[i].second << '\n';
    }
}