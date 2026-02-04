#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    
    int n;
    cin>>n;
    
    int arr[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    int i=0;
    for(int j=0;j<n;j++){
        arr[i][j]=arr[i][j]*(-1);
        i++;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%3d ", arr[i][j]);
        }cout<<endl;
    }
    
    return 0;
}
