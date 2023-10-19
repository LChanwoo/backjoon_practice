#include<iostream>
#include<string>
int main(){
    int KDA[3];
    int idx=0;
    std::string str;
    std::cin >>str;
    std::string tmp;
    for(int i=0;i<str.length();i++){
        if(str[i]=='/'){
            KDA[idx++]=std::stoi(tmp);
            tmp = "";
        }else if(i==str.length()-1){
            tmp.push_back(str[i]);
            KDA[idx]=std::stoi(tmp);
        }else{
            tmp.push_back(str[i]);
        }
    }
    KDA[0] + KDA[2]  < KDA[1] || KDA[1]==0 ? std::cout << "hasu" : std::cout << "gosu";
    return 0 ;
}
