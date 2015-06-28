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
    int t;
    cin>>t;
    rep(times,t){
        int n;
        cin>>n;
        int up=0;
        int down=0;
        
        int data[2000]={};
        rep(i,n){
            cin>>data[i];
        }
        
        for(int i=1;i<n;i++){
            up=max(data[i]-data[i-1],up);
            down=max(data[i-1]-data[i],down);
        }
        cout<<up<<" "<<down<<endl;
    }
    return 0;
}


