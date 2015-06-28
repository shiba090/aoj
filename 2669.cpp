#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int c;
int main(){
	string s;
	cin>>s;
	bool f=0;
	rep(i,s.size()){
		if(s[i]=='A')f=1;
		if(s[i]=='Z')if(f){c++;f=0;}
	}
	if(!c)cout<<"-1";
	rep(i,c)cout<<"AZ";cout<<endl;
	return 0;
}

