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


//a>b return true
bool diffStr(string a,string b){
	if(a.size()>b.size())return true;
	if(b.size()>a.size())return false;

	return (a>b);
}


int main(){
	int w,h;
	while(cin>>w>>h){
		if(w==0 && h==0)break;

		char data[100][100];
		rep(i,h){
			rep(j,w){
				cin>>data[i][j];
			}
		}

		string dp[100][100];
		for(int i=h-1;i>=0;i--){
			for(int j=w-1;j>=0;j--){
				if( isalpha(data[i][j]) )dp[i][j]="";
				else{
					string r="",u="";

					if( i+1<h && j+1<w ){
						r=string(1,data[i][j])+dp[i+1][j];
						u=string(1,data[i][j])+dp[i][j+1];

						if( diffStr(r,u) )	dp[i][j]=r;
						else		dp[i][j]=u;

					}else if( i+1<h ){
						r=string(1,data[i][j])+dp[i+1][j];
						dp[i][j]=r;

					}else if( j+1<w ){
						u=string(1,data[i][j])+dp[i][j+1];
						dp[i][j]=u;

					}else{
						dp[i][j]=data[i][j];
					}
				}
			}
		}
		string ans="0";
		rep(i,h){
			rep(j,w){
				if(dp[i][j][0]=='0'){
					int c=0;
					rep(k,dp[i][j].size()){
						if( dp[i][j][k]=='0' ){
							c++;
						}
						else{
							break;
						}
					}
					dp[i][j]=dp[i][j].substr(c,dp[i][j].size()-c);
				}
				if( diffStr(dp[i][j],ans) )ans=dp[i][j];
			}
		}
		cout<<ans<<endl;
	}
}

