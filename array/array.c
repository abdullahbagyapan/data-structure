#include <stdio.h>


void printArray(int* arr);

int main() {

    int numbers[10] = {0,1,2,3,4,5,6,7,8,9};

    printArray(numbers);

    return 0;
}

void printArray(int* arr) {

    int size = sizeof(arr) + 1;

    for (int i = 0; i <= size; i++) {
        
        printf("%d \n",arr[i]);
    }

}