#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{

    int n;
    vector<int>arr;
    while(cin.good()){
        cin>>n;
        if(cin.good()){
            arr.push_back(n);
        }
    }

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            if(arr[i]==arr[j]){
                arr[j]+=j-i;
            }
        }
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
