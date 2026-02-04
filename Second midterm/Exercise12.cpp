#include <iostream>
#include <cmath>

using namespace std;

int pozitivni(int* arr, int n,int count){
    if(n==0){
        if(arr[0]==abs(arr[0])) count++;
        return count;
    }
    else if(arr[n]==abs(arr[n])){
        count++;
        count+=pozitivni(arr,n-1,0);
        return count;
    }
    return count+pozitivni(arr,n-1,0);
}

int main(){
    
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<pozitivni(arr,n-1,0);
    
    return 0;
}