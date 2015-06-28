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

int main(){
    int d,x,y;
    cin>>d;
    
    cin>>x;
    char a[20];
    int p[20];
    rep(i,x)cin>>a[i]>>p[i];
    
    cin>>y;
    string bc[20];
    int q[20];
    rep(i,y)cin>>bc[i]>>q[i];

    
    int dp[50][50]={};
    rep(i,x){
        rep(j,d){
            dp[i+1][j]=max(dp[i+1][j],dp[i][j]);
            if(a[i]=='D' && j+1<=d)
                dp[i+1][j+1]=max(dp[i+1][j+1],dp[i][j]+p[i]);
        }
    }
    for(int i=0;i<y;i++){
        rep(j,d){
            dp[x+i+1][j]=max(dp[x+i+1][j],dp[x+i][j]);
            if(bc[i]=="DD" && j+2<=d)
                dp[x+i+1][j+2]=max(dp[x+i+2][j+1],dp[x+i][j]+q[i]);
        }
    }
    
    int maxi=0;
    rep(i,20){
        rep(j,20){
            maxi=max(dp[i][j],maxi);
        }
    }
    cout<<maxi<<endl;
    
    return 0;
}

