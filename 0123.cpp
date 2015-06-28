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
    string hoge[]={"NA","E","D","C","B","A","AA","AAA"};
    double a,b;
    while(cin>>a>>b){
        int s=-1,x=-1;
        
        if(a<70.0)s=0;
        if(a<55.0)s=1;
        if(a<50.0)s=2;
        if(a<43.0)s=3;
        if(a<40.0)s=4;
        if(a<37.5)s=5;
        if(a<35.5)s=6;
        
        if(b<148.0)x=0;
        if(b<116.0)x=1;
        if(b<105.0)x=2;
        if(b<89.0)x=3;
        if(b<83.0)x=4;
        if(b<77.0)x=5;
        if(b<71.0)x=6;

        cout<<hoge[min(s,x)+1]<<endl;
    }

    
    return 0;
}

