#include <iostream>
using namespace std;

int main() {

    int a,b;
    cin>>a>>b;
    int sum=0;
    for(;a<b;a++){
        if(a%3==0)sum+=a;
    }
    cout<<sum;

    return 0;
}
