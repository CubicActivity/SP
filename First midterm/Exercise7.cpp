#include <iostream>

using namespace std;

int main()
{
    int m;
    cin>>m;


    for(int i=0;i<m;i++){

        if(i==0 || i==m-1){
            cout<<"%";
            for(int j=0;j<m-2;j++){
                cout<<"@";
            } cout<<"%"<<endl;
        }else{
            cout<<"%";
            for(int j=0;j<m-2;j++){
                cout<<".";
            }cout<<"%"<<endl;
        }

    }

    return 0;
}
