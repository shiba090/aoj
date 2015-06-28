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
    int l;
    while(cin>>l){
        if(l==0)break;
        
        int sum=0;
        int ans=999999;
        rep(i,12){
            int a,b;
            cin>>a>>b;
            sum+=a-b;
            if(l<=sum)ans=min(ans,i+1);
        }
        
        if(ans==999999)cout<<"NA"<<endl;
        else cout<<ans<<endl;
    }
}


