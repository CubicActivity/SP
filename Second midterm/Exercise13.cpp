#include <iostream>

using namespace std;


int main()
{

    int x;
    cin>>x;

    int n,m;
    cin>>n>>m;

    int a[n][m];

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            sum+=a[i][j];
        }

        if(sum==x){
            for(int j=0;j<m;j++){
                a[i][j]=0;
            }
        }
        else if(sum>x){
            for(int j=0;j<m;j++){
                a[i][j]=1;
            }

        }else if(sum<x){
            for(int j=0;j<m;j++){
                a[i][j]=-1;
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}
