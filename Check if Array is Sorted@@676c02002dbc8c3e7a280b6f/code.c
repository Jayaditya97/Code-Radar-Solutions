#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read number of elements
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is sorted in non-decreasing order
    int isSorted = 1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = 0;
            break; // No need to check further
        }
    }

    // Print the result
    if (isSorted)
        printf("Sorted\n");
    else
        printf("Not Sorted\n");

    return 0;
}
