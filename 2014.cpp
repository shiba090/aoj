#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

int w,h;

int isKakoi(int y,int x,char data[50][50]){
    bool bf=false,wf=false;
    int dy[]={-1,0,1,0};
    int dx[]={0,-1,0,1};
    bool visited[50][50]={};
    
    queue<pair<int,int> > que;
    
    que.push( pair<int,int>(y,x) );
    visited[y][x]=true;
    
    while(que.size()){
        int qff=que.front().first,qfs=que.front().second;
        rep(i,4){
            if( qff+dy[i]<h && qff+dy[i]>=0 && qfs+dx[i]<w && qfs+dx[i]>=0 && visited[ qff+dy[i] ][ qfs+dx[i] ]==false){
                if(data[qff+dy[i]][qfs+dx[i]]=='B')bf=true;
                else if(data[qff+dy[i]][qfs+dx[i]]=='W')wf=true;
                else{
                    que.push( pair<int,int>(qff+dy[i] , qfs+dx[i]) );
                    visited[ qff+dy[i] ][ qfs+dx[i] ]=true;
                }
            }
        }
        que.pop();
    }
    if(bf && wf)return -1;
    else if(bf)return 0;
    else if(wf)return 1;
    
    return 100;
}


int main(){
    while(cin>>w>>h){
        if(w==0 && h==0)break;
        
        char data[50][50];
        rep(i,h)cin>>data[i];
        
        
        int bk=0,wh=0;
        rep(i,h){
            rep(j,w){
                if(data[i][j]=='.'){
                    int res=isKakoi(i,j,data);
                    if( res==0 )wh++;
                    if( res==1 )bk++;
                }
            }
        }
        
        cout<<wh<<" "<<bk<<endl;
    }
    
    
    return 0;
}

