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

int main() {
    int n,m,a;
    while(cin>>n>>m>>a){
        if(n==0 && m==0 && a==0)break;
        
        int h[2000]={},p[2000]={},q[2000]={};
        rep(i,m){
            cin>>h[i]>>p[i]>>q[i];
        }
        
        for(int i=0;i<m-1;i++){
            for(int j=i+1;j<m;j++){
                if(h[i]<h[j]){
                    swap(h[i],h[j]);
                    swap(p[i],p[j]);
                    swap(q[i],q[j]);
                }
            }
        }
        
        int now=a;
        for(int i=0;i<m;i++){
            if(p[i]==now){
                now=q[i];
            }
            else if(q[i]==now){
                now=p[i];
            }
        }
        
        cout<<now<<endl;
        
        
        
        
    }
    
    return 0;
}


