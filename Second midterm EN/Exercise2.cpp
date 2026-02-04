#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    int x=0;
    while(x<9){
        int count=0;
        x++;
        char arr[100];

        cin.getline(arr,100);

        for(int i=0;i<strlen(arr);i++){


            if(isalpha(arr[i])){
                if(isupper(arr[i]) && arr[i]+3<='Z'){
                    arr[i]+=3;
                    arr[i]=tolower(arr[i]);
                }
                else if(islower(arr[i]) && arr[i]+3<='z')
                    arr[i]+=3;
                else if(isupper(arr[i])){
                    int count='Z'-arr[i];
                    int remaining=3-count-1;

                    int charcode='a'+remaining;
                    arr[i]=charcode;
                }else if(islower(arr[i])){
                    int count='z'-arr[i];
                    int remaining=3-count-1;
                    int charcode='a'+remaining;
                    arr[i]=charcode;

                }
            }

            cout<<arr[i];
        }
        cout<<endl;
    }

    return 0;
}
