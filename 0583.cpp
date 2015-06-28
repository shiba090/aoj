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


bool solve(int in[3],int a){
    rep(i,n){
        if(in[i]%a!=0)return false;
    }
    return true;
}


int main() {
    cin>>n;
    int in[3]={};
    
    int ma=-1;
    rep(i,n){
        cin>>in[i];
        ma=max(ma,in[i]);
    }
    
    for(int i=1;i<=ma;i++){
        if( solve(in,i) ){
            cout<<i<<endl;
        }
    }
    
    return 0;
}

