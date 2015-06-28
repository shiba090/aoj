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
    int n,k;
    while(cin>>n>>k){
        if(n==0 && k==0)break;
        
        int s[200]={};
        rep(i,k){
            cin>>s[i];
        }
        rep(i,n){
            rep(j,k){
                int a;
                cin>>a;
                s[j]-=a;
            }
        }
        rep(i,k){
            if(s[i]<0){
                cout<<"No"<<endl;
                goto next;
            }
        }
        cout<<"Yes"<<endl;
        next:;
        
    }
    return 0;
}


