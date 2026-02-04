#include <iostream>
using namespace std;
int main() {
    int x,a;
    cin>>x;

    int digitsA=0,digitsB=0,tempa,tempb=x;
    while(tempb>0){
        digitsB++;
        tempb/=10;
    }
    while(true){
        digitsA=0;
        cin>>a;
        if(cin.good()){
            tempa=a;
            while(tempa>0){
                digitsA++;
                tempa/=10;
            }

            if(digitsA==digitsB)cout<<a<<endl;

        }else break;
    }

    return 0;
}
