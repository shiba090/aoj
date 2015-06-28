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


bool isHam(int n){
    while(n%2==0)n/=2;
    while(n%3==0)n/=3;
    while(n%5==0)n/=5;
    if(n==1)return true;
    return false;
}

int main() {
    int m,n;
    while(cin>>m){
        if(m==0)break;
        cin>>n;
        
        int sum=0;
        for(int i=m;i<=n;i++){
            if(isHam(i))sum++;
        }
        cout<<sum<<endl;
    }

    return 0;
}

