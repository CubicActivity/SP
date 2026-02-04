#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>

using namespace std;

int abbreviate(int* arr, int n, int k){
    int largest=0;
    for(int i=0;i<n;i++){
        vector<int>digits;
        int number=0;
        
        int temp=arr[i];
        while(temp>0){
            if(temp%10>k)digits.push_back(temp%10);
            temp/=10;
        }
        for(int j=digits.size()-1;j>=0;j--){
            number*=10;
            number+=digits[j];
        }
        if(number>largest)largest=number;
       
        
    } cout<<largest<<endl;
    
    return 0;
}

int main()
{
    
    int n,k;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    
    //delete all digits less than k
    abbreviate(arr,n,k);
    return 0;
}
