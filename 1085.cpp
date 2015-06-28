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
    int n,s;
    while(cin>>n>>s){
        if(n==0 && s==0)break;
        
        vi in;
        rep(i,n){
            int a;
            cin>>a;
            in.pb(a);
        }
        
        
        sort(all(in));
        
        int sum=0;
        rep(i,n-1){
            for(int j=i+1;j<n;j++){
                if(in[i]+in[j]>s){
                    sum+=n-j;
                    break;
                }
            }
        }
        
        cout<<sum<<endl;
        
        
    }
    
    return 0;
}

