#include<iostream>
#include<algorithm>  // Add this for the swap function
using namespace std;

template <class var>
void bubbleSort(var arr[], int sizeOfArray) {
    int i, j;
    for (i = 0; i < sizeOfArray - 1; i++) {
        bool flag = true;
        for (j = 0; j < sizeOfArray - i - 1; j++) {
            if (arr[j + 1] < arr[j]) {
                swap(arr[j + 1], arr[j]);
                flag = false;
            }
        }
        if (flag == true)
            break;
    }
}

int main() {
    int array1[10] = {10, 9, 38, 423, 65, 45, 32, 3546, 45, 425};
    char array2[5] = {'u', 'o', 'i', 'e', 'a'};
    double array3[5] = {12.31, 314.56, 865.5467, 568.457, 9887.56};

    int i;

    // Sorting array1
    bubbleSort(array1, 10);

    cout << "Sorted Array1 --> ";
    for (i = 0; i < 10; i++) {
        cout << array1[i] << " ";
    }

    // Sorting array3
    bubbleSort(array3, 5);

    cout << "\nSorted Array3 --> ";
    for (i = 0; i < 5; i++) {
        cout << array3[i] << " ";
    }

    return 0;
}
