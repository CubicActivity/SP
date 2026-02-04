
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    
    double sum=0,count=0;
    sum+=a%10;
    a/=100;
    sum+=a;
    count=2;
    
    sum+=b%10;
    b/=100;
    count++;
    sum+=b%10;
    count++;
    
    cout<<sum/count;
    
    return 0;
    

}
