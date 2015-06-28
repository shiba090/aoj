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
    int q1,b,c1,c2,q2;
    while(cin>>q1){
        if(q1==0)break;
        cin>>b>>c1>>c2>>q2;
        
        int x=-1,y=-1;
        for(int i=q2;i>0;i--){
            int niku=( b-(i*c1) )/c2;
            if(niku+i>=q1 && i*c1+niku*c2<=b &&niku>=0){
                x=i;y=niku;
                break;
            }
        }
        
        if( x==-1 && y==-1 )cout<<"NA"<<endl;
        else cout<<x<<" "<<y<<endl;
    }

    return 0;
}









