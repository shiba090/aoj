#include <iostream>

using namespace std;


#define rep(i,n) for(int i=0;i<(n);i++)


int main(){
    string s;
    cin>>s;
    while(1){
        int num;
        if(s.substr(1,s.size()-2).find("mew",0)!=string::npos)
            num=(int)s.find("mew",0);
        else break;
        
        string tmp="";
        rep(i,num){
            tmp+=s[i];
            }
        for(int i=num+3;i<s.size();i++){
            tmp+=s[i];
            }
        s=tmp;
        }
    if(s=="mew")cout<<"Cat"<<endl;
    else cout<<"Rabbit"<<endl;
    
    return 0;
}


