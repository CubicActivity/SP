#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int zbir,najgolem=0,indeks;
    for(int i=n-1;i>0;i--){
        zbir=0;
        for(int j=1;j<i-1;j++){
            if(i%j==0){
                zbir+=j;
            }
        }if (zbir>najgolem){najgolem=zbir;
            indeks=i;

        }
    }
    cout<<indeks<<endl;


    return 0;
}
