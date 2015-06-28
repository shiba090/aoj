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
    string num[]={
        "0111111",  //0
        "0000110",  //1
        "1011011",  //2
        "1001111",  //3
        "1100110",  //4
        "1101101",  //5
        "1111101",  //6
        "0100111",  //7
        "1111111",  //8
        "1101111"   //9
    };
    
    while(cin>>n){
        if(n==-1)break;
        
        string now="0000000";
        
        rep(i,n){
            int a;
            cin>>a;
            rep(i,7){
                if(now[i]!=num[a][i])cout<<"1";
                else cout<<"0";
            }
            cout<<endl;
            now=num[a];

        }
        
    }
    return 0;
}


