#include <iostream>
using namespace std;


int main() {

    int n;
    double sumPrice=0,average;

    cin>>n;
    int prices[n];
    for(int i=0;i<n;i++){

        cin>>prices[i];
        sumPrice+=prices[i];
    }
    average=sumPrice/n;

    cout<<"Average price: "<<average<<endl;

    for(int i=0;i<n;i++){
        if(prices[i]<average)cout<<"0 ";
        else if(prices[i]>=average)cout<<"1 ";
    }


    return 0;
}