#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back


bool solve(string s){
	char bef=s[0];
	for(int i=1;i<(int)s.size();i++){
		if(s[i]=='A')if( bef!='B' && bef!='D' )return false;
		if(s[i]=='B')if( bef!='A' && bef!='C' && bef!='E' )return false;
		if(s[i]=='C')if( bef!='B' && bef!='F' )return false;
		if(s[i]=='D')if( bef!='A' && bef!='E' && bef!='G' )return false;
		if(s[i]=='E')if( bef!='B' && bef!='D' && bef!='F' && bef!='H' )return false;
		if(s[i]=='F')if( bef!='C' && bef!='E' && bef!='I' )return false;
		if(s[i]=='G')if( bef!='D' && bef!='H' )return false;
		if(s[i]=='H')if( bef!='E' && bef!='G' && bef!='I' )return false;
		if(s[i]=='I')if( bef!='F' && bef!='H' )return false;
		bef=s[i];
	}
	return true;
}

int main(){
	rep(i,1000){
		string s;
		cin>>s;
		if( solve(s) )cout<<s<<endl;
	}
	return 0;

}

