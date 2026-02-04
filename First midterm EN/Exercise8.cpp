#include <iostream>

using namespace std;

int main()
{

    int a,b;
    cin>>a>>b;
    int count=0;
    int reverse=0;
    int sum=0;
    int firstdigit, lastdigit;
    for(;a<=b;a++){
        if(a/100>0){
            lastdigit=a%10;
            int temp=a;
            temp/=10;
            reverse=temp%10;
            temp/=10;
            while(temp>=10){
                reverse*=10;
                reverse+=temp%10;
                temp/=10;
            }
            firstdigit=temp;
            temp=a;

            sum=firstdigit+lastdigit;
        }
        if(reverse!=0){
            if(reverse%sum==0){
                cout<<a<<" -> ("<<reverse<<" == ("<<lastdigit<<" + "<<firstdigit<<") * "<<reverse/sum<<")"<<endl;
                count++;

            }
        }




    }cout<<count<<endl;

    return 0;
}
