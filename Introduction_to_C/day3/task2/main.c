#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d", &rows);
    scanf("%d", &cols);

    int arr[rows][cols];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }

    int totalSum = 0;
    for (int i = 0; i < rows; ++i) {
        int rowSum = 0;
        for (int j = 0; j < cols; ++j) {
            rowSum += arr[i][j];
        }
        totalSum += rowSum;
    }

    printf("%d\n", totalSum);

    return 0;
}
