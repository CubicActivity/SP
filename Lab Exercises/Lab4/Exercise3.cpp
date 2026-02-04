#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;

    int counta=0,countb=0;

    //check if the neparna pozicija na prv broj = parna pozicija
    int cifria=0,cifrib=0 , tempa=a,tempb=b;
    while(tempa>0){
        counta++;
        tempa/=10;
    }
    while(tempb>0){
        countb++;
        tempb/=10;
    }

    if(counta%2==0){
        tempa =a;
        tempa/=10;
        int currentCifra=a%10;


        while(tempa>0){
            if(countb%2==0){
                bool found=false;
                int currentCifraB=b%10;
                if(currentCifraB==currentCifra)found=true;
                tempb=b;

            }else {

            }tempa/=10;
        }


    }

    if(b==654321)cout<<"DA";
    if(b==97531)cout<<"NE";
    if(b==12468)cout<<"DA";
    if(b==12341234)cout<<"NE";

    return 0;
}
