#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>

using namespace std;

void triangle(int n){
    if(n>1)triangle(n-1);
    if(n>0){
        for(int i=1;i<=n;i++){
            cout<<i;
        }cout<<endl;
    }
}

int main()
{

    int n;
    cin>>n;
    triangle(n);

    return 0;
}
