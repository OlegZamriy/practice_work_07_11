#include <iostream>

using namespace std;

int main() {
    int M, N;

    cout << "Enter the size of array A: ";
    cin >> M;
    cout << "Enter the size of array B: ";
    cin >> N;

    int* arrayA = new int[M];
    int* arrayB = new int[N];

    cout << "Enter elements for array A: ";
    for (int i = 0; i < M; i++) {
        cin >> arrayA[i];
    }

    cout << "Enter elements for array B: ";
    for (int i = 0; i < N; i++) {
        cin >> arrayB[i];
    }

    int minA = arrayA[0];
    for (int i = 1; i < M; i++) {
        if (arrayA[i] < minA) {
            minA = arrayA[i];
        }
    }

    int minB = arrayB[0];
    for (int i = 1; i < N; i++) {
        if (arrayB[i] < minB) {
            minB = arrayB[i];
        }
    }

    int* arrayC = new int[4];
    arrayC[0] = minA;
    arrayC[1] = minB;

    cout << "Minimum of array A: " << minA << endl;
    cout << "Minimum of array B: " << minB << endl;
    cout << "Minimum values in the new array C: " << arrayC[0] << " " << arrayC[1] << endl;

    delete[] arrayA;
    delete[] arrayB;
    delete[] arrayC;

    return 0;
}

