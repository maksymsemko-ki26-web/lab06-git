#include <iostream>
using namespace std;

int main() {
    const int SIZE = 12;
    int A[SIZE] = {2, 4, 5, 8, 3, 6, 9, 10, 12, 7, 14, 16};

    cout << "Array A: ";
    for (int i = 0; i < SIZE; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    int oddCount = 0;
    int secondOddIndex = -1;
    int secondOddValue = 0;

    for (int i = 0; i < SIZE; i++) {
        if (A[i] % 2 != 0) {
            oddCount++;

            if (oddCount == 2) {
                secondOddIndex = i;
                secondOddValue = A[i];
                break;
            }
        }
    }

    if (secondOddIndex != -1) {
        cout << "Second odd element: " << secondOddValue << endl;
        cout << "Its index: " << secondOddIndex << endl;
    } else {
        cout << "There are less than two odd elements." << endl;
    }

int C[SIZE];

if (secondOddIndex != -1) {
    for (int i = 0; i < SIZE; i++) {
        C[i] = A[i];

        if (i > secondOddIndex) {
            C[i] = A[i] / secondOddValue;
        }
    }
} else {
    for (int i = 0; i < SIZE; i++) {
        C[i] = A[i];
    }
}

cout << "Array C: ";
for (int i = 0; i < SIZE; i++) {
    cout << C[i] << " ";
}
cout << endl;

    return 0;
}