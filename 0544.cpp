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

int main(){
    while(1){
    int m,n;
    vi f,d;
    cin>>m>>n;
    if(m==0 && n==0)break;
    rep(i,m){
        int a;
        cin>>a;
        f.pb(a);
    }
    rep(i,n){
        int b;
        cin>>b;
        d.pb(b);
    }
    
    int sum=0;
    int now=0;
    rep(i,n){
        now+=d[i];
        now+=f[now];
        sum++;
        if(now>=m)break;
        
    }
    cout<<sum<<endl;
    }
    return 0;
}


