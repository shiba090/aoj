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
        int ma=-1,mi=INF;
        if(n==0)break;
        rep(i,n){
            int sum=0;
            rep(j,5){
                int a;
                cin>>a;
                sum+=a;
            }
            ma=max(ma,sum);
            mi=min(mi,sum);
        }
        cout<<ma<<" "<<mi<<endl;
        
    }
    return 0;
}

