#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb push_back
#define all(x) x.begin(),x.end()

int main(){
    int n;
    while(cin>>n){
        if(n==0)break;
        string data[10001];
        string ans[10001]={};
        rep(i,n) cin>>data[i];
        
        bool tate[10001]={false};
        for(int i=n-1;i>=0;i--){
            rep(j,data[i].size()){
                if(data[i][j]=='.'){
                    if(tate[j]==true){
                        if(0<i && data[i-1][j]=='.' && data[i][j+1]=='.')ans[i]+='|';
                        else{
                            ans[i]+='+';
                            tate[j]=true;
                            for(int k=j+1;k<data[i].size();k++) tate[k]=false;
                        }
                    }
                    else if(j<data[i].size()-1 && data[i][j+1]!='.'){
                        tate[j]=true;
                        for(int k=j+1;k<data[i].size();k++) tate[k]=false;
                        ans[i]+='+';
                    }
                    else ans[i]+=' ';
                }
                else ans[i]+=data[i][j];
            }
        }
        for(int i=0;i<n;i++)cout<<ans[i]<<endl;
    }
    
    return 0;
}


