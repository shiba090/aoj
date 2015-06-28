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

char add(int ch,int diff){
    diff%=26;
    ch+=diff;
    if(ch>'z')ch-=26;
    
    return ch;
}


int main() {
    int n;
    while(cin>>n && n){
        string s;
        cin>>s;
        
        
        
        stack<pii> st;
        rep(i,n){
            int a,b;
            cin>>a>>b;
            a--;b--;
            st.push(pii(a,b));
        }
        
        while(st.size()){
            int a=st.top().first;
            int b=st.top().second;
            swap(s[a],s[b]);
            
            int diff=abs(a-b);
            s[a]=add(s[a],diff);
            s[b]=add(s[b],diff);

            st.pop();
        }
        
        cout<<s<<endl;
    }


    return 0;
}





