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
       
        vector<pair<int,string> > in;
        rep(i,n){
            string s;
            cin>>s;
            int sum=0;
            rep(i,4){
                int a,b;
                cin>>a>>b;
                sum+=a*60+b;
            }
            in.pb(pair<int,string>(sum,s));
        }
        sort(all(in));
        cout<<in[0].second<<endl;
        cout<<in[1].second<<endl;
        cout<<in[(int)in.size()-2].second<<endl;
    }
    
    return 0;
}

