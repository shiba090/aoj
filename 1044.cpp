#include <functional>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <iomanip>
#include <utility>
#include <cstdlib>
#include <sstream>
#include <bitset>
#include <vector>
#include <cstdio>
#include <ctime>
#include <queue>
#include <deque>
#include <cmath>
#include <stack>
#include <list>
#include <map>
#include <set>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back


string sol(string s){
    string ret="";
    
    rep(i,s.size()){
        if(i!=0 && isupper(s[i]) && s[i]!='_'){
            ret+='_';
            ret+=tolower(s[i]);
        }
        else{
            ret+=tolower(s[i]);
        }
    }
    return ret;
}





int main() {
    string s;
    char type;
    
    while(cin>>s>>type){
        if(type=='X')break;
        
        s=sol(s);
        
        if(type=='D')cout<<s<<endl;
        else if(type=='L'){
            string ans="";
            rep(i,s.size()){
                if(s[i]=='_'){
                    ans+=toupper(s[i+1]);
                    i++;
                }
                else ans+=tolower(s[i]);
            }
            cout<<ans<<endl;
            
        }
        else if(type=='U'){
            string ans="";
            rep(i,s.size()){
                if(i==0){
                    ans+=toupper(s[i]);
                }
                else if(s[i]=='_'){
                    ans+=toupper(s[i+1]);
                    i++;
                }
                else ans+=tolower(s[i]);
            }
            cout<<ans<<endl;
            
        }
    }
    
    return 0;
}

