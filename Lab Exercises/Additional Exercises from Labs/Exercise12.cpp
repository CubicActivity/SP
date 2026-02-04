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


    int delta=2,delta1=1;
    for(int i=0;i<n;i++){
        float prosek=0,count=0;
        if(i<n-1){
            for(int j=n-delta;j>=0;j--){
                count++;
                prosek+=arr[i][j];
            }
        }
        float leftavg = prosek/count;
        //  cout<<"AVG IS"<<leftavg<<"PROSEK"<<prosek<<"COUNT"<<count<<""<<endl;
        //  cout<<"i is"<<i<<"delta"<<delta1<<endl;
        if(i>0){
            for(int l=n-delta1;l<n;l++){
                //  cout<<i<<"i then L "<<l<<endl;
                //  cout<<arr[i][l]<<endl;
                if(arr[i][l]<leftavg){
                    arr[i][l]=-1;
                }

            }delta1++;
        }
        //cout<<i<<"I IS BLYAT"<<n<<"DELTA"<<delta<<endl;
        if(delta<n)delta++;

    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }


    return 0;
}