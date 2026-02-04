#include <iostream>
using namespace std;

int main()
{

    int n,k;
    cin>>n>>k;
    char test[80] ;
    cin.getline(test,80);
    for(int i=0;i<n;i++){
        char x[80] ;

        cin.getline(x,80);

        for(int i=0;i<80;i++){
            if((x[i]>='a' && (x[i]+k)<='z') || (x[i]>='A' && (x[i]+k)<='Z')){
                x[i]+=k;
            }else if( (x[i]+k>'z' && x[i]+k<'A') || (x[i]+k>'Z' )) {

                x[i]+=k-26;

            }

        }
        if(x)
            cout<<x<<endl;
    }


    return 0;
}
