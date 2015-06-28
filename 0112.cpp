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
        
        vi data;
        rep(i,n){
            int a;
            cin>>a;
            data.pb(a);
        }
        sort(all(data));

        ll sum=0;
        int now=0;
        for(int i=0;i<data.size()-1;i++){
            now=now+data[i];
            sum+=now;
        }
        cout<<sum<<endl;
    }
    
    return 0;
}


