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
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back


vi getInput(){
    vi ret;
    
    rep(i,9){
        int a,b;
        cin>>a;
        ret.pb(a);
        
        if(a<10){
            cin>>b;
            ret.pb(b);
        }
    }
    
    int a,b,c;
    cin>>a;
    cin>>b;
    ret.pb(a);
    ret.pb(b);

    if(a+b>=10){
        cin>>c;
        ret.pb(c);
    }

    
    return ret;
}



int main() {
    int n;
    while(cin>>n){
        if(n==0)break;
        
        vector<pii> data;
        rep(i,n){
            int gNum;
            cin>>gNum;
            
            vi in=getInput();
            int len=in.size();

            int sum=0;
            int c=0;
            rep(i,9){
                if(in[c]==10){
                    sum+=10+in[c+1]+in[c+2];
                    c++;
                }
                else if(in[c]+in[c+1]==10){
                    sum+=10+in[c+2];
                    c+=2;
                }
                else{
                    sum+=in[c]+in[c+1];
                    c+=2;
                }

            }
            while(c<len){
                sum+=in[c];
                c++;
            }
            data.pb(pii(sum,gNum));
        }
        
        rep(i,data.size()-1){
            for(int j=i+1;j<data.size();j++){
                if( data[i].first<data[j].first || (data[i].first==data[j].first && data[i].second>data[j].second) ){
                    swap(data[i],data[j]);
                }
            }
        }
        rep(i,data.size()){
            cout<<data[i].second<<" "<<data[i].first<<endl;
        }
        
    }
    return 0;
}



//3
//1010 6 3 10 7 1 0 7 9 1 10 6 2 4 3 9 1 9 0
//1200 5 3 9 1 7 1 0 0 8 1 10 10 4 3 9 1 8 2 9
//1101 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3

