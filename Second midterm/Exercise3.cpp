#include <iostream>
using namespace std;

int sum(int* arr, int size, int start) {
    int sum = 0;
    for (int i = start; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size, start;

    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cin >> start;
    cout << sum(arr, size, start);

    return 0;
}