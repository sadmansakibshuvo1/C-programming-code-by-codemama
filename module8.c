#include <stdio.h>

int main() {
    int start_time, end_time;

    // Input the start and end times
    scanf("%d %d", &start_time, &end_time);

    // Calculate the duration of the work shift
    int duration;

    if (end_time == start_time) {
        duration = 24;
    } else if (end_time > start_time) {
        duration = end_time - start_time;
    } else {
        duration = (24 - start_time) + end_time;
    }

    // Output the duration
    printf("%d\n", duration);

    return 0;
}
