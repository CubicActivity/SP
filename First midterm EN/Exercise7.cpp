#include <iostream>

using namespace std;

int main()
{
    
    int n;
    cin>>n;
    
   
    int winner=0,num;
    for(int j=1;j<n;j++){
        int sumOfDivisors=0;
        for(int i=1;i<j;i++){
            if(j%i==0){
                sumOfDivisors+=i;
            }
        }
        if(sumOfDivisors>winner){
            winner=sumOfDivisors;
            num=j;
        }
    }
    
    cout<<num;
    
    return 0;
}
