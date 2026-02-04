#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
    
    char str[150];
    
    while(cin.getline(str,150)){
        int sum=0;
        int currentNumber=0;
        // if(strlen(str)>0){
        for(int i=0;i<strlen(str);i++){
            if(isdigit(str[i])){
                currentNumber*=10;
                currentNumber+=str[i]-48;
                if(i==strlen(str)-1)sum+=currentNumber;
            }else if(isalpha(str[i])){
                sum+=currentNumber;
                currentNumber=0;
                cout<<str[i];
                
            }else{
                sum+=currentNumber;
                currentNumber=0;
            }
        }cout<<sum<<endl;
        // }
    }
    
    return 0;
}
