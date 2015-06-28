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
#define REP(i,m,n) for(int i=(m);i<(n);i++)
#define ALL(a)  (a).begin(),(a).end()
#define pb push_back
#define sz size()



string pre(string s){   // "][" を空白に置き換え
    string b="";
    rep(i,s.sz-1){
        if(s[i]==']' && s[i+1]=='['){
            b+=' ';
            i++;
        }
        else{
            b+=s[i];
        }
    }
    b+=s[s.sz-1];
    return b;
}


string solve(int n,bool check,string s){
    n++;
    string tmp[10000]={};

    int count=0;
    REP(j,n,s.sz){
        if(s[j]!=']'){
            if(s[j]!=' '){
                tmp[count]+=s[j];
            }
            else{
                count++;
            }
        }
        else break;
    }
    vi a;
    rep(i,count+1){
        a.pb(stoi(tmp[i]));
    }
    sort(ALL(a));
    
    int sum=0;
    rep(i,count/2+1){
        if(check==false)
            sum+=a[i]/2+1;
        else
            sum+=a[i];
    }
    return to_string((sum));
}


string delSpace(string s){  // "] [" を "][" に置き換え
    string ret="";
    rep(i,s.sz-2){
        if(s[i]==']' && s[i+1]==' ' && s[i+2]=='['){
            ret+="][";
            i+=2;
        }
        else{
            ret+=s[i];
        }
    }
    ret+=s[s.sz-2];
    ret+=s[s.sz-1];
    return ret;
}


int main(){
    int t;
    cin>>t;
    
    rep(times,t){
        string s;
        cin>>s;
        int check=false;
        s=pre(s);
        while(1){
            if(s.find("[",0)==-1)break;

            string n="";
    
            rep(i,s.sz){
                if(s[i+1]>='0' && s[i+1]<='9'){
                    n+=solve(i,check,s);
                    while(s[i]!=']')i++;
                }
                else{
                    n+=s[i];
                }
            }
            s=n;
            check=true;
        }
        cout<<s<<endl;
    }
    return 0;
}





