#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;
double continuousFraction(int arr[], int n, int indeks )
{
    if(indeks==n-1)
    {
        return arr[indeks];
    }

    return arr[indeks] +1.0 /continuousFraction(arr, n, indeks+1);
}
int main() {
    int N;
    cin >> N;

    int arr[100];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    cout <<continuousFraction(arr, N, 0) << endl;

    return 0;
}