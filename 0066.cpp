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
	string s;
	while(cin>>s){
		rep(i,3){
			if(  s[i*3]!='s' &&  s[i*3+0]==s[i*3+1] && s[i*3+1]==s[i*3+2] ){
				cout<<s[i*3]<<endl;
				goto next;
			}
		}
		rep(i,3){
			if(  s[i]!='s' &&  s[i]==s[i+3] && s[i+3]==s[i+6] ){
				cout<<s[i]<<endl;
				goto next;
			}
		}
		if( s[4]!='s' ){
			if(s[0]==s[4] && s[4]==s[8]){
				cout<<s[4]<<endl;
				goto next;
			}
			if(s[2]==s[4] && s[4]==s[6]){
				cout<<s[4]<<endl;
				goto next;
			}
		}

		cout<<'d'<<endl;
next:;
	}
	return 0;
}

