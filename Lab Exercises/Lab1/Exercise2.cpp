
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int days,yrs=0,months=0;
    cin>>days;
    
    
    if(days/365!=0){
        yrs=days/365;
        days-=365*yrs;
    }
    
    if(days/30!=0){
        months=days/30;
        days-=30*months;
    }
    
    
    cout<< "Years: "<< yrs <<", months: "<<months<<", days: "<<days;

    return 0;
    

}
