#include <stdio.h>

int findMax(int arr[], int n) {
    if (n == 1) return arr[0];
    int maxRest = findMax(arr, n - 1);
    return (arr[n - 1] > maxRest) ? arr[n - 1] : maxRest;
}

int findMin(int arr[], int n) {
    if (n == 1) return arr[0];
    int minRest = findMin(arr, n - 1);
    return (arr[n - 1] < minRest) ? arr[n - 1] : minRest;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Maximum = %d\n", findMax(arr, n));
    printf("Minimum = %d\n", findMin(arr, n));
    return 0;
}
