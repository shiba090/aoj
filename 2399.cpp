#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb push_back
#define all(x) x.begin(),x.end()

bool solve(vi user,vi a){
    bool ret=true;
    rep(i,a.size()){
        if(find(all(user),a[i])==user.end())ret=false;
    }
    return ret;
}


int main(){
    int n;
    while(cin>>n){
        vi user[1000];
        vi loss;
        if(n==0)break;
        rep(i,n){
            int z;
            cin>>z;
            rep(j,z){
                int tmp;
                cin>>tmp;
                user[i].pb(tmp);
            }
            sort(all(user[i]));
        }
        int k;
        cin>>k;
        rep(i,k){
            int tmp;
            cin>>tmp;
            loss.pb(tmp);
        }
        int count=0;
        int ans=-1;
        rep(i,n){
            if(solve(user[i],loss)){
                count++;
                ans=i;
            }
        }
        if(count==1){
            cout<<ans+1<<endl;
        }
        else cout<<"-1"<<endl;
        
    }
    return 0;
}


