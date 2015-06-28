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

bool isKai(int n){
    stringstream ss;
    ss<<n;
    string s=ss.str();
    string g=ss.str();
    
    reverse(all(s));
    if(s==g)return true;
    else return false;
}


int main() {
    int n;
    cin>>n;
    int now=-1;
    rep(i,9999999){
        if(isKai(i)){
            if(i<n)now=i;
            else{
                if(abs(n-now)>abs(n-i))cout<<i<<endl;
                else cout<<now<<endl;
                break;
            }
        }
    }
    return 0;
}





