#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class applicant{
public :
    int a;
    int b;
};

bool comparator(applicant a, applicant b) {
    if (a.a - b.a != 0) return a.a < b.a;
    return a.b < b.b;
}
int main(){
    int T;
    cin >> T;
    vector<int> result;
    for(int i =0;i<T;i++){
        vector<applicant> v;
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int a,b;
            applicant app;
            cin >> app.a >> app.b;
            v.push_back(app);
        }
        sort(v.begin(),v.end(),comparator);
        int cnt=1;
        int tmp=0;
        for(int j=1;j<n;j++){
            if(v[tmp].b>v[j].b){
                cnt++;
                tmp=j;
            }
        }
        result.push_back(cnt);
    }
    for(int i=0;i<T;i++){
        cout << result[i] << endl;
    }
    
}
