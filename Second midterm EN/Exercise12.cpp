#include <iostream>
#include <cstring>

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

        if(arr[i]==arr[i+1]){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    arr[i]*=2;
                    arr[j]=0;
                }else break;
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0)
            cout<<arr[i]<<" ";
        else count++;
    }
    for(int i=0;i<count;i++){
        cout<<0<<" ";
    }

    return 0;
}
