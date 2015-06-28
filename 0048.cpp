#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <map>
#define INF 100000000
#define rep(i,a) for(int i=0;i<(a);i++)

using namespace std;
typedef long long ll;

string sol(double n){
    if(n<=48.00)return "light fly";
    if(n<=51.00)return "fly";
    if(n<=54.00)return "bantam";
    if(n<=57.00)return "feather";
    if(n<=60.00)return "light";
    if(n<=64.00)return "light welter";
    if(n<=69.00)return "welter";
    if(n<=75.00)return "light middle";
    if(n<=81.00)return "middle";
    if(n<=91.00)return "light heavy";
    return "heavy";
    
}

int main(){
    double n;
    while(cin>>n){
        cout<<sol(n)<<endl;
    }
    return 0;
}


