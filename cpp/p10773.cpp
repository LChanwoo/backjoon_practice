#include<iostream>
#include<stack>
using namespace std;

int k, tmp;
stack<int> s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> k;
    for(int i=0;i<k;i++){
        cin >> tmp;
        if(tmp==0){
            s.pop();
        }else{
            s.push(tmp);
        }
    }
    long long sum = 0;
    while(!s.empty()){
        sum += s.top();
        s.pop();
    }
    cout << sum;
}