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
    int n;
    while(cin>>n){
        if(n==0)break;
        
        int data[30];
        rep(i,n)cin>>data[i];
        
        int now=32;
        int c=0;
        while(1){
            now-=(now-1)%5;
            cout<<now<<endl;
            now-=data[c%n];
            if(now<0)now=0;
            cout<<now<<endl;
            c++;
            if(now==0)break;
        }
        
    }
    return 0;
}

