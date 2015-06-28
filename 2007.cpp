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
	bool flag=false;
	int n;
	while(cin>>n){
		if(n==0)break;
		if(flag)cout<<endl;
		flag=true;
		int m=0;
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		m+=a*10 + b*50 + c*100 + d*500;

		m=m-n;

		int w,x,y,z;
		z=m/500;
		y=m%500/100;
		x=m%100/50;
		w=m%50/10;

		w=max(0,a-w);
		x=max(0,b-x);
		y=max(0,c-y);
		z=max(0,d-z);
		if(w)cout<<"10 "<<w<<endl;
		if(x)cout<<"50 "<<x<<endl;
		if(y)cout<<"100 "<<y<<endl;
		if(z)cout<<"500 "<<z<<endl;
	}
	return 0;
}

