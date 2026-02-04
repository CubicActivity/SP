#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
       
        int digit=arr[i]%10,count=1;
        int temp=arr[i]/10;
        while(temp>0){
            if(temp%10==digit){
                count++;
            }
            temp/=10;
        }
        cout<<count<<" ";
    }
    
    return 0;
}
