#include <iostream>

using namespace std;

int main()
{

    int n=1;


    while(n>0){
        cin>>n;
        int najCifra=0,najBroj=0;
        if(n>0){
            for(int i=0;i<n;i++){
                int broj;
                cin>>broj;

                int temp=broj;
                while(temp>=10){
                    temp/=10;
                }
                if(temp>najCifra){
                    najCifra=temp;
                    najBroj=broj;
                }
            }

            cout<<najBroj<<endl;
        }
    }

    return 0;
}
