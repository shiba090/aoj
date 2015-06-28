#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb push_back

int data[200][200]={};
int t,n;


int main(){
    while(cin>>t>>n){
        if(t==0 && n==0)break;
        
        rep(i,200)rep(j,200)data[i][j]=100;
        
        rep(i,n){
            int x,y;
            cin>>x>>y;
            x+=100;y+=100;
            data[y][x]=-1;
        }
        int a,b;
        cin>>a>>b;
        a+=100;b+=100;
        data[b][a]=0;
        
        int dx[]={0,1,1,0,-1,-1};
        int dy[]={1,1,0,-1,-1,0};
        
        for(int time=1;time<=t;time++){
            rep(i,200){
                rep(j,200){
                    if(data[i][j]==time-1){
                        rep(k,6){
                            if(data[i+dy[k]][j+dx[k]]!=-1) data[i+dy[k]][j+dx[k]]=min(data[i+dy[k]][j+dx[k]],time);
                        }
                    }
                    
                }
            }
        }
        int c=0;
        rep(i,200){
            rep(j,200){
                if(data[i][j]!=-1 && data[i][j]!=100)c++;
            }
        }
        
        cout<<c<<endl;
    }
    
}

