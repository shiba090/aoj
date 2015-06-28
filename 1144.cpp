#include <iostream>


using namespace std;

typedef pair<int,int> pii;

#define rep(i,n) for(int i=0;i<(n);i++)

int w,h;
int mini;
pii start;

int exe(int data[20][20],int result[20][20],pii &now,int dir){   //場外,移動,ゴール　012
    int d[5]={-1,0,1,0,-1};

    rep(i,20)
        rep(j,20)
            result[i][j]=data[i][j];
    
    if( result[ now.first+d[dir] ][ now.second+d[dir+1] ]==1 )return -1;

    while( true ){
        now.first+=d[dir];
        now.second+=d[dir+1];
        if( !( 0<=now.first && now.first<h && 0<=now.second && now.second<w ) )return -1;
        if(data[now.first][now.second]==3)return 2;
        if(data[now.first][now.second]==1){
            result[now.first][now.second]=0;
            now.first-=d[dir];
            now.second-=d[dir+1];
            return 1;
        }
    }
}



void dfs(int data[20][20],pii now,int flor){
    if(flor>=11)return ;
    pii base;
    base.first=now.first;
    base.second=now.second;
    
    rep(i,4){
        now.first=base.first;
        now.second=base.second;
        
        int tmp[20][20]={};
        int res=exe(data,tmp,now,i);
        if(res==1) dfs(tmp,now,flor+1);
        else if(res==2){
            mini=min(mini,flor);
        }
    }
}




int main(){
    while(cin>>w>>h){
        pii now;
        mini=100000;
        int data[20][20]={};
        if(w==0 && h==0)break;
        
        rep(i,h){
            rep(j,w){
                cin>>data[i][j];
                if(data[i][j]==2){
                    start.first=i;
                    start.second=j;
                    data[i][j]=0;
                }
            }
        }
        
        
        now.first=start.first;
        now.second=start.second;
        
        
        dfs(data,now,1);
        if(mini==100000)mini=-1;
        cout<<mini<<endl;
    }
    
    
    return 0;
}

