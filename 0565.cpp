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

int main() {
    vi a,b;
    rep(i,3){
        int x;
        cin>>x;
        a.pb(x);
    }
    rep(i,2){
        int x;
        cin>>x;
        b.pb(x);
    }
    
    sort(all(a));
    sort(all(b));
    
    cout<<a[0]+b[0]-50<<endl;
    
    return 0;
}


