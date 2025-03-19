
#include <iostream>
using namespace std;

int findSmallest(int arr[], int size) {
    int min_value = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min_value) {
            min_value = arr[i];
        }
    }

    return min_value;
}

int main() {

    int arr[] = {34, 15, 88, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest = findSmallest(arr, size);

    cout << "The smallest number is: " << smallest << endl;

}