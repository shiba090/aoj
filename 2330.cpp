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
	int c=0;
	while(1){
		n=ceil(n/3.0);
		c++;
		if(n==1)break;
	}

	cout<<c<<endl;

	return 0;
}


