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

    cout << "The random integers: ";
    for (int i = 0; i < size; i++) {
        cout << randomNumbers[i] << " ";
    }

    cout << "\nEven indices:        ";
    for (int i = 0; i < size; i += 2) {
        cout << randomNumbers[i] << " ";
    }

    cout << "\nEven values:         ";
    for (int i = 0; i < size; i++) {
        if (randomNumbers[i] % 2 == 0) {
            cout << randomNumbers[i] << " ";
        }
    }

    cout << "\nReversed order:      ";
    for (int i = size - 1; i >= 0; i--) {
        cout << randomNumbers[i] << " ";
    }

    cout << "\nFirst and last:      ";
    cout << randomNumbers[0] << " ";
    cout << randomNumbers[size - 1] << endl;

    return 0;
}