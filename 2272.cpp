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
	int h,w;
	cin>>h>>w;
	string data[100];
	rep(i,h){
		cin>>data[i];
	}


	int dp[100][100];
	rep(i,100)rep(j,100)dp[i][j]=999999999;
	dp[0][0]=data[0][0]-'0';

	rep(i,h){
		rep(j,w){
			if( i+1<h ) dp[i+1][j]=min( dp[i][j]+data[i+1][j]-'0' , dp[i+1][j] );
			if( j+1<w ) dp[i][j+1]=min( dp[i][j]+data[i][j+1]-'0' , dp[i][j+1] );
		}
	}
	cout<<dp[h-1][w-1]<<endl;
	return 0;
}

