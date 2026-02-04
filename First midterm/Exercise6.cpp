#include <iostream>

using namespace std;

int main()
{
    int z;
    cin>>z;
    
    int a=1,b=1,countNaZbir=0,count=0;
    float percent;
    
    while(true){
        cin>>a>>b;
        if(a==0 && b==0)break;
        count++;
        if(a+b==z)countNaZbir++;
    }
    
    percent=(countNaZbir*100.0000)/count;
    
    cout<<"Vnesovte "<<countNaZbir<<" parovi od broevi chij zbir e "<<z<<endl<<"Procentot na parovi so zbir "<<z<<" e "<<percent<<"%";
    
    return 0;
}
