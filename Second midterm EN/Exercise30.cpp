#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int largestCount=0,second=0,num1,num2;

    for(int i=0;i<n;i++){
        int count=1;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j] && i!=j){
                count++;
            }
        }
        if(count>largestCount){
            largestCount=count;
            num1=arr[i];
        }else if(count>second && arr[i]!=num1){
            second=count;
            num2=arr[i];
        }
    }

    //cout<<"the most common are"<<num1<<" "<<num2<<endl;

    if(num1<num2){
        for(int i=0;i<num1;i++){
            for(int j=0;j<num2;j++){
                cout<<"* ";
            }cout<<endl;
        }
    }else {
        for(int i=0;i<num2;i++){
            for(int j=0;j<num1;j++){
                cout<<"* ";
            }cout<<endl;
        }
    }

    return 0;
}
