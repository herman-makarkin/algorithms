#include <iostream>

using namespace std;

void printArray(int array[], int size) {
    int i;
    for (i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int array[], string mode, int low, int high) {
    int pivot = array[high];
    int i = (low - 1);
    if (mode == "asc") {
        for (int j = low; j < high; j++) {
            if (array[j] <= pivot) {
                i++;
                swap(&array[i], &array[j]);
            }
        }
    } else if (mode == "desc") {
        for (int j = low; j < high; j++) {
            if (array[j] >= pivot) {
                i++;
                swap(&array[i], &array[j]);
            }
        }
    }

    swap(&array[i + 1], &array[high]);
  
    return (i + 1);
}

void quickSort(int array[], string mode, int low, int high) {
    if (low < high) {
        int pi = partition(array, "asc", low, high);
        if (mode == "asc") {
        quickSort(array, "asc", low, pi - 1);
        quickSort(array, "asc", pi + 1, high);
    } else if (mode == "desc") {
        int pi = partition(array, "desc", low, high);
        quickSort(array, "desc", pi + 1, high);
        quickSort(array, "desc", low, pi - 1);
    }
  }
}

int main() {
  int data[] = {5, 2, 8, 1, 9, 3, 6, 4, 7};
  int n = sizeof(data) / sizeof(data[0]);
  
  cout << "Unsorted Array: \n";
  printArray(data, n);
  quickSort(data, "desc", 0, n - 1);
  
  printArray(data, n);
}
