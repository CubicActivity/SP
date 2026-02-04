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
    if(n>2){
        int jmax=1;
        int najgolem=arr[1][0];
        //under main diagonal
        for(int i=1;i<n;i++){
            for(int j=0;j<jmax;j++){
                if(najgolem>arr[i][j])najgolem=arr[i][j];
            }
            jmax++;
        }
        jmax=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<jmax;j++){
                arr[i][j]=najgolem;
            }
            jmax++;
        }


        //above diagonal
        jmax=1;
        for(int i=0;i<n;i++){
            for(int j=jmax;j<n;j++){
                if(najgolem<arr[i][j])najgolem=arr[i][j];
            }
            jmax++;
        }

        jmax=1;
        for(int i=0;i<n;i++){
            for(int j=jmax;j<n;j++){
                arr[i][j]=najgolem;
            }
            jmax++;
        }
    }

    //print matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}
