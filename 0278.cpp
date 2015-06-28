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
    int sum=0;
    rep(i,n){
        int x,y,b,p;
        cin>>x>>y>>b>>p;
        
        if(b>=5 && p>=2){
            sum=(b*x+p*y)*0.8;
        }
        else{
            sum=min(b*x+p*y, (int)( (max(5,b)*x + max(2,p)*y)*0.8 ) );
        }
        cout<<sum<<endl;
    }
    
    return 0;
}





