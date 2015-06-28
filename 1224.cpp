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

#define rep(i,n) for(int i=0;i<(n);i++)

int main(){
    int n;
    while(cin>>n){
        if(n==0)break;

        int ma=-1;
        
        rep(i,55){
            rep(j,100){
                int calc= i*i*i + (int)(j*(j+1)*(j+2)/6);
                if( calc <=n ){
                   ma=max( ma , calc );
                }
                else break;
            }
        }
        cout<<ma<<endl;
    }
    return 0;
}

