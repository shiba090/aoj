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
    int data[10]={};
    int n;
    cin>>n;
    rep(i,n){
        double s;
        cin>>s;
        if(s>=185.0)data[6]++;
        else if(s>=180.0)data[5]++;
        else if(s>=175.0)data[4]++;
        else if(s>=170.0)data[3]++;
        else if(s>=165.0)data[2]++;
        
        else data[1]++;
    }

    for(int i=1;i<=6;i++){
        cout<<i<<":";
        rep(j,data[i]){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}

