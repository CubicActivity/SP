#include <iostream>
using namespace std;

int main() {

    double procent0, prag1, procent1, prag2, procent2, iznos;
    cin>>procent0>>prag1>>procent1>>prag2>>procent2>>iznos;

    double rezultat=0;

    if (iznos>prag2) {
        double temp =0;
        temp = iznos-prag2;
        rezultat+= temp*procent2/100;
        iznos-=temp;
    }
    if (iznos>prag1) {
        double temp = 0;
        temp = iznos-prag1;
        rezultat+= temp*procent1/100;
        iznos-=temp;
    }
    rezultat+=iznos*procent0/100;

    cout<<rezultat;


    return 0;
}
