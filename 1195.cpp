#include <vector>
#include <iostream>
using namespace std;vector<string> A;bool ap[30];string s;int S;void dfs(int n,char c,string now){if(n==s.size()){S++;A.push_back(now);return ;}    int C=c-'a';if(ap[C]==true || c=='a'){bool bac=ap[C];ap[C]=true;dfs(n+1,s[n+1],now+c);ap[C]=bac;}if(ap[C+1]==false && c!='z'){bool bac=ap[C+1];ap[C+1]=true;dfs(n+1,s[n+1],now+(char)(c+1));ap[C+1]=bac;}}int main(){while(1){while(A.size())A.pop_back();S=0;cin>>s;if(s=="#")break;dfs(0,s[0],"");cout<<S<<endl;if(S<=10){for(int i=0;i<S;i++){cout<<A[i]<<endl;}}else{for(int i=0;i<5;i++){cout<<A[i]<<endl;}for(int i=A.size()-5;i<A.size();i++){cout<<A[i]<<endl;}}}return 0;}

