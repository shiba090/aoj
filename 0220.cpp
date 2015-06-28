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
    double n;
    while(cin>>n){
        if(n<0)break;
        int ans[8]={};
        int ans_[4]={};
        for(int i=7;i>=0;i--){
            if(n>=(1<<i)){
                ans[i]=1;
                n-=(1<<i);
            }
            else ans[i]=0;
        }
        for(int i=1;i<=4;i++){
            if(n>=(double)1/(1<<i)){
                ans_[i-1]=1;

                n-=(double)1/(1<<i);
            }
            else ans_[i-1]=0;
        }
        if(n==0){
            for(int i=7;i>=0;i--){
                cout<<ans[i];
            }
            cout<<".";
            rep(i,4){
                cout<<ans_[i];
            }
            cout<<endl;
        }
        else{
            cout<<"NA"<<endl;
        }
        
    }
    
}


