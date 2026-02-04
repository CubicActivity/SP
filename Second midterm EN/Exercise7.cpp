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



    if(m%2!=0){
        // cout<<"SREDINATA E"<<m/2<<endl;
        int j=0;
        while(j<n){
            int topsum=0,bottomsum=0;
            for(int i=0;i<m/2;i++){
                topsum+=arr[i][j];
            }

            for(int i=m/2+1;i<m;i++){
                bottomsum+=arr[i][j];
            }
            int res=abs(topsum-bottomsum);

            arr[m/2][j]=res;
            j++;
            // cout<<"top sum is "<<topsum<<endl;
            // cout<<"bottom sum is "<<bottomsum<<endl;
        }
    }else {
        //  cout<<"SREDINATA E"<<m/2<<endl;
        int j=0;
        while(j<n){
            int topsum=0,bottomsum=0;
            for(int i=0;i<=(m/2)-1;i++){
                topsum+=arr[i][j];
            }

            for(int i=m/2;i<m;i++){
                bottomsum+=arr[i][j];
            }
            // cout<<"top sum is "<<topsum<<endl;
            // cout<<"bottom sum is "<<bottomsum<<endl;
            int res=topsum-bottomsum;
            res=abs(res);
            // cout<<"RES IS"<<res<<endl;

            arr[m/2][j]=res;
            arr[(m/2)-1][j]=res;
            j++;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }


    return 0;
}
