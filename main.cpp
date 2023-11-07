#include <iostream>
using namespace std;

void computeSum(int* A, int* B, int* C, int size) {
    for (int i = 0; i < size; i++) {
        C[i] = A[i] + B[i];
    }
}

int main() {
    int size = 5;
    int A[] = { 1, 2, 3, 4, 5 };
    int B[] = { 6, 7, 8, 9, 10 };
    int C[5];

    computeSum(A, B, C, size);

    cout << "Array A: ";
    for (int i = 0; i < size; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Array B: ";
    for (int i = 0; i < size; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    cout << "Array C (sum of A and B): ";
    for (int i = 0; i < size; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
