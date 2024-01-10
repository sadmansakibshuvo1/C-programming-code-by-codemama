#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isFunnyString(const char *str) {
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (i % 2 == 0) {
            if (str[i] < 'a' || str[i] > 'z') {
                return false; // Odd-positioned characters should be lowercase
            }
        } else {
            if (str[i] < 'A' || str[i] > 'Z') {
                return false; // Even-positioned characters should be uppercase
            }
        }
    }

    return true;
}

int main() {
    char str[100];

    // Input the string
    //printf("Enter the string: ");
    scanf("%s", str);

    // Check if the string is funny
    if (isFunnyString(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

