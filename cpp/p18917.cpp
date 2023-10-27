#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int M,x,n;
    cin>> M;
    int idx = 0;
    long long sum=0,xres= 0;
    for(int i=0; i<M;i++){
        cin >> x;
        if(x == 1){
            cin >> n;
            sum +=n;
            xres^=n;
        }else if(x==2){
            cin >> n;
            sum -=n;
            xres^=n;
        }else if(x==3){
            cout << sum << '\n';
        }else if(x==4){ 
            cout << xres << '\n';
        }
    }
    return 0;
}
// int main(){
//     // cout<< (0 ^ 4 ^ 3 ^ 0)<<'\n';
//     // cout<< (0 ^ 3 ^ 4 ^ 0)<<'\n';
//     // cout<< (3 ^ 4 ^ 0 ^ 0)<<'\n';
//     // cout<< (3 ^ 0 ^ 4 ^ 0)<<'\n';
//     int M,x,n, sum=0;
//     cin>> M;
//     vector<int> inputs;
//     for(int i=0; i < M ; i++){
//         cin >> x;
//         if(x==1||x==2){
//             cin >> n;
//             inputs.push_back(x);
//             inputs.push_back(n);
//         }else{
//             inputs.push_back(x);
//         }
//     }
//     int idx=0;
//     int xres= 0;
//     for(int i=0; i<M;i++){
//         x=inputs[idx++];
//         if(x == 1){
//             n=inputs[idx++];
//             sum+=n;
//             xres^=n;
//         }else if(x==2){
//             n=inputs[idx++];
//             sum-=n;
//             xres^=n;
//         }else if(x==3){
//             cout << sum << '\n';
//         }else if(x==4){ 
//             cout << xres << '\n';
//         }
//     }
// }
