#include <iostream>
#include <functional>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

int FindMax(int* arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int FindMin(int* arr, int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

double CalculateAverage(int* arr, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int Action(int* arrA, int* arrB, int sizeA, int sizeB, std::function<int(int*, int)> operation) {
    int maxA = operation(arrA, sizeA);
    int minA = operation(arrA, sizeA);
    double avgA = CalculateAverage(arrA, sizeA);

    int maxB = operation(arrB, sizeB);
    int minB = operation(arrB, sizeB);
    double avgB = CalculateAverage(arrB, sizeB);

    int maxResult = max(maxA, maxB);
    int minResult = min(minA, minB);
    double avgResult = (avgA + avgB) / 2;

    return maxResult;
}

void GenerateRandomArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    int sizeA, sizeB;

    cout << "Enter the size of array A: ";
    cin >> sizeA;
    cout << "Enter the size of array B: ";
    cin >> sizeB;

    int* arrayA = new int[sizeA];
    int* arrayB = new int[sizeB];

    GenerateRandomArray(arrayA, sizeA);
    GenerateRandomArray(arrayB, sizeB);

    cout << "Array A: ";
    for (int i = 0; i < sizeA; i++) {
        cout << arrayA[i] << " ";
    }
    cout << endl;

    cout << "Array B: ";
    for (int i = 0; i < sizeB; i++) {
        cout << arrayB[i] << " ";
    }
    cout << endl;

    std::function<int(int*, int)> operation;

    cout << "Choose an action:" << endl;
    cout << "1. Find maximum" << endl;
    cout << "2. Find minimum" << endl;
    cout << "3. Calculate average" << endl;
    int choice;
    cin >> choice;

    if (choice == 1) {
        operation = FindMax;
    }
    else if (choice == 2) {
        operation = FindMin;
    }
    else if (choice == 3) {
        operation = CalculateAverage;
    }
    else {
        cout << "Invalid choice" << endl;
        return 1;
    }

    int result = Action(arrayA, arrayB, sizeA, sizeB, operation);
    cout << "Max: " << result << endl;

    delete[] arrayA;
    delete[] arrayB;

    return 0;
}


