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
#define ALL(a)  (a).begin(),(a).end()
#define pb push_back
#define sz size()

const double EPS = 1e-10;
const int INF = 100000000;


int main(){
    int data[2000]={};
    vi a;
    int m,n;
    cin>>m>>n;
    rep(i,m){
        int tm;
        cin>>tm;
        a.pb(tm);
    }
    
    rep(i,n){
        int tm;
        cin>>tm;
        rep(j,m){
            if(a[j]<=tm){
                data[j]++;
                break;
            }
        }
    }
    
    int v=-1,num=-1;
    rep(i,m){
        if(data[i]>v){
            v=data[i];
            num=i;
        }
    }
    cout<<num+1<<endl;
    
    return 0;
}

