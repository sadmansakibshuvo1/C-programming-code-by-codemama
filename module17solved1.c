#include <stdio.h>

int lastOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            result = mid;
            low = mid + 1; // Move to the right to find the last occurrence
        } else if (arr[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    int n;

    // Input the size of the array
    printf("");
    scanf("%d", &n);

    // Input the sorted array
    int arr[n];
    printf("");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;

    // Input the target value
    printf("");
    scanf("%d", &target);

    // Find the last occurrence using binary search
    int result = lastOccurrence(arr, n, target);

    // Output the result
    if (result != -1) {
        printf("%d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}

