#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    int n;
    cin>>n;
    
    if(n>0){
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            
            if(a>10 && b>10){
                //move digit then check if >b
                
                int digit=a%10;
                int counter=0;
                int temp=a;
                while(temp>0){
                    temp/=10;
                    counter++;
                }
                temp=a;
                temp/=10;
                int multiple=10;
                for(int i=0;i<counter-2;i++){
                    multiple*=10;
                }
                temp+=digit*multiple;
                if(temp>b)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }else cout<<"NO"<<endl;
        }
    }else cout<<"NO"<<endl;
    
    return 0;
}
