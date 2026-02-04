#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{

    int n, k;

    cin>>n>>k;

    vector <int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    sort(arr.begin(),arr.end());

    cout<<k<<"-te najmali elementi se: ";
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
