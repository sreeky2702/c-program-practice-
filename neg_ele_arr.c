#include <stdio.h>
#include <stdlib.h>

int countNegatives(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] < 0) count++;
    return count;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) { printf("Memory allocation failed!\n"); return 1; }

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Total negative elements: %d\n", countNegatives(arr, n));
    free(arr);
    return 0;
}
