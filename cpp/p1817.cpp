#include <iostream>

using namespace std;

int main(){
    int N, M;
    int books[51]={0};
    cin >> N >> M;
    
    for(int i=0;i<N;i++){
        cin >> books[i];
    }
    int count =0;

    for(int i=0;i<N;){
        int tmp = 0;
        while(true){
            if(tmp+books[i] <= M)tmp += books[i++];
            else break;
        }
        count++;
    }
    cout << count;
    return 0;

}