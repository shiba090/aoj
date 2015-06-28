#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

bool era[10000001]={false};


void makeERA(){
    for(int i=2;i<1000001;i++){
        if(era[i]!=true)continue;
            int x=10000000/i;
            for(int j=2;j<=x;j++){
                    era[i*j]=false;
            }

    }
    era[2]=true;
}




int main(){
    for(int i=0;i<10000001;i++)era[i]=true;
    era[0]=false;era[1]=false;
    makeERA();
    
    int n;
    while(cin>>n){
        if(n==0)break;
        
        if(n%2==0)n--;
        for(int i=n;i>=8;i-=2){
            if(era[i-8]&&era[i-6]&&!era[i-4]&&era[i-2]&&era[i]){
                cout<<i<<endl;
                goto next;
            }
        }
        next:;
    }
    
    
    return 0;
}


