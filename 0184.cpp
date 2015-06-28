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

typedef vector<int> VI;
typedef pair<int,int> PII;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define ALL(a)  (a).begin(),(a).end()
#define PB push_back
#define sz size()

const double EPS = 1e-10;
const int INF = 100000000;

int main(){
    while(1){
        int data[10]={};
        int n;
        cin>>n;
        if(n==0)break;
        rep(i,n){
            int a;
            cin>>a;
            if(a<10)data[0]++;
            else if(a<20)data[1]++;
            else if(a<30)data[2]++;
            else if(a<40)data[3]++;
            else if(a<50)data[4]++;
            else if(a<60)data[5]++;
            else data[6]++;
        }
        rep(i,7)cout<<data[i]<<endl;
    }
    return 0;
}

