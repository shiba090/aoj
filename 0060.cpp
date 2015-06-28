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
	int a,b,c;
	while(cin>>a>>b>>c){
		bool num[11]={};
		num[a]=num[b]=num[c]=true;

		int now=a+b;
		int sum=0;
		for(int i=1;i<=10;i++){
			if(num[i]==false && now+i<=20)sum++;
		}
		if(sum>=4)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

