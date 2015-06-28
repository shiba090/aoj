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

int sol(int h,int m,int s){
    int ret;
    
    ret=s+m*60+h*60*60;
    return ret;
}



int main() {
    rep(abc,3){
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        int ans=sol(d,e,f)-sol(a,b,c);
        
        cout<<(int)(ans/3600)<<" ";
        ans-=(int)(ans/3600)*3600;
        cout<<(int)(ans/60)<<" ";
        ans-=(int)(ans/60)*60;
        cout<<ans<<endl;
    }
    
    return 0;
}


