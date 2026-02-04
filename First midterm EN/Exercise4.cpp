#include <iostream>

using namespace std;

int main()
{
    
    int n;
    cin>>n;
    
    double points,maxPoints;
    for(int i=0;i<n;i++){
        cin>>points>>maxPoints;
        double percentage=(points/maxPoints)*100;
        if(percentage>=90)cout<<percentage<<" 10"<<endl;
        else if(percentage>=80)cout<<percentage<<" 9"<<endl;
        else if(percentage>=70)cout<<percentage<<" 8"<<endl;
        else if(percentage>=60)cout<<percentage<<" 7"<<endl;
        else if(percentage>=50)cout<<percentage<<" 6"<<endl;
        else cout<<percentage<<" FAIL"<<endl;
    }
    
    return 0;
}
