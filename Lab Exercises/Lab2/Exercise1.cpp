#include <iostream>
using namespace std;

int main(){
    
    int a,b,c,d;
    
    cin>>a>>b>>c>>d;
    
    if((a+b)%2==0&&(c+d)%2!=0){
        cout<<1;
    }else cout<<0;
    
    return 0;
}