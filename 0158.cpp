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
    int n;
    while(cin>>n){
        int count=0;
        if(n==0)break;
        while(n!=1){
            if(n%2==0)n/=2;
            else n=3*n+1;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}

