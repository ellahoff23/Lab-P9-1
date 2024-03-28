#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int size = 10;
    int randomNumbers[size];

    srand(time(nullptr));

    for (int i = 0; i < size; i++) {
        randomNumbers[i] = rand() % 9000 + 1000;  
    }

    cout << "Elements in order of appearance: ";
    for (int i = 0; i < size; i++) {
        cout << randomNumbers[i] << " ";
    }

    cout << "\nElements at even indices:        ";
    for (int i = 0; i < size; i += 2) {
        cout << randomNumbers[i] << " ";
    }

    cout << "\nEven elements:                   ";
    for (int i = 0; i < size; i++) {
        if (randomNumbers[i] % 2 == 0) {
            cout << randomNumbers[i] << " ";
        }
    }

    cout << "\nElements in reverse order:       ";
    for (int i = size - 1; i >= 0; i--) {
        cout << randomNumbers[i] << " ";
    }

    return 0;
}