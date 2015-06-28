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

int data[100]={};
int mini;
int n;
int SUM;


void dfs(int num,int sum){
    if(num>=n){
        mini=min(mini,abs(SUM-sum-sum));
        return ;
    }
    
    dfs(num+1,sum+data[num]);
    dfs(num+1,sum);
}


int main() {
    while(cin>>n){
        if(n==0)break;
        
        SUM=0;
        mini=99999999;
        rep(i,100) data[i]=0;
        
        rep(i,n){
            cin>>data[i];
            SUM+=data[i];
        }
        
        dfs(0,0);
        cout<<mini<<endl;
    }
    
    return 0;
}


