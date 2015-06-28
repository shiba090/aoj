#include "bits/stdc++.h"

using namespace std;


int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        
        int ans=a%b;
        if(ans==0)cout<<b<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}

