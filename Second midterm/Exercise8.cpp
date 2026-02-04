#include <iostream>
#include <cctype>
#include <cstring>
#include <vector>
#define MAX 100
using namespace std;

bool isTrue(char* arr) {
    int len = strlen(arr) - 1;
    int count = 0;

    for (int i = 0; i < len; i++) {
        if (isdigit(arr[i])) {
            count++;
        }
    }
    if (count >= 2) {
        return true;
    }
    return false;
}

void print(string value) {
    int indexA=0;
    int indexB=0;

    for(int i=0;i<value.length();i++) {
        if(value[i]>='0' && value[i]<='9') {
            indexA=i;
            for(int j=i+1;j<value.length();j++) {
                if(value[j]>='0' && value[j]<='9') {
                    indexB=j;
                }
            }
            break;
        }
    }

    for(int i=indexA;i<=indexB;i++) {
        cout<<value[i];
    }
}

int main() {
    char arr[MAX];
    vector<string> store;

    while (cin.getline(arr, MAX) && arr[0] != '0') {
        if (isTrue(arr)) {
            string copy = arr;
            store.push_back(copy);
        }
    }

    int max=0;
    int index=0;

    for(int i=0;i<store.size();i++) {
        if(max<=store[i].length()) {
            max=store[i].length();
            index=i;
        }
    }

    print(store[index]);

    return 0;
}