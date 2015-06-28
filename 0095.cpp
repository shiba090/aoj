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
    int maxnum=-1,maxi=-1;
    rep(i,n){
        int a,b;
        cin>>a>>b;
        if(b>maxi || (a<maxnum && maxi==b)){
            maxi=b;
            maxnum=a;
        }
    }
    cout<<maxnum<<" "<<maxi<<endl;
    
    return 0;
}

