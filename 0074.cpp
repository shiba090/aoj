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


int main() {
    int H,M,S;
    while(cin>>H>>M>>S){
        if(H==-1 && M==-1 && S==-1)break;
        int sec=2*60*60  -  (H*60*60 + M*60 +S);
        
        int h=sec/3600;
        sec-=h*3600;
        
        int m=sec/60;
        sec-=m*60;
        
        int s=sec;
        
        printf("%02d:%02d:%02d\n",h,m,s);
        
        
        sec=2*60*60  -  (H*60*60 + M*60 +S);
        sec*=3;
        
        h=sec/3600;
        sec-=h*3600;
        
        m=sec/60;
        sec-=m*60;
        
        s=sec;
        
        printf("%02d:%02d:%02d\n",h,m,s);
    }

    return 0;
}



