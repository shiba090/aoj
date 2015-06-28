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

ll solve(int y,int m,int d){
    int x[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int month[12]={31};
    
    for(int i=1;i<12;i++){
        month[i]=month[i-1]+x[i];
    }
    
    ll ret=0;
    ret+=(y-1)*365;
    ret+=(y-1)/4-(y-1)/100+(y-1)/400;
    
    if(m!=1)ret+=month[m-2];
    
    ret+=d-1;
    
    if( ( (y%4==0 && y%100!=0) || y%400==0 ) && m>2 )ret++;
    
    return ret;
}


int main() {
    int y1,m1,d1,y2,m2,d2;
    while(cin>>y1>>m1>>d1>>y2>>m2>>d2){
        if(y1==-1)break;
        cout<<solve(y2,m2,d2)-solve(y1,m1,d1)<<endl;
    }
    
    return 0;
}

