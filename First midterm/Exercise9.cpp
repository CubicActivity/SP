#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    char num='a';
    while(num!='.'){
        cin>>num;
        if(num=='a' || num=='A')sum+=10;
        else if(num=='b' || num=='B')sum+=11;
        else if(num=='c' || num=='C')sum+=12;
        else if(num=='d' || num=='D')sum+=13;
        else if(num=='e' || num=='E')sum+=14;
        else if(num=='f' || num=='F')sum+=15;
        else if(num>'0'&&num<='9')sum+=(int)num-'0';
    }
    
    if(sum%16==0 && sum%10==6 && ((sum%100)-(sum%10))/10==1)cout<<"Poln pogodok";
    else if(sum%16==0)cout<<"Pogodok";
    else cout<<sum;

    return 0;
}
