#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back



vi delSpace(vi data){
    vi ret;
    
    rep(i,data.size()){
        if(data[i]!=0)ret.pb(data[i]);
    }
    return ret;
}


bool isOK(vi data){
    if(data[0]!=1)return false;
    for(int i=1;i<data.size();i++){
        if(data[i]!=data[i-1]+1)return false;
    }
    return true;
}


int main(){
    int n;
    while(cin>>n){
        int ans=0;
        vi data;

        if(n==0)break;
        
        rep(i,n){int a; cin>>a; data.pb(a);}
        
        while(true){
            if( isOK(data) || ans>10000 )break;
            
            rep(i,data.size()){
                data[i]--;
            }
            data.pb(data.size());
            
            data=delSpace(data);
            ans++;

        }
        
        if(ans>10000)cout<<"-1"<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}

