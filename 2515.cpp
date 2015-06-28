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

int solve(string s){
    int a=stoi( s.substr(0,2) );
    int b=stoi( s.substr(3,2) );
    
    return a*60+b;
}


int main() {
    int n,q;
    cin>>n>>q;
    
    string at[20],a[20],bt[20],b[20];
    
    
    rep(i,n){
        cin>>at[i]>>a[i]>>bt[i]>>b[i];
    }
    vector<pair<string,int> > ans;
    
    for(int i=1;i<n;i++){
        int res=solve(at[i])-solve(bt[i-1]);
        if(res>=q){
            ans.pb(pair<string,int>(a[i],res));
        }
    }
    cout<<ans.size()<<endl;
    rep(i,ans.size()){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    
    return 0;
}

