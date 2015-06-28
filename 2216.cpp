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
#define sz size()

const double EPS = 1e-10;
const int INF = 100000000;

int main(){
    int a,b;
    while(cin>>a>>b){
        if(a==0 && b==0)break;
        int s=b-a;
        int x,y,z;
        z=s/1000;
        s-=((int)(s/1000)*1000);
        y=s/500;
        s-=((int)(s/500)*500);
        x=s/100;
        s-=((int)(s/100)*100);
        cout<<x<<" "<<y<<" "<<z<<endl;
        
    }
    return 0;
}

