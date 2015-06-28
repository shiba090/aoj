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

int solve(int n){
    int ret=0;
    int m[]={500,100,50,10,5,1};
    rep(i,6){
        ret+=n/m[i];
        n-=m[i]*(n/m[i]);
    }
    return ret;
}


int main(){
    vi a,b;
    rep(j,10){
        int k;
        cin>>k;
        a.pb(k);
    }
    rep(j,10){
        int k;
        cin>>k;
        b.pb(k);
    }
    sort(all(a));
    sort(all(b));
    
    cout<<(a[9]+a[8]+a[7])<<" "<<(b[9]+b[8]+b[7])<<endl;
    
    return 0;
}


