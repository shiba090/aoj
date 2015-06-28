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
    int n;
    while(cin>>n){
        int num[300][3]={};
        rep(i,n){
            rep(j,3){
                cin>>num[i][j];
            }
        }
        
        int point[300]={};
        rep(i,3){
            rep(j,n){
                int flag=true;
                rep(k,n){
                    if(j!=k && num[j][i]==num[k][i]){
                        flag=false;
                    }
                }
                if(flag)point[j]+=num[j][i];
            }
        }
        
        rep(i,n){
            cout<<point[i]<<endl;
        }
    }
    
    return 0;
}


