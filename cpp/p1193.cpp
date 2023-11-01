#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int checker = 1, cnt = 1;;
    if(n==1){
        cout << "1/1";
        return 0;
    }
    string tmp;
    for(int i=1;i<n;i+=checker){
        checker++;
        if(checker%2==0){
            for(int j=1;j<=checker;j++){
                cnt++;   
                if(cnt==n){
                    tmp = to_string(j) + "/" + to_string(checker+1-j);
                    break;
                }
            }
        }else{
            for(int j=1;j<=checker;j++){
                cnt++;
                if(cnt==n){
                    tmp = to_string(checker+1-j) + "/" + to_string(j);
                    break;
                }
            }
        }
    }
    cout<<  tmp;
    return 0;
}