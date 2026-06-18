#include <stdio.h>

int findSecondLargest(int arr[], int n) {
    int first = -2147483648, second = -2147483648;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int result = findSecondLargest(arr, n);
    if (result == -2147483648)
        printf("No second largest element found.\n");
    else
        printf("Second Largest = %d\n", result);
    return 0;
}
