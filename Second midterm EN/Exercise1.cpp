#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    cin.get();
    for(int i=0;i<n;i++){
        char arr[80];
        cin.getline(arr,80);
        // 1 5 Welcome to the Machine
        for(int j=0;j<strlen(arr);j++){

            if(isalpha(arr[j]) && isupper(arr[j]) && arr[j]+x<='Z'){
                arr[j]=arr[j]+x;
            }
            else if(isalpha(arr[j]) && islower(arr[j]) && arr[j]+x<='z'){
                arr[j]=arr[j]+x;

            }
            else if(isalpha(arr[j])){
                //90 small 122 big Z
                int count,real,temp=x;
                if(isupper(arr[j])){

                    count=abs(arr[j]-'Z');
                    temp=temp-count-1;
                    int charcode='A'+temp;
                    arr[j]=charcode;
                }else {
                    count=abs(arr[j]-'z');
                    temp=temp-count-1;
                    int charcode='a'+temp;
                    arr[j]=charcode;
                }


            }
        }

        for(int j=0;j<strlen(arr);j++){
            cout<<arr[j];
        }cout<<endl;

    }

    return 0;
}
