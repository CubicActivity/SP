#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
    
    int n;
    cin>>n;
    
    vector<int> strongNumbers;
    cout<<"Strong numbers:"<<endl;
    for(int i=0;i<n;i++){
        int x,temp;
        cin>>x;
        temp=x;
        
        int sum=0;
        while(temp>0){
            int factorial=1;
            int digit=temp%10;
            for(int i=1;i<=digit;i++){
                factorial*=i;
            }
            sum+=factorial;
            //cout<<factorial<<"THE SUM IS"<<sum<<endl;
            temp/=10;
        }
        
        if(sum==x)cout<<x<<endl;
        
    }
    
    
    return 0;
}
