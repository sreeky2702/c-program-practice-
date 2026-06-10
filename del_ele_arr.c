#include <stdio.h>
#include <stdlib.h>

int deleteElement(int *arr, int n, int pos) {
    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    return n - 1;
}

int main() {
    int n, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));
    if (!arr) { printf("Memory allocation failed!\n"); return 1; }

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) { printf("Invalid position!\n"); free(arr); return 1; }

    n = deleteElement(arr, n, pos);

    arr = (int*) realloc(arr, n * sizeof(int));

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
