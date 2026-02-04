#include <iostream>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    for (int i = n - 1; i >= 0; i--) {
        bool bez = true;
        int temp = i;

        while (temp > 0) {
            int tempb = x;
            while (tempb > 0) {
                if (temp % 10 == tempb % 10) {
                    bez = false;
                    break;
                }
                tempb /= 10;
            }
            temp /= 10;
        }

        if (bez) {
            cout << i << endl;
            return 0;
        }
    }

    cout << "0" << endl;
    return 0;
}