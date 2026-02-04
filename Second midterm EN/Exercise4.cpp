#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    
    int a,b,c;
    
    while (cin>>a && cin>>b && cin>>c){
        int tempa=a,tempb=b;
        tempa/=10;
        tempb/=10;
        int counterA=0,counterB=0;
        while(tempa>0){
            if(tempa%10==c)counterA++;
            tempa/=100;
        }
        while(tempb>0){
            if(tempb%10==c)counterB++;
            tempb/=100;
        }
        
        if(counterA>counterB)cout<<a<<endl;
        else if(counterB>counterA)cout<<b<<endl;
        else cout<<a<<endl;
        
    }
    
    return 0;
}
