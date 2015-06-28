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
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    
    int calA;
    cin>>calA;
    int cost=a;
    int cal=calA;
    
    vi topp;
    rep(i,n){
        int x;
        cin>>x;
        topp.pb(x);
    }
    sort(all(topp));
    reverse(all(topp));
    
    
    rep(i,topp.size()){
        if( cal/cost<=(cal+topp[i])/(cost+b) ){
            cal+=topp[i];
            cost+=b;
        }
        else break;
    }
    
    cout<<(int)(cal/cost)<<endl;
    
    return 0;
}


