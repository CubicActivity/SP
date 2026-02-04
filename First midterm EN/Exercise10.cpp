#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int z;
    cin>>z;
    double counter=0,fullCounter=0;
    int a=1,b=1;
    while(true){
        cin>>a>>b;

        if(a==0 && b==0){
            break;
        }
        fullCounter++;
        if(a+b==z){
            counter++;
        }
    }

    cout<<"You entered "<<counter<<" pairs of numbers that have a sum equal to "<<z<<endl;
    cout<<"The percentage of pairs with sum "<<z<<" is "<<(counter/fullCounter)*100.0<<"%"<<endl;
    return 0;
}
