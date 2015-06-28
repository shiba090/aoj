#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <map>
#define INF 100000000

using namespace std;
typedef long long ll;

int n,m;

vector<int> real(int k,vector<int> c){
	vector<int> ret;
	int a=0,b=n;
	for(int i=0;i<2*n;i++){
		if(i%2==0){
			ret.push_back(c[a]);
			a++;
		}else{
			ret.push_back(c[b]);
			b++;
		}
	}
	return ret;
}

vector<int> cut(int k,vector<int> c){
	vector<int> ret;
	for(int i=k;i<2*n;i++){
		ret.push_back(c[i]);
	}
	for(int i=0;i<k;i++){
		ret.push_back(c[i]);
	}
	return ret;
}


int main(){
	vector<int> c;
	for(int i=0;i<200;i++){
		c.push_back(i);
	}
		cin>>n>>m;
	for(int i=0;i<m;i++){
		int k;
		cin>>k;
		if(k==0)c=real(k,c);
		else c=cut(k,c);
//	for(int i=0;i<n*2;i++)cout<<c[i]+1;cout<<endl;

	}
	for(int i=0;i<n*2;i++)cout<<c[i]+1<<endl;
	return 0;
}


