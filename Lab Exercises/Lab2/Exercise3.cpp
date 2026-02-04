#include <iostream>
using namespace std;

int main(){
    
    int a;
    cin>>a;
    
    int temp=a;
    int prva,vtora,treta,cetvrta,peta;
    peta=temp%10;
    temp/=10;
    cetvrta=temp%10;
    temp/=10;
    treta=temp%10;
    temp/=10;
    vtora=temp%10;
    temp/=10;
    prva=temp%10;
    
    int zbir=vtora+treta;
    if (zbir!=0){
        if(a%zbir==0 && prva<treta && treta<peta ){
            
            cout<<"1";
        }else cout<<0;
    }
    else {
        cout<<-1;
    }
    
    
    return 0;
}