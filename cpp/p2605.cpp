#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    int tmp;
    v.push_back(1);
    for(int i=1;i<=n;i++){
        cin >> tmp;
        v.insert(v.end()-tmp-1,i);
        // for(int j=0;j<i;j++){
        //     cout << v[j] << " ";
        // }
        cout << endl;
    }
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
    return 0;

}