#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>

using namespace std;

int recursion(int* arr, int n,int index,int paren){

    if(paren==1){
        if(index<n){
            int switches=0;
            int res=max(arr[index],arr[n]);
            if(arr[n]!=arr[index])switches++;
            arr[n]=res; arr[index]=res;

            return switches+recursion(arr,n-1,index+1,paren);
        }else return 0;
    }else if(paren==0){
        if(index!=n){
            int switches=0;
            int res=max(arr[index],arr[n]);
            if(arr[n]!=arr[index])switches++;
            arr[n]=res; arr[index]=res;

            return switches+recursion(arr,n-1,index+1,paren);
        }else return 0;
    }

}

int main()
{

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int paren;
    if(n%2==0)paren=1;
    else paren=0;
    cout<<recursion(arr,n-1,0,paren)<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}
