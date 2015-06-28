#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdio>
#include<string>
#include<cmath>
typedef long long int ll;
#define VI vector<int>

#define rep(i,a) for(int i=0;i<(a);i++)

int n,m;

using namespace std;


int main(){
	int n;
	cin>>n;
	ll sum=0;
	rep(i,n){
		int tmp;
		cin>>tmp;
		sum+=tmp;
	}
	if(n==0)cout<<"0"<<endl;
	else cout<<(int)(sum/n)<<endl;

	return 0;
}

