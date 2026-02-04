
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a,b;
    cin>>a>>b;
    
    double c = sqrt(a*a+b*b);
    cout<<c*c<<endl;
    
    double s= (a+b+c)/2;
    double area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<area;

    return 0;
    

}
