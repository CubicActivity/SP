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
    
    int counter=0;
    for(int i=0;i<m;i++){
        bool found=false;
        int consecutive=0;
        for(int j=0;j<n;j++){
            if(arr[i][j]==1){
                consecutive++;
            }else consecutive=0;
            if(consecutive>=3 && !found){
                found=true;
                counter++;
            }
        }
    }
    
    int i=0,j=0;
    while(j<n){
        bool found=false;
        int consecutive=0;
        for(int i=0;i<m;i++){
            if(arr[i][j]==1){
                consecutive++;
            }else consecutive=0;
            if(consecutive>=3 && !found){
                found=true;
                counter++;
            }
        }
        j++;
    }
    
    cout<<counter;
    

    return 0;
}
