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

char data[8][8];

void rot(){
	char tmp[8][8];
	for(int j=0;j<8;j++){
		for(int i=7;i>=0;i--){
			tmp[j][i]=data[7-i][j];
		}
	}

	rep(i,8)rep(j,8)data[i][j]=tmp[i][j];
}

int main(){
	rep(i,8)rep(j,8)cin>>data[i][j];

	rep(i,3){
		cout<<(i+1)*90<<endl;
		rot();

		rep(j,8){
			rep(k,8)cout<<data[j][k];
			cout<<endl;
		}
	}
	return 0;
}

