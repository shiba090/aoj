#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

bool isPrime(int n){
    if(n==1)return false;
    if(n==2)return true;
    
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
}


int main(){
    int n;
    while(cin>>n){
        if(n==0)break;
        
        vi pri;
        for(int i=2;i<n;i++){
            if( isPrime(i) )pri.pb(i);
        }
        int c=0;
        for(int i=0;i<pri.size();i++){
            if( n-pri[i]>0 && pri[i]<=n-pri[i] && isPrime( n-pri[i] ) ){
                c++;
            }
        }
        cout<<c<<endl;
    }
}

