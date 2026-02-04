#include <iostream>
#include <vector>
using namespace std;

int poo(int x){

    int temp=x,najCifra=-1,indeksNajCifra;
    for(int i=0;i<5;i++){
        if(temp%10>najCifra){
            najCifra=temp%10;
            indeksNajCifra=i;
        }
        temp/=10;
    }
    return indeksNajCifra;

}

int main() {

    int arr[5]={0};
    while(true){
        int x;
        cin>>x;
        if(!cin.good()){
            break;
        }
        arr[poo(x)]++;;

    }

    for(int i=0;i<5;i++){
        cout<<i<<": "<< arr[i]<<endl;
    }

    return 0;
}


