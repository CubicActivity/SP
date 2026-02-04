#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum=0,count=0;

    double arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        count++;
    }

    double avg=sum/count;

    double bestDelta=999,element;
    for(int i=0;i<n;i++){
        if(abs(avg-arr[i])<bestDelta){

            bestDelta=abs(avg-arr[i]);
            element=arr[i];
        }
    }


    cout<<fixed<<setprecision(2)<<element;

    return 0;
}
