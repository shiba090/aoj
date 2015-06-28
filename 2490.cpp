#include "bits/stdc++.h"

using namespace std;


#define rep(i,n) for(int i=0;i<(int)(n);i++)

int main(){
	int n;
	cin>>n;
	int  now=0;
	bool f=false;
	rep(i,n){
		char ch;
		int a;
		cin>>ch>>a;
		if(ch=='(')now+=a;
		else if( ch==')' )now-=a;

		if(now<0){
			f=true;
		}
	}
	if(now!=0)f=true;

	if(f)cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
	return 0;
}

