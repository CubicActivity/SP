#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>

using namespace std;


int main()
{
    
    int n,m;
    cin>>n>>m;
    
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    int smallestSum=9999999,index;
    
    for(int j=0;j<m;j++){
        int currentSum=0;
        for(int i=0;i<n;i++){
            currentSum+=arr[i][j];
        }
        if(currentSum<smallestSum){
            smallestSum=currentSum;
            index=j;
        }
    }
    
    cout<<index;
    return 0;
}
