#include<iostream>
#include<map>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> m;
    for(int i=0; i<n; i++){
        string name, state;
        cin >> name >> state;
        if(state == "enter"){
            m[name] = 1;
        }
        else{
            m[name] = 0;
        }
    }
    
    for(auto iter = m.rbegin(); iter != m.rend(); iter++){
        if(iter->second == 1){
            cout << iter->first << '\n';
        }
    }
}