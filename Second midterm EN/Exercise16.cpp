#include <iostream>
#include <cstring>

using namespace std;

int main()
{


    int hexaCounter=0;
    int k=0;
    char str[30];
    while(cin.getline(str,30)){

        bool foundBadChar=false;
        //cout<<str<<" E NIZATA ZA "<<k<<endl;
        if(strlen(str)>0){
            for(int i=0;i<strlen(str);i++){
                if(isalpha(str[i])){
                    if(strchr("abcdefABCDEF1234567890",str[i])){
                        str[i]=toupper(str[i]);
                    }else{
                        foundBadChar=true;
                    }
                }else if(!isdigit(str[i])){

                    foundBadChar=true;
                }

                if(foundBadChar)break;
            }
            if(!foundBadChar){
                hexaCounter++;
                cout<<str<<endl;
            }

        }
    }
    cout<<"Total: "<<hexaCounter<<endl;




    return 0;
}
