#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{

    char str[100];
    double max=0;
    int line=0,maxLine;
    while(cin.getline(str,100)){
        if(strlen(str)>0){
            double upCount=0,lower=0;
            for(int i=0;i<strlen(str);i++){
                if(isalpha(str[i])){
                    if(str[i]==toupper(str[i])){
                        upCount++;
                    }else lower++;
                }
            }

            double result=upCount/lower;
            cout<<fixed<<setprecision(2)<<result<<" "<<str<<endl;
            if(result>max){
                max=result;
                maxLine=line;
            }
            line++;
        }else break;
    }
    cout<<maxLine;

    return 0;
}
