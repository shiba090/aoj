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
    vi p;
    int n;
    while(cin>>n){
        p.clear();
        rep(i,n){
            int a;
            cin>>a;
            p.pb(a);
        }
        sort(all(p));
        int sum=0;
        int bef=0;
        rep(i,p.sz){
            sum+=bef+p[i];
            bef+=p[i];
//            dump(bef);
        }
        cout<<sum<<endl;
    }

    
    return 0;
}

