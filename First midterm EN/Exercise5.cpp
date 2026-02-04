#include <iostream>

using namespace std;

int main()
{
    
    int date;
    cin>>date;
    
    int year,month,day;
    
    year = date%10000;
    month=(date%1000000-date%10000)/10000;
    day=(date-date%1000000)/1000000;

    //todays date
    
    //are they older than 18 
    int n;
    cin>>n;
    
    
    for(int i=0;i<n;i++){
        int year1,month1,day1;
        cin>>date;
        year1 = date%10000;
        month1=(date%1000000-date%10000)/10000;
        day1=(date-date%1000000)/1000000;
        if((year-year1)>18 || ((year-year1)==18 && (month1<month || (month==month1 && day1<=day)))){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
    
    
    
    return 0;
}
