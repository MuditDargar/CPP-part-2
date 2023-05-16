#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Array {
private: 
    int arr[MAX_SIZE];
    int size;
public:
    Array() {
        size = 0;
    }
    void insert(int num) {
        arr[size] = num;
        size++;
    }
    int getSize() const {
        return size;
    }
    int operator[](int index) const {
        return arr[index];
    }
};

// Function to perform the union of two arrays
void arrayUnion(const Array& arr1, const Array& arr2, Array& result) {
    int size1 = arr1.getSize();
    int size2 = arr2.getSize();
    int i, j;

    for (i = 0; i < size1; i++) {
        result.insert(arr1[i]);
    }

    for (j = 0; j < size2; j++) {
        bool found = false;
        for (i = 0; i < size1; i++) {
            if (arr2[j] == arr1[i]) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.insert(arr2[j]);
        }
    }
}

// Function to perform the intersection of two arrays
void arrayIntersection(const Array& arr1, const Array& arr2, Array& result) {
    int size1 = arr1.getSize();
    int size2 = arr2.getSize();
    int i, j;

    for (i = 0; i < size1; i++) {
        for (j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                result.insert(arr1[i]);
            }
        }
    }
}

int main() {
    Array arr1, arr2, unionArr, intersectionArr;

    arr1.insert(1);
    arr1.insert(2);
    arr1.insert(3);
    arr1.insert(4);
    arr1.insert(9);
    arr1.insert(11);
    arr1.insert(10);

    arr2.insert(3);
    arr2.insert(4);
    arr2.insert(5);
    arr2.insert(7);
    arr2.insert(9);
    arr2.insert(6);

    arrayUnion(arr1, arr2, unionArr);
    arrayIntersection(arr1, arr2, intersectionArr);

    cout << "Union of arrays: ";
    for (int i = 0; i < unionArr.getSize(); i++) {
        cout << unionArr[i] << " ";
    }
    cout << endl;

    cout << "Intersection of arrays: ";
    for (int i = 0; i < intersectionArr.getSize(); i++) {
        cout << intersectionArr[i] << " ";
    }
    cout << endl;

    return 0;
}
