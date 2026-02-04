#include <iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;

    if(n>9){
        while(true){
            n--;
            int newNum,temp=n;
            newNum=temp%10;
            temp/=10;

            int count=1;
            while(temp>0){
                newNum*=10;
                newNum+=temp%10;
                temp/=10;
                count++;
            }
            if(newNum%count==0){
                cout<<n;
                return 0;
            }
        }
    }else cout<<"The number is invalid";



    return 0;
}
