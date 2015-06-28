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

#define x first
#define y second


int main() {
    string s;
    while(cin>>s){
        int J=0,I=0;
        rep(i,s.size()-2){
            if(s.substr(i,3)=="JOI")J++;
            if(s.substr(i,3)=="IOI")I++;
        }
        cout<<J<<endl<<I<<endl;
    }
    return 0;
}

        
        


