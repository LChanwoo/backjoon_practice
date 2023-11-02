#include<iostream>
#include<string>
// #include<queue>
using namespace std;
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     string s;
//     getline(cin, s);
//     queue<string> q;
//     int len = s.length();
//     for(int i=0;i<len;i++){
//         if(s[i]=='<'){
//             string tmp = "";
//             while(s[i]!='>'){
//                 tmp += s[i];
//                 i++;
//             }
//             tmp += s[i];
//             q.push(tmp);
//         }else if(s[i]==' '){
//             q.push(" ");
//         }else{
//             string tmp = "";
//             while(s[i]!=' ' && s[i]!='<' && i<len){
//                 tmp += s[i];
//                 i++;
//             }
//             q.push(tmp);
//             i--;
//         }
//     }
// }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    getline(cin, s);
    int len = s.length();
    string tmp = "";
    bool flag = false;
    for(int i=0;i<len;i++){
        if(s[i]=='<'){
            flag = true;
            if(tmp.length()>0){
                for(int j=tmp.length()-1;j>=0;j--){
                    cout << tmp[j];
                }
                tmp = "";
            }
            cout << s[i];
        }else if(s[i]=='>'){
            flag = false;
            cout << s[i];
        }else if(s[i]==' '){
            if(tmp.length()>0){
                for(int j=tmp.length()-1;j>=0;j--){
                    cout << tmp[j];
                }
                tmp = "";
            }
            cout << s[i];
        }else{
            if(flag){
                cout << s[i];
            }else{
                tmp += s[i];
            }
        }
    }
    if(tmp.length()>0){
        for(int j=tmp.length()-1;j>=0;j--){
            cout << tmp[j];
        }
        tmp = "";
    }
    return 0;
}

