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
    while(cin>>s){
        if(s=="0")break;
        
        int a=0,b=0;
        for(int i=1;i<s.size();i++){
            if(s[i]=='A')a++;
            else b++;
        }
        if( (a==10 && b<10) || (a>b && a-b==1) )a++;
        else if( (b==10 && a<10) || (a<b && b-a==1) )b++;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}


