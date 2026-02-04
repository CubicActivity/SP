#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>

using namespace std;


int main()
{
    
    int n;
    cin>>n;
    
    int arr[n][n];
    int arrB[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            arrB[i][j]=arr[i][j];
        }
    }
   
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //top middle part
            if(i==0 && j>0 && j<n-1){
                if(arr[i+1][j]==1 && arr[i][j-1]==1 && arr[i][j+1]==1){
                    arrB[i][j]=1;
                     
                }
            }
            
            
            //bottom middle part
            if(i==n-1 && j>0 && j<n-1){
                if(arr[i-1][j]==1 && arr[i][j-1]==1 && arr[i][j+1]==1){
                    arrB[i][j]=1;
                    
                }
            }
            
            
            //left middle part
            if(i>0 && i<n-1 && j==0){
                if(arr[i+1][j]==1 && arr[i-1][j]==1 && arr[i][j+1]==1){
                    arrB[i][j]=1;
                }
            }
            
            //right middle part
            if(i>0 && i<n-1 && j==n-1){
                if(arr[i+1][j]==1 && arr[i-1][j]==1 && arr[i][j-1]==1){
                    arrB[i][j]=1;
                }
            }
            
            //bottom middle part
            if(i>0 && i<n-1 && j>0 && j<n-1){
                int count=0;
                if(arr[i-1][j]==1)count++;
                if(arr[i+1][j]==1)count++;
                if(arr[i][j-1]==1)count++;
                if(arr[i][j+1]==1)count++;
                
                if(count>=3)arrB[i][j]=1;
            }
            
        }
    }
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arrB[i][j]<<" ";
        }cout<<endl;
    }
    
    
    return 0;
}
