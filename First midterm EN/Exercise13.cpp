#include <iostream>

using namespace std;

int main()
{
    
    int m,n;
    cin>>m>>n;
    bool found=false;
    for(;m<=n;m++){
        bool yeste=true;
        int temp=m;
        
        while(temp>0){
            if((temp%10)%2==0){
                temp/=10;
            }else yeste=false;
            
            if(!yeste){
                break;
            }
        }
        if(yeste){
            cout<<m<<endl;
            return 0;
        }
    }
    
    if(!found)cout<<"NSN";
    
    return 0;
}
