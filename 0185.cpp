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

bool isPrime(int n){
    if(n==2)return true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
}

bool data[1000000]={true,true};

vi makeEra(){

    for(int i=2;i<1000000;i++){
        if(data[i]==false){
            if( isPrime(i) ){
                for(int j=2;;j++){
                    if(i*j<1000000)
                        data[i*j]=true;
                    else break;
                }
            }
        }
    }
    vi ret;
    rep(i,1000000){
        if(data[i]==false){
            ret.pb(i);
        }
    }
    return ret;
}


int main() {
    vi era=makeEra();
    
    int len=era.size();
    
    int n;
    while(cin>>n){
        if(n==0)break;
        int sum=0;
        rep(i,len){
            if(n-era[i]>=0 && n-era[i]<1000000 && data[n-era[i]]==false && era[i]<=n-era[i]){
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    
    return 0;
}









