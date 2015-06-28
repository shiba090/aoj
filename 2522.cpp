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

bool is(string s){
    bool a=false,b=false,c=false;
    if(s.sz<6)return false;
    rep(i,s.sz){
        if('0'<=s[i] && s[i]<='9')a=true;
        if('A'<=s[i] && s[i]<='Z')b=true;
        if('a'<=s[i] && s[i]<='z')c=true;
    }
    if(!a || !b || !c)return false;

    return true;
}
int main(){
    string i;
    cin>>i;
    if(is(i))cout<<"VALID"<<endl;
    else cout<<"INVALID"<<endl;
    
    
    return 0;
}



