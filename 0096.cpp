#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

int main(){
	map<int,int> mp;
	vi wa;

	rep(i,1001){
		rep(j,1001){
			if(mp[i+j]==0)wa.pb(i+j);
			mp[i+j]++;
		}
	}



	int n;
	while(cin>>n){
		int len=wa.size();
		int sum=0;
		rep(i,len){
			if(wa[i]>n)break;
			sum+=mp[wa[i]]*mp[n-wa[i]];
		}
		cout<<sum<<endl;
	}
	return 0;
}

