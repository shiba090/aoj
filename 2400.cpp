#include <functional>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <iomanip>
#include <utility>
#include <cstdlib>
#include <sstream>
#include <bitset>
#include <vector>
#include <cstdio>
#include <ctime>
#include <queue>
#include <deque>
#include <cmath>
#include <stack>
#include <list>
#include <map>
#include <set>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long int ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb push_back

vector<pii> score;
int pena[100][100];

void mysort(int ac[100]){
    for(int i=0;i<score.size()-1;i++){
        for(int j=i+1;j<score.size();j++){
//            if(score[i].first<score[j].first || ( score[i].first==score[j].first && score[i].second<score[j].second )){
            if(ac[score[i].second]<ac[score[j].second])swap(score[i],score[j]);
            else if(ac[score[i].second]==ac[score[j].second] && score[i].first>score[j].first)swap(score[i],score[j]);
            else if(ac[score[i].second]==ac[score[j].second] && score[i].first==score[j].first && score[i].second>score[j].second)swap(score[i],score[j]);
        }
    }
}


int main(){
    int t,p,r;
    while(cin>>t>>p>>r){
        int ac[100]={};
        if(t==0 && p==0 && r==0)break;
        score.clear();
        rep(i,t)score.pb(pii(0,i));
        rep(i,100)rep(j,100)pena[i][j]=0;
        
        
        rep(i,r){
            int team,prob,time;
            string mess;
            cin>>team>>prob>>time>>mess;
            team--;
            
            if(mess=="WRONG"){
                pena[team][prob]++;
            }else{
                score[team].first+=time+pena[team][prob]*1200;
                ac[team]++;
            }
        }
        
        mysort(ac);
        
        rep(i,score.size()){
            cout<<score[i].second+1<<" "<<ac[score[i].second]<<" "<<score[i].first<<endl;
        }
    }
    
    return 0;
}

