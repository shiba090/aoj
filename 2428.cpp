#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

#define INF 9999999


vector<string> toRPN(string s){
    stack<string> ope;
    vector<string> ret;
    int len=s.size();
    
    for(int i=0;i<len;i++){
        if( isdigit(s[i]) ){
            string tmp="";
            for(int j=i;j<len;j++){
                if( isdigit(s[j]) )tmp+=s[j];
                else break;
            }
            ret.push_back(tmp);
            i+=tmp.size()-1;
            
        }else{
            if( s[i]=='(' ){
                if( i-1>=0 && isdigit(s[i-1]) )return {"invalid"};
                else ope.push("(");
            }
            
            else if( s[i]==')' ){
                if( i+1<s.size() && isdigit(s[i+1]) )return {"invalid"};
                if( ope.empty() )return {"invalid"};
                if( ope.top()=="(" )return {"invalid"};
                
                while( ope.top()!="(" ){
                    ret.push_back( ope.top() );
                    ope.pop();
                    
                    if( ope.empty() )return {"invalid"};
                }
                ope.pop();
                
            }else if( s[i]=='*' || s[i]=='/' ){
                while( ope.size() && ( ope.top()=="*" || ope.top()=="/" ) ){
                    ret.push_back( ope.top() );
                    ope.pop();
                }
                ope.push( string(1,s[i]) );
                
            }else if( s[i]=='+' || s[i]=='-' ){
                while( ope.size() && ( ope.top()=="*" || ope.top()=="/" || ope.top()=="+" || ope.top()=="-" ) ){
                    ret.push_back( ope.top() );
                    ope.pop();
                }
                ope.push( string(1,s[i]) );
            }
        }
    }
    while( ope.size() ){
        if(ope.top()=="(")return {"invalid"};
        ret.push_back( ope.top() );
        ope.pop();
    }
    
    return ret;
}


int toDeci(string s){
    int ret=0;
    for(int i=0;i<s.size();i++){
        if( s[ s.size()-i-1 ]=='1' ){
            ret+=1<<i;
        }
        if(ret>=1024)return 9999;
    }
    return ret;
}



int solveRPN(vector<string> s){
    stack<int> stk;
    
    
    for(int i=0;i<s.size();i++){
        if( (s[i]!="+" && s[i]!="-" && s[i]!="*" && s[i]!="/") )stk.push( toDeci(s[i])  );
        else{
            if(stk.size()<2)return -1;

            int b=stk.top(); stk.pop();
            int a=stk.top(); stk.pop();
            
            if(s[i]=="+")stk.push(a+b);
            if(s[i]=="-")stk.push(a-b);
            if(s[i]=="*")stk.push(a*b);
            if(s[i]=="/")stk.push(a/b);
        }
        if( stk.top() <0 || 1024<=stk.top() )return -1;
    }
    
    if( stk.size()>1 )return -1;
    return stk.top();
}


vi dot;
int maxi=-INF;


int solve(string s){
    vector<string> poland=toRPN(s);
    
    if(poland[0]=="invalid")return -INF;
    
    int result=solveRPN(poland);
    
    if(result==-1)return -INF;
    else return result;
}


void dfs(string s,int flor){
    if(flor>=dot.size()){
        maxi=max( maxi , solve(s) );
        return ;
    }
    
    char ch[]={'0','1','+','-','*','(',')'};
    rep(i,7){
        s[ dot[flor] ] = ch[i];
        dfs(s,flor+1);
        s[ dot[flor] ] = '.';
    }
}


int main(){
    string s;
    cin>>s;
    
    rep(i,s.size()) if(s[i]=='.')dot.pb(i);
    
    dfs(s,0);
    
    if( maxi==-INF )cout<<"-1"<<endl;
    else cout<<maxi<<endl;
    
    return 0;
}


