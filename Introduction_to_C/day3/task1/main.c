#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    int max =0;
    int min ;

    for (int i = 0; i < n; ++i) {
        sum += arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Sum: %d\n", sum);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
