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

int main(){
	string s;
	while(cin>>s){
		if(s=="#")break;
		vector<string> data;
		rep(i,s.size()){
			if(s[i]=='w'){
				data.pb( s.substr(i,4) );
				i+=3;
			}else if(s[i]=='n'){
				data.pb( s.substr(i,5) );
				i+=4;
			}else return 0;
		}

		int up,down=1;
		if( data[data.size()-1]=="north" )up=0;
		else up=90;

		for(int i=data.size()-2,c=1;i>=0;i--,c++){

			if(data[i]=="north"){
				up=up*((1<<c)/down)-90;
				down=1<<c;
			}
			else{
				up=up*((1<<c)/down)+90;
				down=1<<c;
			}
		}
		while( up%2==0 && down%2==0 ){
			up/=2;down/=2;
		}
		cout<<up;
		if(down!=1){
			cout<<"/"<<down<<endl;
		}
		else cout<<endl;

	}
	return 0;
}

