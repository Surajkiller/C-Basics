#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int highestFactor = 1; // default, since 1 is always a factor

    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            highestFactor = i; // store the latest factor
        }
    }

    cout << "Highest factor (other than itself): " << highestFactor << endl;
    return 0;
}
