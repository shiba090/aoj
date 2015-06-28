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
    while(cin>>n){
        if(n==0)break;
        int num[2000],p[2000],q[2000],r[2000];
        rep(i,n){
            cin>>num[i]>>p[i]>>q[i]>>r[i];
        }
        int P,Q,R,C;
        cin>>P>>Q>>R>>C;

        bool flag=true;
        rep(i,n){
            if(p[i]<=P && q[i]<=Q && r[i]<=R && p[i]*4+q[i]*9+r[i]*4<=C){
                flag=false;
                cout<<num[i]<<endl;
            }
        }
        if(flag)cout<<"NA"<<endl;
    }
    return 0;
}





