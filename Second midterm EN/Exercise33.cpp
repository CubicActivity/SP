#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>

using namespace std;


int main()
{

    int n;
    cin>>n;

    double arr[n][n];
    double arrb[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            arrb[i][j]=arr[i][j];
        }
    }


    for(int i=0;i<n;i++){
        cout<<arr[0][i]<<" ";

    }
    for(int i=1;i<n;i++){
        cout<<arr[i][n-1-i]<<" ";

    }
    for(int j=1;j<n;j++){
        cout<<arr[n-1][j]<<" ";
    }
    //

    //replace it with reverse z diagonal and print it
    int j=n-1;
    for(int k=0;k<n;k++){
        arrb[0][k]=arr[n-1][j];
        j--;
    }cout<<endl;

    //reverse diagonal
    for(int i=1;i<n;i++){
        arrb[n-1-i][i]=arr[i][n-1-i];

    }
    //reverse last throw
    for(int j=0;j<n;j++){
        arrb[n-1][n-1-j]=arr[0][j];
    }



    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arrb[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}
