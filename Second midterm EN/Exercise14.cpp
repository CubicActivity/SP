#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x; cin>>x;
    int arr[x][x];
    int count=0;

    vector<int> above;
    vector<int> bellow;

    for(int i=0;i<x;i++) {
        for(int j=0;j<x;j++) {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<x;i++) {
        for(int j=i+1;j<x;j++) above.push_back(arr[i][j]);
        for(int j=i+1;j<x;j++)bellow.push_back(arr[j][i]);
    }

    for(int i=0;i<x;i++) {
        if(arr[i][i]==1) count++;
    }

    for(int i=0;i<above.size();i++)  {
        if(above[i]!=bellow[i]) count++;
    }

    cout<<count;

    return 0;
}