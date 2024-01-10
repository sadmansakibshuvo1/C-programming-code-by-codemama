#include <stdio.h>

int main() {
    int start, end, duration;

    // Read the start and end times
    printf("");
    scanf("%d %d", &start, &end);

    // Calculate the duration, taking into account the possibility of ending on the next day
    if (start <= end) {
        duration = end - start;
    } else {
        // Shift ends on the next day
        duration = 24 - start + end;
    }

    // If the start and end times are the same, the duration is 24 hours
    if (start == end) {
        duration = 24;
    }

    // Print the duration
    printf("%d", duration);

    return 0;
}
