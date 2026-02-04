#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    
    int k;
    cin>>k;
    cin.get();
    char str[900];
    cin.getline(str,900);
    
    string s="";
    for(int i=0;i<strlen(str);i++){
        if(strchr("aeiouAEIOU",str[i])){
            for(int j=0;j<k;j++){
                
                s+=str[i];
            }
        }else{
            s+=str[i];
        }
    }
    cout<<s<<endl;
    
    return 0;
}
