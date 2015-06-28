#include "bits/stdc++.h"

using namespace std;


string solve(int n){
    
    stringstream ss;
    ss<<(int)(n/60);
    ss<<':';
    if(n%60<10)ss<<'0';
    
    ss<<n%60;
    
    
    return ss.str();
}

int main(){
    int n,m;
    
    vector<int> a;
    
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a.push_back(x*60+y);
    }
    
    cin>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        a.push_back(x*60+y);
    }
    
    
    sort(a.begin(),a.end());
    
    int len=a.size();
    
    
    
    
    for(int i=0;i<len;i++){
        if(i==0 || a[i-1]!=a[i]){
            if(i!=0)cout<<" ";
            cout<<solve(a[i]);
        }
    }
    cout<<endl;
    
    
    
    return 0;
}

