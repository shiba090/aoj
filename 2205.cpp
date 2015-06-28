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


bool check(string s,string a){
    rep(i,a.size()){
        if(a[i]=='*')s[i]='*';
    }
    if(a==s)return true;
    else return false;
}

int main() {
    int n,m;
    while(cin>>n>>m){
        if(n==0)break;
        string hit[200]={};
        int v[200]={};
        rep(i,n){
            cin>>hit[i];
            cin>>v[i];
        }
        
        string mine[2000]={};
        rep(i,m) cin>>mine[i];
        
        ll sum=0;
        rep(i,m){
            rep(j,n){
                if(check(mine[i],hit[j])){
                    sum+=v[j];
                    break;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}


