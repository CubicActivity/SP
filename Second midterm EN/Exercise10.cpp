#include <iostream>

using namespace std;

int main()
{
    
    int m,n;
    cin>>m>>n;
    
    int arr[m][n];
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    int nova[m][n];
    if(m==1 && n==1){
        cout<<0;
        return 0;
    }
    
    if(n==1 && m>1){
        int j=0;
        for(int i=0;i<m;i++){
                int sum=0;
                if(i==0){
                    if(arr[i+1][j]>0)sum+=arr[i+1][j];
                }
                if(i>0 && i<m-1){
                    if(arr[i+1][j]>0)sum+=arr[i+1][j];
                    if(arr[i-1][j]>0)sum+=arr[i-1][j];
                }
                if(i==m-1){
                    if(arr[i-1][j]>0)sum+=arr[i-1][j];
                }
                nova[i][j]=sum;
        }
        
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<nova[i][j]<<" ";
        }cout<<endl;
    }
        return 0;
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int posSum=0;
            //left corner
            if(i==0 && j==0){
                if(arr[i][j+1]>0)posSum+=arr[i][j+1];
                if(arr[i+1][j]>0)posSum+=arr[i+1][j];
                nova[i][j]=posSum;
                continue;
            }
            //top middle
            if(i==0 && j>0 && j<n-1){
                if(arr[i][j-1]>0)posSum+=arr[i][j-1];
                if(arr[i][j+1]>0)posSum+=arr[i][j+1];
                if(arr[i+1][j]>0)posSum+=arr[i+1][j];
                nova[i][j]=posSum;
                continue;
            }
            
            //right corner
            if(i==0 && j==n-1){
                if(arr[i][j-1]>0)posSum+=arr[i][j-1];
                if(arr[i+1][j]>0)posSum+=arr[i+1][j];
                nova[i][j]=posSum;
                continue;
            }
            
            //mid left
            if(i>0 && i<m-1 && j==0){
                if(arr[i-1][j]>0)posSum+=arr[i-1][j];
                if(arr[i][j+1]>0)posSum+=arr[i][j+1];
                if(arr[i+1][j]>0)posSum+=arr[i+1][j];
                nova[i][j]=posSum;
                continue;
            }
            
            //mid center
            if(i>0 && i<m-1 && j>0 && j<n-1){
                if(arr[i-1][j]>0)posSum+=arr[i-1][j];
                if(arr[i+1][j]>0)posSum+=arr[i+1][j];
                if(arr[i][j-1]>0)posSum+=arr[i][j-1];
                if(arr[i][j+1]>0)posSum+=arr[i][j+1];
                
                nova[i][j]=posSum;
                continue;
            }
            
            //mid right
            if(i>0 && i<m-1 && j==n-1){
                if(arr[i][j-1]>0)posSum+=arr[i][j-1];
                if(arr[i-1][j]>0)posSum+=arr[i-1][j];
                if(arr[i+1][j]>0)posSum+=arr[i+1][j];
                nova[i][j]=posSum;
                continue;
            }
            
            //bottom left
            if(i==m-1 && j==0){
                if(arr[i][j+1]>0)posSum+=arr[i][j+1];
                if(arr[i-1][j]>0)posSum+=arr[i-1][j];
                nova[i][j]=posSum;
                continue;
            }
            
            //bottom center
            if(i==m-1 && j>0 && j<n-1){
                if(arr[i][j-1]>0)posSum+=arr[i][j-1];
                if(arr[i][j+1]>0)posSum+=arr[i][j+1];
                if(arr[i-1][j]>0)posSum+=arr[i-1][j];
                nova[i][j]=posSum;
                continue;
            }
            
            //bottom right
            if(i==m-1 && j==n-1){
                if(arr[i][j-1]>0)posSum+=arr[i][j-1];
                if(arr[i-1][j]>0)posSum+=arr[i-1][j];
                nova[i][j]=posSum;
                continue;
            }
        }
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<nova[i][j]<<" ";
        }cout<<endl;
    }
    
    return 0;
}
