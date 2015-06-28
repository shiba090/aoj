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

#define x first
#define y second


int main() {
    int n;
    while(cin>>n){
        if(n==0)break;
        
        vi taro;
        rep(i,n){
            int a;
            cin>>a;
            taro.pb(a);
        }
        
        vi hanako;
        for(int i=1;i<=2*n;i++){
            bool flag=true;
            rep(j,n){
                if(taro[j]==i)flag=false;
            }
            if(flag)hanako.pb(i);
        }
        
        sort(all(taro));
        sort(all(hanako));
        reverse(all(taro));
        reverse(all(hanako));
        
        int fie=-1;
        bool flag;
        bool pass=false;
        while(1){
            flag=true;
            for(int i=n-1;i>=0;i--){
                if( taro[i]>fie ){
                    fie=taro[i];
                    taro[i]=-1;
                    flag=false;
                    pass=false;
                    break;
                }
            }
            if(flag){
                if(pass)break;
                fie=-1;
                pass=true;
            }
            
            flag=true;
            for(int i=n-1;i>=0;i--){
                if( hanako[i]>fie ){
                    fie=hanako[i];
                    hanako[i]=-1;
                    flag=false;
                    pass=false;
                    break;
                }
            }
            if(flag){
                if(pass)break;
                fie=-1;
                pass=true;
            }
        }
        sort(all(taro));
        sort(all(hanako));
        reverse(all(taro));
        reverse(all(hanako));
        for(int i=n-1;i>=0;i--){
            if(taro.back()==-1)taro.pop_back();
            else break;
        }
        for(int i=n-1;i>=0;i--){
            if(hanako.back()==-1)hanako.pop_back();
            else break;
        }
        cout<<hanako.size()<<endl;
        cout<<taro.size()<<endl;
        
    }
    return 0;
}

        
        


