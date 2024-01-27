#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
struct Student{
    string name;
    int kor, eng, math;
};
bool cmp(Student a, Student b){
    if(a.kor==b.kor){
        if(a.eng==b.eng){
            if(a.math==b.math){
                return a.name < b.name;
            }
            return a.math > b.math;
        }
        return a.eng < b.eng;
    }
    return a.kor > b.kor;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    vector<Student> a(n);
    for (int i = 0; i < n;i++){
        cin >> a[i].name >> a[i].kor >> a[i].eng >> a[i].math;
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < n;i++){
        cout << a[i].name << '\n';
    }
    return 0;
}