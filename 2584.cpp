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
#define sz size()

const double EPS = 1e-10;
const int INF = 100000000;


char add(char ch,int x){
    x=x%26;
    ch+=x;
    if(ch<'A'){
        ch+=26;
    }
    else if(ch>'Z'){
        ch-=26;
    }
    
    return ch;
}

string doPlusMinas(string s){
    string ret="";
    int now=0;
    rep(i,s.sz){
        if(s[i]=='[' || s[i]==']'){
            ret+=s[i];
        }
        else if(s[i]=='+')now++;
        else if(s[i]=='-')now--;
        else if(s[i]>='A' && s[i]<='Z'){
            ret+=add(s[i],now);
            now=0;
        }
        else if(s[i]=='?'){
            ret+='A';
            now=0;
        }
    }
    return ret;
}

string rev(string s){

    string ret="";
    
    rep(i,s.sz){
        int spoint=-1;
        int count=0;
        
        if(s[i]=='['){
            int sum=1;
            spoint=i;
            count++;

            while(sum){
                i++;
                count++;
                if(s[i]=='[')sum++;
                if(s[i]==']')sum--;
            }
            ret+=rev(s.substr(spoint+1,count-2));
        }
        else{
            ret+=s[i];
        }
    }
    reverse(all(ret));
    return ret;
}



int main(){
    string s;
    while(cin>>s){
        if(s==".")break;
        s=doPlusMinas(s);
        
        string ans="";
        
        rep(i,s.sz){
            int start,count=0;

            if(s[i]=='['){
                start=i;
                int sum=0;
                do{
                    if(s[i]=='[')sum++;
                    if(s[i]==']')sum--;
                    i++;
                    count++;
                }while(sum);
                i--;
                ans+=rev(s.substr(start+1,count-2));
            }
            else{
                ans+=s[i];
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}



