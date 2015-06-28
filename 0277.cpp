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
 
 typedef vector<int> VI;
 typedef pair<int,int> PII;
 typedef long long ll;
 
 #define dump(x)  cerr << #x << " = " << (x) << endl
 #define rep(i,n) for(int i=0;i<(n);i++)
 #define ALL(a)  (a).begin(),(a).end()
 #define PB push_back
 #define sz size()
 
 const double EPS = 1e-10;
 const int INF = 100000000;
 
 
 
 int main(){
 int data[]={0,6000,4000,3000,2000};
 rep(i,4){
 int a,b;
 cin>>a>>b;
 cout<<data[a]*b<<endl;
 }
 
 return 0;
 }

