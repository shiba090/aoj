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


string sorted(string s){
    sort(all(s));
    return s;
}


int main() {
    string s;
    string ans="";
    string aizu="AIZUNYAN";
    string nyan="AIDUNYAN";
    sort(all(nyan));
    
    while(cin>>s){
        rep(i,s.size()){
            if(i<s.size()-7 && sorted(s.substr(i,8))==nyan){
                ans+=aizu;
                i+=7;
            }
            else ans+=s[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}

