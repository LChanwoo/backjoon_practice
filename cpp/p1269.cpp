#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<map>
using namespace std;

int N, M;
int a[200001] = {0};
int b[200001] = {0};
map<int, int> m1, m2;

int AmB(){
    int cnt = 0;
    for (int i = 1; i <= N;i++){
        if(m2[a[i]]==0) cnt++;
    }
    return cnt;
}
int BmA(){
    int cnt = 0;
    for (int i = 1; i <= M;i++){
        if(m1[b[i]]==0) cnt++;
    }
    return cnt;
}

int main(){
    cin >> N >> M;
    for (int i = 1; i <= N;i++){
        cin >> a[i];
        m1[a[i]]++;
    }
    for (int i = 1; i <= M;i++){
        cin >> b[i];
        m2[b[i]]++;
    }
    cout << AmB() + BmA();
    return 0;
}