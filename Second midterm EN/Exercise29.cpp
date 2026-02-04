#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{

    char str[100];

    while(cin.getline(str,100)){
        //cout<<"STRLEN IS "<<strlen(str)<<endl;
        if(strlen(str)>0){
            if(strlen(str)%2==0){
                bool isGood=true;
                for(int i=0;i<strlen(str);i++){
                    if(i<strlen(str)-1-i){
                        if(strchr("aeiouAEIOU",str[i]) || strchr("aeiouAEIOU",str[strlen(str)-1-i])){
                            char temp1=toupper(str[i]);
                            char temp2=toupper(str[strlen(str)-1-i]);
                            if(temp1!=temp2){
                                isGood=false;
                                break;
                            }
                        }
                    }
                }if(isGood)cout<<str<<endl;
            }else{
                bool isGood=true;
                for(int i=0;i<strlen(str);i++){
                    if(i<strlen(str)/2){
                        if(strchr("aeiouAEIOU",str[i]) || strchr("aeiouAEIOU",str[strlen(str)-1-i])){
                            char temp1=toupper(str[i]);
                            char temp2=toupper(str[strlen(str)-1-i]);
                            if(temp1!=temp2){
                                isGood=false;
                                break;
                            }
                        }
                    }
                }if(isGood)cout<<str<<endl;
            }

        }
    }

    return 0;
}
