#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

bool is(char ch){
    if(ch==' ')return true;
    if(ch==',')return true;
    if(ch=='.')return true;
    return false;
}

int main(){
    string s;
    while(getline(cin,s)){
        vector<string> sent;
        
        string tmp="";
        rep(i,s.size()){
            if(!is(s[i])){
                tmp+=s[i];
            }
            else{
                if( tmp.size()>=3 && tmp.size()<=6 )sent.pb(tmp);
                tmp="";
            }
        }
        rep(i,sent.size()){
            if(i!=0)cout<<" ";
            cout<<sent[i];
        }
        cout<<endl;
    }
}

