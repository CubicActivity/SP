#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    if(n>2){
        for(int i=0;i<n;i++){
            cout<<"+";
        }cout<<endl;
        for(int i=0;i<n-2;i++){
            cout<<"+";
            for(int i=0;i<n-2;i++){
                cout<<"-";
            }
            cout<<"+"<<endl;
        }
        for(int i=0;i<n;i++){
            cout<<"+";
        }
    }

    return 0;
}
