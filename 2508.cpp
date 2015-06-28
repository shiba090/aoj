#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb push_back
#define all(x) x.begin(),x.end()

char sub(char ch,int x){
    x=x%52;
    if(x>=26){
        x-=26;
        if('a'<=ch && ch<='z')ch+=('A'-'a');
        else if('A'<=ch && ch<='Z')ch+=('a'-'A');
    }

    if('a'<=ch && ch<='z'){
        if(ch-x<'a')return ('Z'+1-('a'-(ch-x)));
    }else{
        if(ch-x<'A')return ('z'+1-('A'-(ch-x)));
    }
    return ch-x;
}

int main(){
    int n;
    while(cin>>n){
        vi key;
        if(n==0)return 0;
        rep(i,n){
            int tmp;
            cin>>tmp;
            key.pb(tmp);
        }
        string s;
        cin>>s;
        int len=s.size();
        rep(i,len){
            cout<<sub(s[i],key[i%key.size()]);
        }
        cout<<endl;
        
        
    }
    
    return 0;
}

