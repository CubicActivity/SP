#include <iostream>
using namespace std;

int main(){

    float uplata;
    cin>>uplata;

    bool prodolzi=true;
    char shifra[9];

    int tip;
    float koef;

    string prevLivce;
    int winType=0;
    float winKoef=0;



    while(prodolzi){

        cin>>shifra;
        for(int i=0;i<9;i++){
            if(shifra[i]=='#'){
                prodolzi=false;
            }
        }

        if(!prodolzi)break;

        cin>>tip>>koef;
        uplata*=koef;
        if(koef>winKoef){
            winType=tip;
            winKoef=koef;
            prevLivce=shifra;
        }

    }

    cout<<prevLivce<<" "<<winType<<" "<<winKoef<<endl;
    cout<<uplata;

    return 0;
}
