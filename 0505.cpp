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
    int n,m;
    
    while(cin>>n>>m){
        if(n==0 && m==0)break;
        
        int data[200]={};
        rep(i,n){
            rep(j,m){
                int x;
                cin>>x;
                data[j]+=x;
            }
        }
        
        int num[200]={};
        rep(i,m)num[i]=i;
        
        rep(i,m){
            for(int j=m-1;j>i;j--){
                if(data[j]>data[j-1]){
                    swap(data[j],data[j-1]);
                    swap(num[j],num[j-1]);
                }
            }
        }
        rep(i,m){
            cout<<num[i]+1;
            if(i!=m-1)cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}





