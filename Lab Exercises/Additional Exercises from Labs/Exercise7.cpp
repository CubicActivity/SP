#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    
    int n;
    cin>>n;
    
    int arr[n];
    int parni=0,neparni=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0)parni++;
        else neparni++;
    }
    
    if(parni*100/n>=50 && neparni*100/n<=30)cout<<1<<endl;
    else cout<<0<<endl;

    return 0;
}
