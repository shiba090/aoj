#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back


double solveRPN(vector<string> s){
    stack<double> stk;
    
    
    for(int i=0;i<s.size();i++){
        if( (s[i]!="+" && s[i]!="-" && s[i]!="*" && s[i]!="/") )stk.push( stoi(s[i])  );
        else{
            double b=stk.top(); stk.pop();
            double a=stk.top(); stk.pop();
            
            if(s[i]=="+")stk.push(a+b);
            if(s[i]=="-")stk.push(a-b);
            if(s[i]=="*")stk.push(a*b);
            if(s[i]=="/")stk.push(a/b);
        }
    }
    
    
    return stk.top();
}

int main(){
    string s;
    while(getline(cin,s)){
        vector<string> a;
    
        string now="";
        rep(i,s.size()){
            if(s[i]!=' ')now+=s[i];
            else{
                a.pb(now);
                now="";
            }
        }
        if(now.size())a.pb(now);
        printf("%.10lf\n",solveRPN(a));
    }
    return 0;
}

