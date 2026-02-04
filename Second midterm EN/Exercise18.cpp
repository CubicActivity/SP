#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    char str[100];

    double largest=0;
    string big="";
    for(int k=0;k<76;k++){

        cin.getline(str,100);

        double ratio;
        double chars=0,nums=0;
        for(int i=0;i<strlen(str);i++){
            if(isalpha(str[i]))chars++;
            else if(isdigit(str[i]))nums++;
            // else chars++;

        }
        if(chars!=0){
            ratio=nums/chars;
            //cout<<"RATIO"<<ratio<<endl;
            // cout<<"nums"<<nums<<endl;
            // cout<<"letters"<<chars<<endl;
            if(ratio>=largest){
                largest=ratio;
                big=str;
                //cout<<big<<"is BIG"<<endl;
            }
        }

    }
    cout<<big<<endl;

    return 0;
}
