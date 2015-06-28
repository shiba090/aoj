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

bool cmp(char a[2],char b){
	if(tolower(a[0])==tolower(b))return true;
	else return false;
}


int main(){
	int n,h;
	cin>>n>>h;
	vector<string> s;
	vector<int> t;
	rep(i,n){
		string a;
		int b;
		cin>>a>>b;
		s.pb(a);
		t.pb(b);
	}

	int x=0;
	int times=0;

	rep(i,n){
		int c=0;
		int wrong=0;
		int len=s[i].size();
		while(c<len){
			string str="";
			rep(j,c)str+='_';
			str+=s[i].substr(c,len-c);
			printf("? %s\n", str.c_str() ); fflush(stdout);

			char ch[2];
 			scanf("%s", ch);
			times++;
 			if( cmp(ch,s[i][c]) ){
 				c++;
 				x++;
 			}else {wrong++;}
			if(wrong>t[i]){
 				h--;
 				break;
 			}
		}
		if(h<=0){
			printf("! Game Over\n"); fflush(stdout);
			return 0;
		}
	}
	int ans=x*1000/times;
	printf("! Game Clear %d.%d\n",ans/10,ans%10) ; fflush(stdout);
	return 0;
}

