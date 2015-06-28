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
        
        int data[200]={};
        rep(i,n){
            cin>>data[i];
        }
        
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=1;j<n-i;j++){
                if(data[j-1]>data[j]){
                    swap(data[j-1],data[j]);
                    sum++;
                }
            }
        }
        cout<<sum<<endl;
    }
    
    return 0;
}

