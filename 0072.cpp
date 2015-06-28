#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define  INF 999999999

#ifdef Debug
#define dump(x)  cerr << #x << " = " << (x) << endl
#else
#define dump(x)
#endif

bool used[101];
int mincost[101];
int edge[101][101];

int main(){
	int n,m;
	while(cin>>n){
		if(n==0)break;
		rep(i,101)rep(j,101)edge[i][j]=INF;
		cin>>m;
		rep(i,m){
			int a,b,c;
			char ch;
			cin>>a>>ch>>b>>ch>>c;
			edge[a][b]=edge[b][a]=c/100-1;
		}
		rep(i,n){
			mincost[i]=INF;
			used[i]=false;
		}
		mincost[0]=0;
		int res=0;

		while(1){
			int v=-1;
			rep(u,n){
				if(used[u]==false && ( v==-1 || mincost[u]<mincost[v] ))
					v=u;
			}
			if(v==-1)break;
			used[v]=true;
			res+=mincost[v];

			rep(u,n){
				mincost[u]=min(mincost[u],edge[v][u]);
			}
		}
		cout<<res<<endl;
	}
	return 0;
}


