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


int s[10][10]={};

int ddx[8]={-1,0,1,1,1,0,-1,-1};
int ddy[8]={-1,-1,-1,0,1,1,1,0};


int solve(int y,int x,int d,int base){
    int dx=ddx[d];
    int dy=ddy[d];
    int ret=0;
    
    rep(i,8){
        int dxi=dx*(i+1),dyi=dy*(i+1);
        if( !( y+dyi>=0 && y+dyi<8 && x+dxi>=0 && x+dxi<8 ) || s[y+dyi][x+dxi]==-1 ) return 0;
        else if(s[y+dyi][x+dxi]==base)return ret;
        else if(s[y+dyi][x+dxi]!=base)ret++;
    }
    return -100;
}


void out(){
    rep(i,8){
        rep(j,8){
            int aa=s[i][j];
            if(aa==1)cout<<"o";
            if(aa==0)cout<<"x";
            if(aa==-1)cout<<".";
        }
        cout<<endl;
    }
}


int main(){
    rep(i,8){
        rep(j,8){
            char tmp;
            cin>>tmp;
            if(tmp=='o')s[i][j]=1;
            else if(tmp=='x')s[i][j]=0;
            else s[i][j]=-1;
        }
    }
    
    int flag=false;
    while(true){
//        out();cout<<endl;
        
        
        int d[10]={};
        int y=-1,x=-1;
        int count=0;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(s[i][j]!=-1)continue;
                int result=0;
                int tmp[10]={};
                rep(k,8){
                    int aaa=solve(i,j,k,1);
                    tmp[k]=aaa;
                    result+=aaa;
                }
                if(result>count){
                    count=result;
                    y=i;
                    x=j;
                    rep(z,8)d[z]=tmp[z];
                }
            }
        }
        if(count!=0){
            flag=false;
            s[y][x]=1;
            rep(i,8){
                rep(j,d[i]){
                    s[y+ddy[i]*(j+1)][x+ddx[i]*(j+1)]=1;        ///////
                }
            }
        }
        else{
            if(flag)break;
            flag=true;
        }
/////////////////////////////////////////////////////////
//        out();cout<<endl;
        y=-1,x=-1;
        count=0;
        for(int i=7;i>=0;i--){
            for(int j=7;j>=0;j--){
                if(s[i][j]!=-1)continue;
                int result=0;
                int tmp[10]={};
                rep(k,8){
                    int aaa=solve(i,j,k,0);
                    tmp[k]=aaa;
                    result+=aaa;
                }
                if(result>count){
                    count=result;
                    y=i;
                    x=j;
                    rep(z,8)d[z]=tmp[z];
                }
            }
        }
        if(count!=0){
            flag=false;
            s[y][x]=0;
            rep(i,8){
                rep(j,d[i]){
                    s[y+ddy[i]*(j+1)][x+ddx[i]*(j+1)]=0;        ///////
                }
            }
        }
        else{
            if(flag)break;
            flag=true;
        }
        
    }
    out();
    
    return 0;
}


