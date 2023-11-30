#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int N, t,sum1,sum2 , A,B;
string cur, prevs;

string print(int a){
    string s = to_string(a);
    if(s.length()==1)
        s = '0' + s;
    return s;
}

int time_to_int(string s){
    int h = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3, 2));
    return h * 60 + m;
}

int addsum(string cur){
    return time_to_int(cur) - time_to_int(prevs);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;

    for (int i = 0; i < N;i++){
        cin >> t >> cur;
        if(A>B)
            sum1 += addsum(cur);
        else if(A<B)
            sum2 += addsum(cur);
        t == 1 ? A++ : B++;
        prevs = cur;
    }
    if(A>B)
        sum1 += addsum("48:00");
    else if(A<B)
        sum2 += addsum("48:00");
    cout << print(sum1 / 60) << ':' << print(sum1 % 60) << '\n';
    cout << print(sum2 / 60) << ':' << print(sum2 % 60) << '\n';

}