#include <iostream>

void sort(int array[], int size);

int main() {
    int array[] = {1, 7, 9, 3, 5, 6, 10, 2, 4, 8};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    for(int element : array) {
        std::cout << element << " ";
    }

    return 0;
}
void sort(int array[], int size) {

    int temp;
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size -i - 1; j++) {
            if(array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}