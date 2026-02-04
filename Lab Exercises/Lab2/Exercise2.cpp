#include <iostream>
using namespace std;

int main(){

    int a;
    cin>>a;
    
    int b[6];
    
    int index=5;
    while(a>0){
        b[index]=a%10;
        a/=10;
        index--;
    }
    index=5;
    for(int i=0;i<3;i++){
        if(b[i]!=b[index-i]){
            cout<<0;
            return 0;
        }
    }
    cout<<1;
    
    return 0;

}