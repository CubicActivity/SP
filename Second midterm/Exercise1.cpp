#include <iostream>

using namespace std;

int main()
{
    string s="";
    char c='a';
    int counter=0;
    char prevChar='/';
    while(c!='#'){
        cin>>noskipws>>c;
        s+=c;
        
        if(prevChar== 'a' || prevChar== 'e' || prevChar== 'i' || prevChar== 'o' ||prevChar== 'u' || prevChar== 'A' || prevChar== 'E' || prevChar== 'I' || prevChar== 'O' ||prevChar== 'U'){
            if(c== 'a' || c== 'e' || c== 'i' || c== 'o' ||c== 'u' || c== 'A' || c== 'E' || c== 'I' || c== 'O' ||c== 'U'){
                counter++;
                cout<<(char)tolower(prevChar)<<(char)tolower(c)<<endl;
            }
        }
        prevChar=c;
    }
    
    cout<<counter;

    return 0;
}
