#include <stdio.h>

void scanArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

int getArraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

}

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    scanArray(arr, size);
    printArray(arr, size);
    int sum = getArraySum(arr, size);
    printf("%d\n", sum);

    return 0;
}
