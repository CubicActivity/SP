#include <iostream>

using namespace std;

int main()
{
    bool found=false;
    int m,n;
    cin>>m>>n;
    
    for(;m<=n;m++){
        int temp=m;
        while(temp>0){
            if((temp%10)%2==0){
                temp/=10;
                found=true;
            }else{
                found=false;
                break;
            }
        }
        if(found){
            cout<<m;
            return 0;
        }
    }
    
    cout<<"NE";
    
    

    return 0;
}
