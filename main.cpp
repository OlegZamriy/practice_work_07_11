#include <iostream>
using namespace std;

void removeEven(int* arr, int& size) {
    int newSize = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    size = newSize;
}

void removeOdd(int* arr, int& size) {
    int newSize = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    size = newSize;
}

int main() {
    int M;

    cout << "Enter the size of the array: ";
    cin >> M;

    int* A = new int[M];

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    int choice;

    cout << "Choose an action:" << endl;
    cout << "1. Remove even values" << endl;
    cout << "2. Remove odd values" << endl;
    cin >> choice;

    if (choice == 1) {
        removeEven(A, M);
    }
    else if (choice == 2) {
        removeOdd(A, M);
    }
    else {
        cout << "Invalid choice" << endl;
        return 1;
    }

    cout << "Updated array:" << endl;
    for (int i = 0; i < M; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    delete[] A;

    return 0;
}
