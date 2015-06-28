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
        if( isPrime(n) )cout<<"0"<<endl;
        else{
            int down,up;
            for(int i=n-1;i>=0;i--){
                if( isPrime(i) ){
                    down=i;
                    break;
                }
            }
            for(int i=n+1;;i++){
                if( isPrime(i) ){
                    up=i;
                    break;
                }
            }
            cout<<up-down<<endl;
        }
    }
}

