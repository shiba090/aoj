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
        
        
        string name[30];
        int score[30]={};
        int m[30];
        vi in[30]={};

        rep(i,n){
            cin>>name[i]>>m[i];
        
            rep(j,m[i]){
                int a;
                cin>>a;
                in[i].pb(a);
            }
        }
        
        
        int time[50]={};
        
        rep(i,n){
            rep(j,m[i]){
                time[ in[i][j] ]++;
            }
        }
        
        rep(i,n){
            rep(j,m[i]){
                score[i]+=n-time[in[i][j]]+1;
            }
        }

        int minscore=99999999;
        string minname="";
        rep(i,n){
            if(minscore>score[i] || (minscore==score[i] && minname>name[i] )){
                minscore=score[i];
                minname=name[i];
            }
        }
        cout<<minscore<<" "<<minname<<endl;

    }
    
    return 0;
}



