#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n-1);

    for(int i=0;i<=100;i++){
        int counterParni=0;
        bool first=false;
        int temp;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                if(!first){
                    temp=j;
                    first=true;
                }
                counterParni++;
            }
        }
        if(counterParni%2==0 && counterParni!=0){
            cout<<"Najmaliot element koj se pojavuva paren broj pati e "<<arr[temp];
            return 0;
        }
    }
    cout<<"Nitu eden element ne se pojavuva paren broj pati!";
    return 0;
}