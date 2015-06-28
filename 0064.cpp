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
    int sum=0;
    while(cin>>s){
        rep(i,s.size()){
            if( isdigit(s[i]) ){
                string number="";
                for(int j=i;j<s.size();j++){
                    i++;
                    if(isdigit(s[j]))number+=s[j];
                    else break;
                }
                sum+=stoi(number);
                i--;
            }
        }
    }
    
    cout<<sum<<endl;
    
    return 0;
}



