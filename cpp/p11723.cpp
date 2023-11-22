#include<iostream>
#include<string>
#include<set>
#include<bitset>
using namespace std;

bitset<21> bs;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n , x;
    cin >> n;
    string s;
    for(int i=0; i<n; i++){
        cin >> s;
        if(s == "add"){
            cin >> x;
            bs.set(x);
        }
        else if(s == "remove"){
            cin >> x;
            bs.reset(x);
        }
        else if(s == "check"){
            cin >> x;
            if(bs.test(x)){
                cout << 1 << '\n';
            }
            else{
                cout << 0 << '\n';
            }
        }
        else if(s == "toggle"){
            cin >> x;
            bs.flip(x);
        }
        else if(s == "all"){
            bs.set();
        }
        else if(s == "empty"){
            bs.reset();
        }
    }
}