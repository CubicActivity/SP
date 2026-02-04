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
    for(int j=0;j<n-1;j++){
        int rightsum=0;

        for(int k=j+1;k<n;k++){
            rightsum+=arr[i][k];
        }
        if(arr[i][j]!=rightsum){

            cout<<-1;
            return 0;
        }
        if(j!=n-2)
            i++;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}
