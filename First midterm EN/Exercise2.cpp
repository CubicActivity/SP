#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int count=0;
    int number,temp,product;
    for(;a<=b;a++){
        temp=a;
        number=temp%10;
        temp/=10;
        if(temp/10 !=0){
            product=temp%10;
            temp/=10;
        }

        while(temp>=10){
            product*=temp%10;
            temp/=10;
        }

        number=temp; //first digit
        number*=10;
        number+=a%10;


        if(product!=0 && product%number==0){
            cout<<a<<" -> ("<<product<<" == "<<number<<" * "<<product/number<<")"<<endl;
            count++;
        }

    }cout<<count;


    return 0;
}
