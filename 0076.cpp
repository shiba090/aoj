#include "bits/stdc++.h"
 
using namespace std;
 
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;
 
#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
 
 
 
int main(){
   int n;
   while(cin>>n){
       if(n==-1)break;
        
       long double seta=0;
       for(int i=1;i<n;i++){
           seta+=atan(1.0/sqrt(i));
           while(seta>=2*M_PI)seta-=2*M_PI;
       }
       double l=sqrt(n);
        
       printf("%.20Lf\n",l*cos(seta));
       printf("%.20Lf\n",l*sin(seta));
 
        
   }
    
   return 0;
}

