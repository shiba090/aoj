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
        vector<pair<char,int> > a;
        rep(i,n){
            char t;
            cin>>t;
            
            int s=0;
            rep(j,n-1){
                int tr;
                cin>>tr;
                if(tr==0)s+=100;
                if(tr==1)s-=1;
            }
            a.pb(pii(t,s));
        }
        for(int i=0;i<n;i++){
            for(int j=n-1;j>i;j--){
                if( a[j-1].second < a[j].second )swap(a[j-1],a[j]);
            }
        }
        
        rep(i,n){
            cout<<a[i].first<<endl;
        }
    }

    return 0;
}









