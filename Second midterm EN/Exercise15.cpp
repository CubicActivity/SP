#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    char str[480];

    for(int k=0;k<200;k++){
        cin.getline(str,480);
        string res="";
        for(int i=0;i<strlen(str);i++){
            //cout<<"I IS "<<i<<endl;
            if(isalpha(str[i])){
                //cout<<"what the"<<str[i]<<endl;
                res+=str[i];
            }else if(str[i]==' ' && res.length()!=0){
                cout<<res<<endl;
                res="";
            }else if(!isdigit(str[i]) && res.length()!=0){
                // cout<<res<<endl;
                // res="";
            }
        }
        if(res.length()>0)
            cout<<res<<endl;
    }
    return 0;
}
