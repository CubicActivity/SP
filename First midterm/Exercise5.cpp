#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    if(a>0 && b>0){
        if(b>a){
            int temp=b;
            b=a;
            a=temp;
        }
        int temp=a;
        temp/=10;
        while(b>0){
            if(temp%10==b%10){
                b/=10;
                temp/=100;
            }else{
                cout<<"NE";
                return 0;
            }
        }cout<<"PAREN";
    }else{
        cout<<"Invalid input";
        return 0;
    }
    return 0;
}
