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
    char data[3][3];
    while(cin>>data[0][0]){
        if(data[0][0]=='0')break;
        rep(i,3){
            rep(j,3){
                if(i!=0 || j!=0){
                    cin>>data[i][j];
                }
            }
        }
        
        
        rep(i,3){
            if(data[i][0]==data[i][1] && data[i][1]==data[i][2] && data[i][0]!='+'){
                cout<<data[i][0]<<endl;
                goto next;
            }
        }

        rep(j,3){
            if(data[0][j]==data[1][j] && data[1][j]==data[2][j] && data[0][j]!='+'){
                cout<<data[0][j]<<endl;
                goto next;
            }
        }

        if( ( (data[0][0]==data[1][1] && data[1][1]==data[2][2]) || (data[0][2]==data[1][1] && data[1][1]==data[2][0]) ) && data[1][1]!='+'){
            cout<<data[1][1]<<endl;
            goto next;
        }
        
        
        cout<<"NA"<<endl;
        next:;
    }
    
    
    return 0;
}









