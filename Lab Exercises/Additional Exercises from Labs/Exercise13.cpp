#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }


    int i=0;
    for(int j=0;j<n;j++){

        if(arr[i][j])


            for(int l=j+1;l<n;l++){
                if(arr[i][l]!=arr[l][i]){
                    cout<<-1<<endl;
                    for(int i=0;i<n;i++){
                        for(int j=0;j<m;j++){
                            cout<<arr[i][j]<<" ";
                        }cout<<endl;
                    }
                    return 0;
                }
            }


        i++;
    }

    cout<<1<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
