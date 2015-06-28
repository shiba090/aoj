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
    int n;
    while(cin>>n){
        bool data[400000]={false};
        vector<int> ans;
        if(n==1)break;
        
        for(int i=2;i<=n;i++){
            if(n%i==0){
                if(i%7==1 || i%7==6){
                    if(data[i]==false){
                        ans.push_back(i);
                        for(int j=1;i*j<=300000;j++){
                            data[i*j]=true;
                        }
                    }
                }
            }
        }
        cout<<n<<": ";
        rep(i,ans.size()){
            cout<<ans[i];
            if(i!=ans.size()-1)cout<<" ";
            else cout<<endl;
        }
    }
    
    return 0;
}

