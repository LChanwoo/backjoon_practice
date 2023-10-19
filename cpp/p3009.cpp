#include<iostream>

using namespace std;

class MyPoint{
public:
    int x,y;
    MyPoint();
    MyPoint(int a, int b);
};

MyPoint::MyPoint() : x(0), y(0) {}
MyPoint::MyPoint(int a, int b) : x(a), y(b) {}

int main(){
    MyPoint p[3];
    for(int i = 0 ; i< 3;i++){
        int x,y;
        cin >> x >> y;
        p[i]=MyPoint(x,y);

    }
    if(p[0].x!=p[1].x && p[0].x!=p[2].x) cout << p[0].x << " ";
    else if( p[0].x==p[1].x) cout << p[2].x << " ";
    else cout << p[1].x << " ";
    
    if(p[0].y!=p[1].y && p[0].y!=p[2].y) cout << p[0].y;
    else if( p[0].y==p[1].y) cout << p[2].y;
    else cout << p[1].y ;

    return 0;
}