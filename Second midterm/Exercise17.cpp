#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int n,m;
    cin>>n>>m;
    
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    if(m%2!=0){
        int middle=(m/2),leftsum=0,rightsum=0;
        for(int i=0;i<n;i++){
            leftsum=0,rightsum=0;
            for(int j=0;j<m;j++){
                if(j<middle){
                    leftsum+=arr[i][j];
                }else if(j>middle){
                    rightsum+=arr[i][j];
                }
            }
            arr[i][middle]=abs(leftsum-rightsum);
        }
    }
    else{
        int middle=(m/2),leftsum=0,rightsum=0;
        for(int i=0;i<n;i++){
            leftsum=0,rightsum=0;
            for(int j=0;j<m;j++){
                if(j<=middle-1){
                    leftsum+=arr[i][j];
                }else if(j>=middle){
                    rightsum+=arr[i][j];
                }
            }
            arr[i][middle-1]=abs(leftsum-rightsum);
            arr[i][middle]=abs(leftsum-rightsum);
        }
    }
    
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}