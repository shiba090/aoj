#include <iostream>
#include<math.h>

using namespace std;


int main(){
while(true){
    long ans=0;
    int c=0;
    int n;
    cin>>n;
    if(n==0)break;
    while(1){
        ans+=n%8*pow(10,c);
        n/=8;
        if(n==0)break;
        c++;
    }
    for(int i=0;i<=c;i++){
        int temp=((long)(ans/pow(10,i))%10);
        if(temp==4)ans+=pow(10,i);
        if(temp>=5)ans+=2*pow(10,i);
    }
    cout<<ans<<endl;
}
    return 0;
}



