/* map */
// #include<iostream>
// #include<map>
// using namespace std;

// int N, M;
// long long temp;
// map<long long, int> m;

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     cin >> N;
//     for (int i = 0; i < N;i++){
//         cin >> temp;
//         m[temp]=1;
//     }
//     cin >> M;
//     for (int i = 0; i < M;i++){
//         cin >> temp;
//         cout << m[temp] << '\n';
//     }
//     return 0;
// }

/* binary search */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N, M;
long long temp;
vector<long long> v;

int search(long long target){
    int l=0, r=N-1;
    while(l<=r){
        int mid = (l + r) / 2;
        if(v[mid]==target){
            return 1;
        }else if(v[mid]>target){
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for (int i = 0; i < N;i++){
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    cin >> M;
    for (int i = 0; i < M;i++){
        cin >> temp;
        cout << search(temp) << '\n';
    }
    return 0;
}