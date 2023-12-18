#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int N, x;
map<int, int> m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N;i++){
        cin >> x;
        m[x]++;
    } 
    for (int i = 0; i <= 10000;i++){
        if(m[i]){
            for (int j = 0; j < m[i];j++) cout << i << '\n';
        }
    } 
}