#include <iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int arr[n][m];
    float avg[n];

    for(int i=0;i<n;i++){
        float sum=0,count=0;
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            sum+=arr[i][j];
            count++;
        }
        avg[i]=sum/count;
    }

    for(int i=0;i<n;i++){
        int difWinner;
        float biggestDif=-99999;
        for(int j=0;j<m;j++){
            if((avg[i]-arr[i][j])>biggestDif || (avg[i]-arr[i][j])*(-1)>biggestDif){
                if((avg[i]-arr[i][j])<0){
                    biggestDif=(avg[i]-arr[i][j])*-1;
                }else
                    biggestDif=(avg[i]-arr[i][j]);

                difWinner=arr[i][j];
            }
        }
        cout<<difWinner<<" ";
    }



    return 0;
}
