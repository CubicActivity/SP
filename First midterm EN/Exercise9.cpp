#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    while(cin>>a>>b>>c){
        int A = abs(a-b), B = abs(a-c), C = abs(b - c);
        if(A < B && A < C)
            cout<<min(a, b)<<" "<<max(a,b)<<endl;
        else if(B < A && B < C)
            cout<<min(a, c)<<" "<<max(a,c)<<endl;
        else if(C < A && C < B)
            cout<<min(c, b)<<" "<<max(c,b)<<endl;
        else{
            if(a > b)    swap(a, b);
            if(a > c)    swap(a, c);
            if(b > c)    swap(b, c);
            
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
    }
}