#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a+b+c==180){
        if(a>=b && a>=c){
            cout<<"YES"<<endl;
            if(a<90)cout<<"ACUTE"<<endl;
            else if(a==90)cout<<"RIGHT"<<endl;
            else cout<<"OBTUSE"<<endl;
        }

        if(b>=a && b>=c){
            cout<<"YES"<<endl;
            if(b<90)cout<<"ACUTE"<<endl;
            else if(b==90)cout<<"RIGHT"<<endl;
            else cout<<"OBTUSE"<<endl;
        }

        if(c>=a && c>=b){
            cout<<"YES"<<endl;
            if(c<90)cout<<"ACUTE"<<endl;
            else if(c==90)cout<<"RIGHT"<<endl;
            else cout<<"OBTUSE"<<endl;
        }
    }else cout<<"NO";



    return 0;
}
