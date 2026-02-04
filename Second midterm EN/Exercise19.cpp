#include <iostream>
#include <cstring>

using namespace std;

int main()
{


    int n;
    cin>>n;

    int arr[n][n];
    int next[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            next[i][j]=arr[i][j];
        }
    }

    int mid=n/2;
    //
    for(int i=0;i<n;i++){
        int sumRight=0,topSum=0;
        for(int j=i+1;j<n;j++){
            sumRight+=arr[i][j];
        }

        if(i>0)
            for(int k=i-1;k>=0;k--){
                topSum+=arr[k][i];
            }
        next[i][i]=sumRight+topSum;
    }

    for(int i=0;i<n;i++){
        int sumLeft=0,bottomSum=0;
        for(int j=n-2-i;j>=0;j--){
            sumLeft+=arr[i][j];

        }
        if(i<n-1)
            for(int k=i+1;k<n;k++){
                bottomSum+=arr[k][n-1-i];
            }
        if(i==mid && n%2!=0){
            next[i][n-1-i]+=sumLeft+bottomSum;
        }
        else next[i][n-1-i]=sumLeft+bottomSum;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<next[i][j]<<" ";
        }cout<<endl;
    }


    return 0;
}
