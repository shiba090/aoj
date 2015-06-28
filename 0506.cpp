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


string solve(string s){
    string ret="";
    
    int c=1;
    for(int i=1;i<s.size();i++){
        if(s[i-1]==s[i]){
            c++;
        }
        else{
            stringstream x;
            x<<c;
            ret+=x.str();
            ret+=s[i-1];
            c=1;
        }
    }
    stringstream x;
    x<<c;
    ret+=x.str();
    ret+=s[s.size()-1];
    
    return ret;
}

int main() {
    int n;
    
    while(cin>>n){
        if(n==0)break;
        
        string s;
        cin>>s;
        rep(i,n){
            s=solve(s);
        }
        cout<<s<<endl;
    }
    return 0;
}





