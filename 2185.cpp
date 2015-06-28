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

#define X first
#define Y second

int main() {
    int n;
    cin>>n;
    rep(jfaefjo,n){
        int x,y,w,h;
        cin>>x>>y>>w>>h;
        int m;
        cin>>m;
        pii cat[200];
        rep(i,m){
            int a,b;
            cin>>a>>b;
            cat[i]=pii(a,b);
        }
        int ans=0;
        rep(i,m){
            if(x<=cat[i].X && cat[i].X<=x+w+1 && y<=cat[i].Y && cat[i].Y<=y+h+1){
                ans++;
            }
        }
        cout<<ans<<endl;
        
        
        
    }
    

    return 0;
}


