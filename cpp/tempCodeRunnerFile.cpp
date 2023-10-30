#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<vector<int>> v(N+1,vector<int>(N+1));
    vector<vector<int>> dp(N+1,vector<int>(N+1));
    int max = INT32_MIN;
    for(int i =0; i<N;i++){
        for(int j=0;j<N;j++){
            cin >> v[i][j];
            if(v[i][j]>max){
                max = v[i][j];
            }
        }
    }
    int k=N;
    while(k>=2){
        int x=0, y=0;
        while(x+k<=N && y+k<=N){
            int sum = 0;
            //cout <<"x: "<<x<<" y: "<<y<<" k: "<<k<<endl;
            for(int i =x; i<x+k;i++){
                for(int j=y;j<y+k;j++){
                    //cout<<v[j][i]<<" ";
                    sum+=v[j][i];
                    if(sum>max){
                        max = sum;
                    }
                }
                //cout << endl;
            }
            if(x+k<N){
                x++;
            }else{
                x=0;
                y++;
            }
        }
        k--;
    }
    cout << max << endl;
    return 0;
}
