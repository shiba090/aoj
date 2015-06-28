#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

int num[14]={};

bool DO(int n){
	int tmp[14]={};
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(num[i]==num[j])tmp[i]++;
		}
	}

	bool flag=true;
	for(int i=1;i<=n;i++)if(num[i]!=tmp[i])flag=false;
	if(flag)return true;
	for(int i=1;i<=n;i++)num[i]=tmp[i];
	return false;
}

int main(){
	int n;
	while(cin>>n){
		if(n==0)break;
		int c=0;
		int ans;
		rep(i,n)cin>>num[i+1];

		while(1){
			c++;
			if( DO(n) ){
				ans=c;
				break;
			}
		}
		cout<<ans-1<<endl;
		for(int i=1;i<=n;i++){
			if(i!=1)cout<<" ";
			cout<<num[i];
		}
		cout<<endl;

	}
}

