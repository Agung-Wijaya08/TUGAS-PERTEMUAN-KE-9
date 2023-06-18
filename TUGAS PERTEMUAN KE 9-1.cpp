#include <iostream>
#include <string>
using namespace std;

void insertionSort(string arr[], int n) {
    for (int i = 1; i < n; i++) {
        string key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    const int size = 7;
    string data[size] = {"Jakarta", "Malang", "Surabaya", "Bandung", "Garut", "Depok", "Tangerang"};

    cout << "Data sebelum diurutkan: ";
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }

    insertionSort(data, size);

    cout << "\nData setelah diurutkan: ";
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }

    return 0;
}
