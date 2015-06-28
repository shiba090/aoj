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

char change(char c){
	if(c>='D')return (char)(c-3);
	else return 'Z'+(c-'C');
}

int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		s[i]=change(s[i]);
	}
	cout<<s<<endl;
	return 0;
}


