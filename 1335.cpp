#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long int ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb push_back

int n,k,s;
ll ans;

//9 3 23
void dfs(int sum,int floor,int bef){
    if(floor==k-1){
        if(0<s-sum && bef<s-sum && s-sum<=n){ans++;}
        return ;
    }
    for(int i=bef+1;i<=n;i++){
        dfs(sum+i,floor+1,i);
    }
}


int main(){
    
    while(cin>>n>>k>>s){
        ans=0;
        if(n==0 && k==0 && s==0)break;
        dfs(0,0,0);
        cout<<ans<<endl;
    }
    return 0;
}

