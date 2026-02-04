#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int Odd (int* a, int n){
    int x=n-1;
    if(n>0){
        if(a[x]%2!=0){
            return 1 + Odd(a,n-1);
        }
        else return 0+ Odd(a,n-1);
    }else return 0;

}

int main()
{

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }



    cout<<Odd(arr,n);

    return 0;
}
