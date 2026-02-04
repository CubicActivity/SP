#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int sum1=0,sum2=0,sum3=0,sum4=0;
    int matrica[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrica[i][j];
        }
    }

    int n1,m1;
    cin>>n1>>m1;




    if(n1>0){
        for(int i=n1-1;i>=0;i--){
            for(int j=m1;j<m;j++){
                sum1+=matrica[i][j];
            }
        }
    }

    if(n1>0 && m1>0){
        for(int i=n1-1;i>=0;i--){
            for(int j=m1-1;j>=0;j--){
                sum2+=matrica[i][j];
            }
        }
    }

    if(m1>0){
        for(int i=n1;i<n;i++){
            for(int j=m1-1;j>=0;j--){
                sum3+=matrica[i][j];
            }
        }
    }
    for(int i=n1;i<n;i++){
        for(int j=m1;j<m;j++){
            sum4+=matrica[i][j];
        }
    }
    cout<<sum1<<" "<<sum2<<" "<<sum3<<" "<<sum4;

    return 0;
}
