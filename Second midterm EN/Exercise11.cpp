#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    char str[100];
    cin.getline(str,100);

    int first=false;
    string result="";

    for(int i=0;i<strlen(str);i++){
        if(isdigit(str[i])){
            if(!first){
                first=true;
            }
            else {
                result+=str[i];
                cout<<result;
                return 0;
            }
        }

        if(first)result+=str[i];
    }
    if(first==true){
        cout<<result;
        return 0;
    }
    cout<<"No digits"<<endl;

    return 0;
}
