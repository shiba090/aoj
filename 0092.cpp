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
	int n;
	while(cin>>n){
		int maxi=-1;
		if(n==0)break;

		string data[2000];
		rep(i,n){
			cin>>data[i];
		}

		int dp[1010][1010]={};
		rep(i,n){
			rep(j,n){
				if(data[i][j]=='*')dp[i][j]=0;
				else{
					if( i-1>=0 && j-1>=0 )
						dp[i][j] = min( dp[i-1][j] , min( dp[i][j-1] , dp[i-1][j-1] ) ) +1;
					else dp[i][j]=1;
				}
				maxi=max( dp[i][j] , maxi );
			}
		}
		cout<<maxi<<endl;
	}
	return 0;
}

