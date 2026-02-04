#include <iostream>

using namespace std;

int main()
{
    
    int n;
    cin>>n;
    
    int a[n][n*2];
    int b[n*2][n];
    int temp=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
        
        for(int j=n;j<n*2;j++){
            cin>>a[i][j];
            b[temp][j-n]=a[i][j];
            //cout<<"at index"<<temp<<"and "<<j-n <<"is"<<b[temp][j-n]<<endl;
            
        }
        temp++;
    }
    
    for(int i=0;i<n*2;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
