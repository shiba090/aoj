#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

string solve(string s){
    if(s.substr(0,2)==">'"){
        int eq=0;
        for(int i=2;i<s.size();i++){
            if(s[i]!='=')break;
            else{
                eq++;
            }
        }
        
        if(eq==0)return "NA";
        
        if( s[ (2 + eq -1) +1 ] != '#')return "NA";
        
        if( s.substr( ((2+eq-1)+1) +1 ,eq )   !=   s.substr( 2,eq ) )return "NA";

        if( 2+eq+1+eq+1 == s.size() && s[ (2+eq+1+eq+1) -1 ]=='~')return "A";
        
    }else if(s.substr(0,2)==">^"){
        int c=2;
        while( s[c]=='Q' && s[c+1]=='=' ){
            c+=2;
        }
        if(c==2)return "NA";
        
        
        if( c+1==s.size()-1 && s[c]=='~' && s[c+1]=='~')return "B";
        else return "NA";
        
        
    }else return "NA";

    return "NA";
}


int main(){
    int n;
    cin>>n;
    rep(i,n){
        string s;
        cin>>s;
        
        cout<<solve(s)<<endl;
    }

    return 0;
}

