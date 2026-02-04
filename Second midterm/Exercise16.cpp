#include <iostream>

using namespace std;

int recursion(int n, int current){
    if(n<10){
        if(n>current)current=n;
        return current;
    }else{
        if(n%10>current)current=n%10;
        return ((current)>recursion(n/10,current))?current : recursion(n/10,current);
    }
}

int main()
{
    
    int n;
    while(cin.good()){
        cin>>n;
        if(cin.good())cout<<recursion(n,0)<<endl;
        else break;
    }
    
    return 0;
}
