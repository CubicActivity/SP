#include <iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;

    float A[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }

    float sumX=0,sumY=0;
    int elements=1;

    //sumX
    for(int i=1;i<n;i++){
        int temp=elements;
        int j=n-1;
        while(temp>0){
            sumX+=A[i][j];
            temp--;
            j--;
        }
        elements++;
    }
    elements=1;
    //sumY
    for(int i=1;i<n;i++){
        int temp=elements;
        int j=0;
        while(temp>0){
            sumY+=A[i][j];
            temp--;
            j++;
        }
        elements++;
    }

    float b[n][n];
    //display matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            b[i][j]=0;
        }
    }
    int j=0;
    for(int i=0;i<n;i++){
        b[i][j]=sumY;
        j++;
    }

    j=n-1;
    for(int i=0;i<n;i++){
        if(b[i][j]==sumY)b[i][j]+=sumX;
        else b[i][j]=sumX;
        j--;
    }

    //display matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";

        }
        cout<<endl;
    }

    return 0;
}
