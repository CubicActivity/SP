#include <iostream>
using namespace std;

int main() {

    //pred 9 treba da stigne
    //sluzba pocnuva od 9 raboti 2 csa pausa 30 min raboti 1 pausa 30 raboti 2 casa
    // 5 minuti po student, 5casa rabota

    int x;
    cin>>x;

    int time;
    time=x*5-5;
    int minuti=0;
    while(time%60!=0){
        time-=5;
        minuti+=5;
    }
    time/=60;

    if(time>=2){
        minuti+=30;
    }
    if(time>=3 && minuti>=30){
        minuti+=30;
    }
    if(minuti>=60){
        time++;
        minuti-=60;
    }
    if(time>=6 && minuti>=1)
        cout<<"Studentot ne e voopsto usluzen";
    else
        cout<<"Hours: "<<time<<", minutes: "<< minuti;


    return 0;
}
