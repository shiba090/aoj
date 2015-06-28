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

typedef vector<int> VI;
typedef pair<int,int> PII;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define ALL(a)  (a).begin(),(a).end()
#define PB push_back
#define sz size()

const double EPS = 1e-10;
const int INF = 100000000;

template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

char d(char a){
    if(a=='T')return 'a';
    if(a=='L')return 'i';
    if(a=='U')return 'u';
    if(a=='R')return 'e';
    if(a=='D')return 'o';
    return '\0';
}


string first(char s1,char s2){
    char data[]={'w','-','k','s','t','n','h','m','y','r'};
    
    if(s1=='0' && s2=='U')return "nn";
    if(s1=='1'){
        string a="";
        a+=d(s2);
        return a;
    }
    string a;
    a+=data[s1-'0'];
    a+=d(s2);
    return a;
}

int main(){
    string ans="";
    string s;
    cin>>s;
    for(int i=0;i<s.sz;i+=2){
        ans+=first( s[i],s[i+1] );
    }
    cout<<ans<<endl;
    
    return 0;
}



