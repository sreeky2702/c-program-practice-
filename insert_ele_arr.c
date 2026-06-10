#include <stdio.h>
#include <stdlib.h>

int insertElement(int *arr, int n, int pos, int value) {
    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = value;
    return n + 1;
}

int main() {
    int n, pos, value;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));
    if (!arr) { printf("Memory allocation failed!\n"); return 1; }

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    if (pos < 0 || pos > n) { printf("Invalid position!\n"); free(arr); return 1; }

    arr = (int*) realloc(arr, (n + 1) * sizeof(int));
    if (!arr) { printf("Reallocation failed!\n"); return 1; }

    n = insertElement(arr, n, pos, value);

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
