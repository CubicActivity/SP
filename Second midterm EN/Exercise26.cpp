#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>

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
    bool printed=false;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            bool found=false;
            //cout<<"J IS"<<j<<endl;
            //checks if the matrix at one point of the throw
            //shows up multiple times in another
            for(int k=0;k<n;k++){
                if(arr[i][j]==arr[i][k] && j!=k){
                    found=true;
                    break;
                }
            }
            
            if(!found){
                cout<<arr[i][j]<<" ";
                printed=true;
            }
            
        }
    }
    if(!printed)cout<<"N";
    
    return 0;
}
