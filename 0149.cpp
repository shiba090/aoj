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

typedef vector<int> VI;
typedef pair<int,int> PII;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define ALL(a)  (a).begin(),(a).end()
#define PB push_back
#define sz size()

const double EPS = 1e-10;
const int INF = 100000000;

int main(){
    int l[10]={},r[10]={};
    double a,b;
    while(cin>>a>>b){
        if(a>=1.1)l[0]++;
        else if(a>=0.6)l[1]++;
        else if(a>=0.2)l[2]++;
        else l[3]++;

        if(b>=1.1)r[0]++;
        else if(b>=0.6)r[1]++;
        else if(b>=0.2)r[2]++;
        else r[3]++;

    }

    
    rep(i,4){
        cout<<l[i]<<" "<<r[i]<<endl;
    }
    return 0;
}

