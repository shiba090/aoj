#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back


int main(){
    int n;
    while(cin>>n){
        if(n==0)break;
        
        vi in;
        rep(i,n){
            int a;
            cin>>a;
            in.pb(a);
        }
        
        sort(all(in));
        
        vi tmp;
        tmp.clear();
        
        vector<string> ans;
        
        rep(i,in.size()){
            if(i+1<in.size() && in[i]+1==in[i+1]){
                tmp.pb(in[i]);
            }
            else{
                if(tmp.size()==0){
                    stringstream ss;
                    ss<<in[i];
                    ans.pb(ss.str());
                }
                else{
                    stringstream ss;
                    ss<<tmp[0];
                    ss<<"-";
                    ss<<in[i];
                    ans.pb(ss.str());
                    tmp.clear();
                }
            }
        }
        rep(i,ans.size()){
            cout<<ans[i];
            if(i<ans.size()-1)cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}



