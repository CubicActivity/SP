#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int count=0, total=b-a;
    bool exist=false;
    for(int i=a+1;i<=b;i++){
        if(i%2==0 && i%7==0){
            count++;
            cout<<i<<endl;
            exist=true;
        }
        if(i%2!=0 && i%3!=0){
            count++;
            cout<<i<<endl;
            exist=true;

        }

    }

    if(!exist){
        cout<<0;
    }else{
        cout<<((float)count/total)*100<<"%"<<endl;
    }

    return 0;
}
