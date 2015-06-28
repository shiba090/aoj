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
	int n;
	cin>>n;
	int a[4];
	cin>>a[0]>>a[1]>>a[2]>>a[3];

	int minval=999999999;

	int x[4],y[4];
	for(int i=1;i<=n;i++){
		rep(j,4){
			x[j]=(a[j]-1)%i;
			y[j]=(a[j]-1)/i;
		}
		int val=abs(x[0]-x[1])+abs(y[0]-y[1]) + abs(x[2]-x[3])+abs(y[2]-y[3]);
		if(val<minval){
			minval=val;
		}

	}
	cout<<minval<<endl;
	return 0;
}


