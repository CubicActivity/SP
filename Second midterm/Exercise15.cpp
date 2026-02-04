#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int poramnet(long a){
    int b=0,mult=1;
    long temp=a;
    while(temp>0){
        if(temp%10==9){
            b+=((temp%10)-2)*mult;
        }else b+=((temp%10)*mult);

        mult*=10;
        temp/=10;

    }
    return b;
}

int main()
{
    int counter=0;
    long a;
    vector <long> arr;
    while(cin.good()){
        cin>>a;
        if(cin.good()){
            counter++;
            arr.push_back(poramnet(a));
        }
    }

    if(counter>5)counter=5;

    sort(arr.begin(),arr.end());
    for(int i=0;i<counter;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
