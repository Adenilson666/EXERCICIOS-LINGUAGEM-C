#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void readArray(int n, int arr[], int index) {
    if (index == n) {
        return;
    }
    scanf("%d", &arr[index]);
    readArray(n, arr, index + 1);
}

void printArray(int n, int arr[], int index) {
    if (index == n) {
        return;
    }
    printf("%d ", arr[index]);
    printArray(n, arr, index + 1);
}

void binarySum(int n, int arr1[], int arr2[], int result[], int carry, int index) {
    if (index < 0) {
        if (carry > 0) {
            printf("OVERFLOW\n");
        } else {
            printArray(n, result, 0);
        }
        return;
    }

    int sum = arr1[index] + arr2[index] + carry;
    result[index] = sum % 2;
    carry = sum / 2;

    binarySum(n, arr1, arr2, result, carry, index - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr1[n], arr2[n], result[n];
    
    readArray(n, arr1, 0);
    readArray(n, arr2, 0);

    binarySum(n, arr1, arr2, result, 0, n - 1);

    return 0;
}