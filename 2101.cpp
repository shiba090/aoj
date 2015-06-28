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
        
        int sum=0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                if(i!=n)sum+=i;
                if(i*i!=n && i!=1)sum+=n/i;
            }
        }
        if(sum==n)cout<<"perfect number"<<endl;
        else if(sum<n)cout<<"deficient number"<<endl;
        else if(sum>n)cout<<"abundant number"<<endl;
    }
    return 0;
}


