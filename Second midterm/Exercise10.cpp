#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    char z1,z2;
    cin>>z1>>z2;

    char arr[80];
    cin.getline(arr,80);
    while(true){
        bool end=false,firstInt=false;
        int start,ending;
        cin.getline(arr,80);

        for(int i=0;i<strlen(arr);i++){
            if(arr[i]=='#'){
                end=true;
                break;
            }

            else if(!firstInt && arr[i]==z1){
                firstInt=true;
                start=i+1;
            }else if(firstInt && arr[i]==z2){
                ending=i;
            }
        }

        if(end)break;
        else{
            for(int i=start;i<ending;i++){
                cout<<arr[i];
            }cout<<endl;
        }
    }
    return 0;
}
