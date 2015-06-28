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
    string s;
    cin>>s;
    int k,u,p,c;
    k=u=p=c=0;
    
    rep(i,s.size()){
        if(s[i]=='K')k++;
        if(s[i]=='U')u++;
        if(s[i]=='P')p++;
        if(s[i]=='C')c++;
    }
    cout<<min(k,min(u,min(p,c)))<<endl;
    
    return 0;
}


