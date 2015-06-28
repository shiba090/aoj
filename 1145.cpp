#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back


//string solve(int times,string s){
//    string ret="";
//    string part="";
//    
//    int len=s.size();
//
//    rep(i,len){
//        if( isalpha(s[i]) ){
//            part+=s[i];
//        }
//        else if( isdigit(s[i]) ){
//            string num;
//            for(int j=i;j<len;j++){
//                if(j>1000010)return part;
//                if( isdigit(s[j]) )num+=s[j];
//                else{
//                    break;
//                }
//            }
//            i+=num.size();
//            
//            if( s[i]!='(' ){
//                part+=solve( stoi(num) , string( 1,s[i] ) );
//            }else{
//                i++;
//                string repeat="";
//                int brackets=1;
//                for(int j=i;j<len;j++){
//                    if( s[j]==')' ){
//                        repeat+=')';
//                        brackets--;
//                        
//                    }else if( s[j]=='(' ){
//                        brackets++;
//                        repeat+='(';
//                        
//                    }else{
//                        if(j==len-1)return "invalid2";
//                        
//                        repeat+=s[j];
//                    }
//                    if(brackets<=0)break;
//                }
//                
//                repeat.erase(repeat.size()-1);
//                i+=repeat.size();
//                
//                part+=solve( stoi(num) , repeat );
//            }
//            
//            
//        }else return "invalid1";
//    }
//    
//    
//    rep(i,times)ret+=part;
//    
////    cout<<ret<<endl;
//    return ret;
//}


string getDigit(int n,string s){
    string ret="";
    
    for(int i=n;i<s.size();i++){
        if( isdigit(s[i]) )ret+=s[i];
        else break;
    }
    return ret;
}


string solve(int num,string s){
//    cout<<s<<endl;
    string part="";
    
    int len=s.size();
    rep(i,len){
        if( isalpha(s[i]) )part+=s[i];
        if(part.size()>1000100)return part;
        
        else if( isdigit(s[i]) ){
            string deg=getDigit(i,s);
            i+=deg.size();
            
            if(s[i]=='('){
                int bra=1;
                i++;
                string repeat="";
                for(int j=i;j<len;j++){
                    if( s[j]=='(' )bra++;
                    if( s[j]==')' )bra--;
                    
                    if( bra==0 )break;
                    else{
                        repeat+=s[j];
                        if(repeat.size()>1000100)break;
                    }
                }
                part+=solve( stoi(deg) , repeat );
                if(part.size()>1000100)return part;
                i+=repeat.size();
                
            }else{
                part+=solve( stoi(deg) , string(1,s[i]) );
                
            }
        }
    }
    
    if(part.size()>1000100)return part;
    string ret="";
    int limit=1000100/part.size()+2;
    num=min(num,limit);
    for(int i=0;i<num;i++){
        ret+=part;
        
    }
    return ret;
}


int main(){
    string s;
    int n;
    while(cin>>s>>n){
        if(s=="0"&& n==0)break;
        
        string res = solve(1,s);
        
        if(res.size()<=n)cout<<"0"<<endl;
        else cout<<res[n]<<endl;
        
//        cout<<res.size()<<endl;
    }
    

    return 0;
}


