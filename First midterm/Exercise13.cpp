#include<iostream>
using namespace std;

int main() {
    int prevMaxDigitSum = 0;

    while (true) {
        int number;
        cin >> number;

        if (!cin) {
            // Exit loop if non-integer is entered
            break;
        }

        // Calculate the sum of digits for the current number
        int currentDigitSum = 0;
        int tempNumber = number;
        while (tempNumber > 0) {
            currentDigitSum += tempNumber % 10;
            tempNumber /= 10;
        }

        // Add the maximum digit value from the previous number
        int result = (prevMaxDigitSum > 0) ? (prevMaxDigitSum + currentDigitSum) : currentDigitSum;

        // Print the result
        cout << number << ": " << result << endl;

        // Update prevMaxDigitSum for the next iteration
        prevMaxDigitSum = 0;
        tempNumber = number;
        while (tempNumber > 0) {
            int digit = tempNumber % 10;
            prevMaxDigitSum = max(prevMaxDigitSum, digit);
            tempNumber /= 10;
        }
    }

    return 0;
}