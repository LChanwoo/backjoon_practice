// 테스트용
// #include<iostream>

// using namespace std;

// int n;

// void recursion(int level){
//     string s;
//     for(int i=0;i<level*4;i++){
//         s+='_';
//     }
//     cout << s <<"\"sds\"" << endl;
//     if(level < n){
//         cout << s << "\"sd." << endl;
//         cout << s << "asssdasd" << endl;
//         cout << s << "as123124das\"" << endl;
//     }else {
//         cout << s << "\"asda43543654ssssd\"" << endl;
//     }
//     if(level <n)
//     recursion(++level);
//     cout << s << "asd6587sad" << endl;

// }

// int main(){
//     cin >> n;
//     cout << "asdas." << endl;
//     recursion(0);
// }

#include<iostream>

using namespace std;

int n;

void recursion(int level){
    string s;
    for(int i=0;i<level*4;i++){
        s+='_';
    }
    cout << s <<"\"재귀함수가 뭔가요?\"" << endl;
    if(level < n){
        cout << s << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어." << endl;
        cout << s << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지." << endl;
        cout << s << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"" << endl;
    }else {
        cout << s << "\"재귀함수는 자기 자신을 호출하는 함수라네\"" << endl;
    }
    if(level < n)
    recursion(++level);
    cout << s << "라고 답변하였지." << endl;

}

int main(){
    cin >> n;
    cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << endl;
    recursion(0);
}
