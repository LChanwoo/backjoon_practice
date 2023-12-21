// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<string>
// using namespace std;

// int n;
// char a[20];
// char check[10];
// vector<string> ans;

// bool ok(int x, int y, char op){
//     if(x>y && op=='>')return true;
//     if(x<y && op=='<')return true;
//     return false;
// }

// void go(int idx, string num){
//     if(idx==n+1){
//         ans.push_back(num);
//         return;
//     }
//     for(int i=0;i<=9;i++){
//         if(check[i]==0){
//             if(idx==0 || ok(num[idx-1]-'0', i, a[idx-1])){
//                 check[i] = 1;
//                 go(idx+1, num+to_string(i));
//                 check[i] = 0;
//             }
//         }
//     }
// }


// int main(){
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     go(0, "");
//     sort(ans.begin(), ans.end());
//     cout<<ans[ans.size()-1]<<'\n';
//     cout<<ans[0]<<'\n';
// }


// second try
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
char a[10];
bool visited[10];
vector<string> ans;

bool possible(int x, int y, char op){
    if(x>y && op=='>') return true;
    if(x<y && op=='<') return true;
    return false;
}

void go(int idx, string num){
    if(idx==n+1){
        ans.push_back(num);
        return;
    }
    for(int i=0;i<=9;i++){
        if(!visited[i]){
            if(idx==0 || possible(num[idx-1]-'0', i, a[idx-1])){
                visited[i] = 1;
                go(idx+1, num+to_string(i));
                visited[i] = 0;
            }
        }
    }
}


int main(){
    cin >> n;
    for(int i = 0;i<n;i++) cin >> a[i];
    go(0, "");
    sort(ans.begin(), ans.end());
    cout << ans[ans.size()-1] << '\n';
    cout << ans[0] << '\n';
}