#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>9){
        //najgolem priroden broj pomal od n kojso e interesen
        for(int j=n-1;j>0;j--){
            int reverse[10],index=-1;

            int temp=j,count=0;
            while(temp>0){
                count++;
                index++;
                reverse[index]=temp%10;
                temp/=10;

            }
            int x=0;
            for(int i=0;i<count;i++){
                x*=10;
                x+= reverse[i];
            }
            if(x%count==0){
                //specialen broj
                cout<<j;
                return 0;
            }
        }



    }else cout<<"Brojot ne e validen";




    return 0;
}
