#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int T, N, M;
    cin >> T;
    int ans[T];
    for(int i=0;i<T;i++){
        cin >> N >> M;
        vector<int> v(N);
        for(int i=0;i<N;i++) cin >> v[i];
        int cnt=0;
        while(!v.empty()){
            int max = *max_element(v.begin(),v.end());
            if(v[0]==max){
                cnt++;
                v.erase(v.begin());
                if(M==0) break;
                else M--;
            }else{
                v.push_back(v[0]);
                v.erase(v.begin());
                if(M==0) M=v.size()-1;
                else M--;
            }
        }
        ans[i]=cnt;
    }

    for(int i=0;i<T;i++){
        cout << ans[i] << endl;
    }
    return 0;
}