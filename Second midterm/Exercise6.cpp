#include <iostream>
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
    int counter=0;
    //check columns
    for(int j=0;j<m;j++){
        int curr=0;

        for(int i=0;i<n;i++){
            if(arr[i][j]==1)curr++;
            else if(arr[i][j]==0)curr=0;

            if(curr==3){
                counter++;
                break;
            }
        }
    }

    //check rows

    for(int i=0;i<n;i++){
        int curr=0;
        for(int j=0;j<m;j++){
            if(arr[i][j]==1)curr++;
            else if(arr[i][j]==0)curr=0;

            if(curr==3){
                counter++;
                break;
            }
        }
    }


    cout<<counter<<endl;

    return 0;
}
