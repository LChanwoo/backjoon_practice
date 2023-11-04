#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


int N, cnt=0;
vector<int> v;

int main(){
    cin >> N;
    int min=100001;
    for(int i=1;i<=sqrt(N);i++){
        v.push_back(i*i);   
    }
    for(int i=0;i<sqrt(N);i++){
        int cnt = 0;
        int n = N;
        for (int j = N-i; n > 0; j--)
        {
            if(n<=3){
                cnt+=n;
                break;
            }
            else
            {
                while(n>=v[j]){
                    n-=v[j];
                    cnt++;
                }
            }
        }
        if(cnt<min){
            min = cnt;
        }
    }

    cout << cnt;
}