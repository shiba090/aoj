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
        int k;
        cin>>k;
        
        int sum=0;
        
        int left=0,right=n-1;
        int cent;
        while(1){
            cent=( left+right )/2;
            sum++;
            if(data[cent]==k)break;
            if(data[cent]>k){
                right=cent-1;
            }
            if(data[cent]<k){
                left=cent+1;
            }
            
            if( left>right )break;
        }
        cout<<sum<<endl;
    }

    return 0;
}









