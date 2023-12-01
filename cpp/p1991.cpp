#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

int visited[27];
int n;
vector<int> node[27];
void preOrder(int here)
{
    if(visited[here] || here==26)return;
    visited[here] = 1;
    cout << (char)(here + 'A');
    for(int there : node[here]){
        preOrder(there);
    }


}
void inOrder(int here)
{
    if(visited[here] || here ==26)return;
    if(node[here].size()==2){
        inOrder(node[here][0]);
        cout<<(char)(here + 'A');
        visited[here] = 1;
        inOrder(node[here][1]);
    }
    else if(node[here].size()==0){
        visited[here] = 1;
        cout<<(char)(here + 'A');
    }
}
void postOrder(int here)
{
    if(visited[here] || here == 26)return;
    for(int there : node[here]){
        postOrder(there);
    }
    visited[here] = 1;
    cout<<(char)(here + 'A');
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        char a, b, c;
        cin >> a >> b >> c;
        if(b!='.'){
            node[a-'A'].push_back(b-'A');
        }
        else if(b=='.'){
            node[a-'A'].push_back(26);
        }
        if(c!='.'){
            node[a-'A'].push_back(c-'A');
        }
        else if(c=='.'){
            node[a-'A'].push_back(26);
        }
    }
    memset(visited, 0, sizeof(visited));
    preOrder(0);
    cout << '\n';

    memset(visited, 0, sizeof(visited));
    inOrder(0);
    cout << '\n';

    memset(visited, 0, sizeof(visited));
    postOrder(0);
}