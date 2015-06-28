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
    int b,r,g,c,s,t;
    while(cin>>b>>r>>g>>c>>s>>t){
        if(b==0 && r==0 && g==0 && c==0 &&s==0 && t==0)break;
        int sum=100;

        sum-=3*( t-(s + b*5 + r*3) );
        sum-=2*( b*5 + r*3 );
        
        sum+=b*15 + r*15 + g*7 + c*2;
        sum+=b*5*15 + r*3*15;
        
        cout<<sum<<endl;
    }
    return 0;
}


