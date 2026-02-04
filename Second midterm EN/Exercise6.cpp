#include <iostream>
#include <cstring>
#include <cmath>
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

    int y1,x1;
    cin>>y1>>x1;

    if(arr[y1][x1]==0){

        for(int i=x1;i<n;i++){
            if(arr[y1][i]==0)
                arr[y1][i]=1;
            else break;
        }

        for(int i=x1-1;i>=0;i--){
            if(arr[y1][i]==0)
                arr[y1][i]=1;
            else break;
        }

        for(int i=y1+1;i<m;i++){
            if(arr[i][x1]==0)
                arr[i][x1]=1;
            else break;
        }

        for(int i=y1-1;i>=0;i--){
            if(arr[i][x1]==0)
                arr[i][x1]=1;
            else break;
        }

        //all horizontal until first 1 od end of coulmn become 1
        //all vertical until first 1 or end of row become 1
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }

    return 0;
}
