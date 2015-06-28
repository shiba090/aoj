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

int n;
string f[20];
int w[20],s[20];

bool isOK(vi num){
    int cap=99999999;
    
    rep(i,num.size()){
        cap=min(cap-w[num[i]],s[num[i]]);
    }
    if(cap>=0)return true;
    else return false;
}

double solve(vi num){
    
    int up=0;
    rep(i,num.size()){
        up+=(i+1)*w[num[i]];
    }

    int div=0;
    rep(i,num.size()){
        div+=w[num[i]];
    }

    return (double)up/div;
}


int main() {
    
    while(cin>>n){
        if(n==0)break;
        
        vi num;
        rep(i,n){
            num.pb(i);
            cin>>f[i]>>w[i]>>s[i];
        }
        
        double Gmin=99999999;
        vi ans;
        do{
            if( isOK(num) ){
                double res=solve(num);
                
                
                if(Gmin>res){
                    Gmin=res;
                    ans=num;
                    
                }
            }
        }while( next_permutation(all(num)) );
        
        rep(i,n){
            cout<<f[ans[i]]<<endl;
        }
        
    }
    
    return 0;
}

