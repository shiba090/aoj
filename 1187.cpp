#include <algorithm>
#include <iostream>

using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()

class TEAM{
public:
    int pena[20];
    int sum;
    int time;
    int num;
    int point;
    
    
    TEAM(){
        rep(i,20)pena[i]=0;
        sum=time=num=point=0;
    }
};

int main(){
    int M,T,P,R;
    while(cin>>M>>T>>P>>R){
        TEAM team[100];
        
        
        if(M==0 && T==0 && P==0 && R==0)break;
        
        rep(i,T)team[i].num=i+1;
        
        rep(i,R){
            int m,t,p,j;
            cin>>m>>t>>p>>j;
            t--;
            if(j==0){
                team[t].sum++;
                team[t].time+=m+team[t].pena[p]*20;
            }else{
                team[t].pena[p]++;
            }
        }
        
        rep(i,T){
            team[i].point=team[i].sum*100000000 + 10000000-team[i].time;
        }

        for(int i=0;i<T-1;i++){
            for(int j=T-1;j>i;j--){
                if(team[j].point<team[j-1].point)swap(team[j],team[j-1]);
            }
        }
        
        cout<<team[T-1].num;
//        cout<<" "<<team[T-1].point<<endl;
        for(int i=T-2;i>=0;i--){
            if(team[i+1].point==team[i].point){
                cout<<"="<<team[i].num;
//                cout<<" "<<team[i].point<<endl;
            }
            else{
                cout<<","<<team[i].num;
//                cout<<" "<<team[i].point<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}

