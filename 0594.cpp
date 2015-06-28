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
#define ALL(a)  (a).begin(),(a).end()
#define pb push_back
#define sz size()

const double EPS = 1e-10;
const int INF = 100000000;


int solve(int sx,int sy,int gx,int gy){
    int ret=0;
    if(sx<gx){
        swap(sx,gx);
        swap(sy,gy);
    }
    if( (sx>gx && sy>gy) || (sx<gx && sy<gy) ){
        int val=min( sx-gx , sy-gy );
        sx-=val;
        sy-=val;
        ret+=val;
    }
    ret+=abs(sy-gy)+abs(sx-gx);
    
    return ret;
}

int main(){
    int c=0;
    int w,h,n;
    cin>>w>>h>>n;
    int nowx,nowy;
    cin>>nowx>>nowy;
    rep(i,n-1){
        int x,y;
        cin>>x>>y;
        c+=solve(nowx,nowy,x,y);
        
        nowx=x;nowy=y;
    }
    cout<<c<<endl;
    return 0;
    
}



