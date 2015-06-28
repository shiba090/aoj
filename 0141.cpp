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

int n;
int fie[110][110]={};
int d[]={-1,0,1,0,-1};


bool turn(int dir,int y,int x){
    int tmpy=y+d[dir];
    int tmpx=x+d[dir+1];
//    cout<<endl;
//    dump(dir);dump(y);dump(x);dump(tmpy);dump(tmpx);
    
    if(fie[y][x]==1 || tmpy<0 || tmpy>=n || tmpx<0 || tmpx>=n || fie[ tmpy+d[dir] ][ tmpx+d[dir+1] ]==1 || fie[ tmpy+d[dir+1] ][ tmpx+d[(dir+1)%4+1] ]==1 )return true;
    else return false;
}


int main() {
    
    int aa;
    cin>>aa;
    rep(i,aa){
        if(i!=0)cout<<endl;
        rep(a,110) rep(b,110) fie[a][b]=0;
        cin>>n;
        
        int dir=0;
        int y=n-1,x=0;
        
        int c=0;
        while(1){
            if( turn(dir,y,x) ){
                c++;
                dir++;
                dir%=4;
            }
            else{
                c=0;
                fie[y][x]=1;
                y+=d[dir];
                x+=d[dir+1];
            }
            if(c==4){
                fie[y][x]=1;
                break;

            }
        }
        
        rep(i,n){
            rep(j,n){
                if(fie[i][j]==1)cout<<"#";
                else cout<<" ";
            }
            cout<<endl;
        }
    }
    
    return 0;
}



