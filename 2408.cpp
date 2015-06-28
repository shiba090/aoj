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

int main(){
	int n,k;
	int r;

	while(cin>>n>>k){
		vector< vector<int> > bunny(60);

		bool edge[60][60];
		rep(i,60)rep(j,60)edge[i][j]=false;

		rep(i,k){
			int m;
			cin>>m;
			rep(j,m){	
				int b;
				cin>>b;			
				bunny[i].pb(b);
			}
		}
		cin>>r;
		rep(i,r){
			int a,b;
			cin>>a>>b;
			edge[a][b] = edge[b][a] = true;
		}

		int sum=0;

		rep(i,k){
			rep(j,bunny[i].size()){
				rep(k,bunny[i].size()){
					if( edge[ bunny[i][j] ][ bunny[i][k] ]==true ){
						sum++;
						break;
					}
				}
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}

