#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back


int f(int x,int y,int z){
	int w=x+y+z;
	if(w<=60)return 600;
	if(w<=80)return 800;
	if(w<=100)return 1000;
	if(w<=120)return 1200;
	if(w<=140)return 1400;
	if(w<=160)return 1600;
	return 0;

}

int g(int w){
	if(w<=2)return 600;
	if(w<=5)return 800;
	if(w<=10)return 1000;
	if(w<=15)return 1200;
	if(w<=20)return 1400;
	if(w<=25)return 1600;
	return 0;
}

int main(){
	int n;
	while(cin>>n){
		if(n==0)break;
		int sum=0;
		rep(i,n){
			int x,y,z,w;
			cin>>x>>y>>z>>w;
			int F=f(x,y,z),G=g(w);
			if(F==0 || G==0)sum+=0;
			else sum+=max(F,G);
		}
		cout<<sum<<endl;
	}
}

