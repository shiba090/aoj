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
#define sz size()

const double EPS = 1e-10;
const int INF = 100000000;

int main(){
    int n;
    while(cin>>n){
        if(n==0)break;
        vector<pii> data;
        rep(i,n){
            int a,b;
            cin>>a>>b;
            data.pb(pii(b,a));
        }
        sort(all(data));
        int now=0;
        bool flag=false;
        rep(i,n){
            now+=data[i].second;
            if(now>data[i].first)flag=true;
        }
        if(flag)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}


