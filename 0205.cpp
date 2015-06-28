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
    int a[5];
    while(cin>>a[0]){
        if(a[0]==0)break;
        for(int i=1;i<5;i++){
            cin>>a[i];
        }
        
        rep(i,5){
            bool win=true;
            bool lose=true;
            rep(j,5){
                if(i!=j){
                    if(a[j]==(a[i]+1)%3+1)win=false;
                    if(a[j]==(a[i])%3+1)lose=false;
                }
            }
            bool ai=true;
            for(int i=1;i<5;i++){
                if(a[i]!=a[i-1])ai=false;
            }
            if( (!win && !lose) || ai){
                cout<<"3"<<endl;
            }
            else if(win)cout<<"1"<<endl;
            else if(lose)cout<<"2"<<endl;

        }
        
    }
}


