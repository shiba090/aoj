#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long int ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb push_back


int solve(int n){
    string s=to_string(n);
    
    int maxi=-1;
    rep(i,s.size()-1){
        int tmp;
        tmp=stoi( s.substr(0,i+1) ) * stoi( s.substr(i+1,s.size()-i) );
        maxi=max(maxi,tmp);
    }
    
    return maxi;
}

int main(){
    int abcde;
    cin>>abcde;
    rep(i,abcde){
        int n;
        cin>>n;
        
        int c=0;
        for(int i=0;i<1000000;i++){
            if(i==1000000-1)c=-1;
            
            if(n<10)break;
            n=solve(n);
            c++;
        }
        cout<<c<<endl;
    }
    
    return 0;
}

