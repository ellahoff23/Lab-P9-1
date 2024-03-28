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

    for (int i = 0; i < size; i++) {
        cout << randomNumbers[i] << endl;
    }

    return 0;
}