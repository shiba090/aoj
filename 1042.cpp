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

int data[100]={};
int mini;
int n;
int SUM;



int main() {
    string s;
    while(1){
        getline(cin,s);
        if(s=="END OF INPUT")break;
        
        string ans="";
        int now=0;
        rep(i,s.size()){
            if(s[i]==' '){
                ans+=now+'0';
                now=0;
            }
            else{
                now++;
            }
        }
        ans+=now+'0';
        
        cout<<ans<<endl;
        
    }

    return 0;
}


