#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    long long x=666;
    int cnt = 0;
    while(true){
        string tmp = to_string(x);
        int cnttmp =0;
        for(int i =0; i<tmp.length()-2;i++){
            if(tmp[i]=='6' &&tmp[i+1]=='6' &&tmp[i+2]=='6' ){
                cnt++;
                break;
            }
        }
        if(cnt==N){
            cout << x ;
            return 0;
        }
        x++;
    }
}