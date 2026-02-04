#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{

    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    int arr3[m+n];

    int i=0,j=0;
    int k=0;
    while(i<n || j<m){
        if(i<n && j<m){
            if(arr[i]<arr2[j]){
                arr3[k]=arr[i];
                k++;
                i++;
            }else if(arr[i]>arr2[j]){
                arr3[k]=arr2[j];
                k++;
                j++;
            }else if(arr[i]==arr[j]){
                arr3[k]=arr[i];
                k++;
                i++;
                arr3[k]=arr2[j];
                k++;
                j++;
            }
        }else if(i<n){
            arr3[k]=arr[i];
            k++;
            i++;
        }else if(j<m){
            arr3[k]=arr2[j];
            k++;
            j++;
        }

    }

    for(int i=0;i<n+m;i++){
        cout<<arr3[i]<<" ";
    }

    return 0;
}
