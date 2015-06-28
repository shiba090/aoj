#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#ifdef Debug
#define dump(x)  cerr << #x << " = " << (x) << endl
#else
#define dump(x)
#endif


int par[10000];
int Rank[10000];

void init(int n){
    rep(i,n){
        par[i]=i;
        Rank[i]=0;
    }
}

int find(int x){
    if(par[x]==x) {
        return x;
    }else{
        return par[x]=find(par[x]);
    }
}

void unite(int x,int y){
    x=find(x);
    y=find(y);
    if(x==y) return;
    
    if(Rank[x]<Rank[y]){
        par[x]=y;
    }else{
        par[y]=x;
        if(Rank[x]==Rank[y])Rank[x]++;
    }
}




int main(){
	int n;
	while(cin>>n){
		if(n==0)break;
		pii data[110][110]={};
		rep(i,n)
			rep(j,n)
				cin>>data[i][j].first>>data[i][j].second;

		init(n*n);

		rep(i,n){
			rep(j,n){
				unite(n*i+j,n*data[i][j].second+data[i][j].first);
			}
		}
		bool used[10000]={};
		int sum=0;
		rep(i,n*n){
			int aa=find(i);
			if( used[ aa ]==false ){
				sum++;
				used[aa]=true;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}

