#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>

using namespace std;

void recursion(int* arr,int n,int index,bool found){
    if(index<n){
        if((arr[index]%10)%2==0){
            int temp=arr[index];
            while(temp>=10){
                temp/=10;
            }
            if(temp%2!=0){
                found=true;
                cout<<arr[index]<<endl;
            }
            recursion(arr,n,index+1,found);
        }else recursion(arr,n,index+1,found);
    }
    else if(found==false)cout<<"No such elements!";
}

int main()
{

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    recursion(arr,n,0,false);

    return 0;
}
