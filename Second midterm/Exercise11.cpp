#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
int main(){

    while(true){
        char str[100];
        cin.getline(str,100);
        bool stop=false;
        int counter=0;
        vector <char> arr;
        for(int i=0;i<strlen(str);i++){

            if(str[i]=='#'){
                stop=true;
                break;
            }else if(isdigit((char)str[i])){
                counter++;
                arr.push_back(str[i]);
            }
        }
        if(stop)break;
        sort(arr.begin(),arr.end());


        cout<<counter<<":";
        for(int i=0;i<arr.size();i++){
            cout<<arr[i];

        }
        cout<<endl;



    }


    return 0;
}