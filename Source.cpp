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

    cout << "Elements in order of appearance:" << endl;
    for (int i = 0; i < size; i++) {
        cout << randomNumbers[i] << endl;
    }

    cout << "\nElements at even indices:" << endl;
    for (int i = 0; i < size; i += 2) {
        cout << randomNumbers[i] << endl;
    }

    cout << "\nEven elements:" << endl;
    for (int i = 0; i < size; i++) {
        if (randomNumbers[i] % 2 == 0) {
            cout << randomNumbers[i] << endl;
        }
    }

    return 0;
}