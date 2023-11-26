#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

map<string, int> name;
map<int, string> number;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    cin >> N >> M;  
    string s[100001];
    string tmp;
    for (int i = 1; i <= N; i++)
    {
        cin >> s[i];
        name[s[i]] = i;
        number[i] = s[i];
    }
    for(int i = 0; i < M;i++){
        cin >> tmp;
        if(isdigit(tmp[0])){
            cout << number[stoi(tmp)] << '\n';
        }else{
            cout << name[tmp] << '\n';
        }
    }
    return 0;
}