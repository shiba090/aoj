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
	int a,b;
	while(cin>>a>>b){
		int n=0;
		int edge[101][101];
		rep(i,101)rep(j,101)edge[i][j]=0;
		n=max(n,max(a,b));
		edge[a][b]=edge[b][a]=edge[a][b]+1;
		while(cin>>a>>b){
			n=max(n,max(a,b));
			edge[a][b]=edge[b][a]=edge[a][b]+1;
			if(a==0&&b==0)break;
		}

		int sum=0;
		for(int i=1;i<=n;i++){
			sum+=edge[1][i];
		}
		if(sum%2==0){
			cout<<"NG"<<endl;
			goto next;
		}

		sum=0;
		for(int i=1;i<=n;i++){
			sum+=edge[2][i];
		}
		if(sum%2==0){
			cout<<"NG"<<endl;
			goto next;
		}

		for(int i=3;i<=n;i++){
			sum=0;
			for(int j=1;j<=n;j++){
				sum+=edge[i][j];
			}
			if(sum%2!=0){
				cout<<"NG"<<endl;
				goto next;
			}
		}

		cout<<"OK"<<endl;
		next:;
	}
	return 0;
}

