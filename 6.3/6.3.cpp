// Ітераційний спосіб
/*
5
1 2 3 4 5 
*/

#include <iostream>

using namespace std;

template<typename T>
T sumArray(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

template<typename T>
T findMax(T arr[], int size) {
    T max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void printArray(int arr[], int size) {
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

void incrementArrayElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] += 1;
    }
}

void inputArray(int arr[], int size) {
    cout << "Enter " << size << "  = " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void testIterativeWithTemplates() {
    int size;
    cout << "Enter array: ";
    cin >> size;

    int* testArray = new int[size];  

    inputArray(testArray, size);

    cout << "Original = ";
    printArray(testArray, size);

    int sum = sumArray(testArray, size);
    int max = findMax(testArray, size);

    cout << "Sum : " << sum << endl;
    cout << "Max : " << max << endl;

    incrementArrayElements(testArray, size);
    cout << "Modified array: ";
    printArray(testArray, size);

    delete[] testArray; 
}

int main() {
    testIterativeWithTemplates();  
    return 0;
}
