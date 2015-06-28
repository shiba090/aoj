#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb push_back

int main(){
    int n;
    int w;
    while(cin>>n>>w){
        if(n==0 && w==0)break;
        vi data(1000);
        
        rep(i,n){
            int v;
            cin>>v;
            data[(int)(v/w)]++;
        }
        
        int max_value=-1;
        int sum=0;
        rep(i,1000){
            if(data[i]!=0){
                sum=i;
                max_value=max(max_value,data[i]);
            }
        }
        sum++;
        
        double ans=0;
        rep(i,1000){
            ans+=(double)data[i]/max_value * (double)(sum-i-1)/(sum-1);
        }
        printf("%18.15lf\n",ans+0.01);
    }
    
    return 0;
}

