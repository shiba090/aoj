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


vi solvePrime(int n){
    vi ret;
    int c=0;
    for(int i=n+1;;i++){
        if(isPrime(i)){
            ret.pb(i);
            c++;
        }
        if(c>=101)break;
    }
    return ret;
}



int main(){
    int n,p;
    while(cin>>n>>p){
        if(n==-1 && p==-1)break;
        
        vi prime;
        prime=solvePrime(n);
        
        vi result;
        
        int len=prime.size();
        rep(i,len){
            for(int j=i;j<len;j++){
                result.pb(prime[i]+prime[j]);
            }
        }
        sort(all(result));
//        rep(i,len)cout<<result[i]<<endl;
        
        cout<<result[p-1]<<endl;
    }

    
    return 0;
}

