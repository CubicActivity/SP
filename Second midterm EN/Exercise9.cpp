#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    vector<int> smallest;
    int a,b;
    while(cin.good()){
        cin>>a;
        if(cin.good()){
            int arr[20];
            int temp=a,reverse=0;
            bool multiply=false;
            if(temp%10==1)multiply=true;
            while(temp>0){
                if((temp%10)%2==0){
                    reverse*=10;
                    reverse+=temp%10+1;
                }else{
                    reverse*=10;
                    reverse+=temp%10-1;
                }
                temp/=10;
            }
            
            int result=0;
            while(reverse>0){
                result*=10;
                result+=reverse%10;
                reverse/=10;
            }
            if(multiply){
                //cout<<result<<"MULTIPLIED"<<endl;
                result*=10;
                
            }
            
            smallest.push_back(result);
            
        }
    }
    
    sort(smallest.begin(),smallest.end());
    for(int i=0;i<5;i++){
        cout<<smallest[i]<<" ";
    }
    
    return 0;
}
