#include<iostream>

using namespace std;

int solve(int n){
	int kai[31]={};
	kai[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=3;j++){
			if(i-j>=0){
				kai[i]+=kai[i-j];
			}
		}
	}
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=kai[i];
	}
	return ((kai[n]+9)/10+364)/365;
}
int main(){

	while(1){
		int n;
		cin>>n;
		if(n==0)break;

		cout<<solve(n)<<endl;
	}
	return 0;
}

