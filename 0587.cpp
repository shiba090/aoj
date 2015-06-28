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
    int n,m;
    cin>>n>>m;

    int a[20000]={},b[20000]={};
    rep(i,n){
        cin>>a[i]>>b[i];
    }
    int maxi=-1;
    int now=m;
    bool flag=false;
    
    rep(i,n){
        maxi=max(maxi,now);
        now=now+a[i]-b[i];
        if(now<0)flag=true;
    }
    maxi=max(maxi,now);

    
    
    if(flag)cout<<"0"<<endl;
    else cout<<maxi<<endl;
    
    return 0;
}

