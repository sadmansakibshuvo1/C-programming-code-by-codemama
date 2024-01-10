#include <stdio.h>
#include <string.h>

int main() {
    char S[1001];
    int K;

    // The input string and the value of K
    scanf("%s %d", S, &K);

    int len = strlen(S);
    int changes = 0;

    for (int i = 0; i < len; i++) {
        if (S[i] == '0') {
            continue;
        }

        if (i == 0) {
            if (S[i] != '1') {
                S[i] = '1';
                changes++;
            }
        } else {
            if (S[i] != '0') {
                S[i] = '0';
                changes++;
            }
        }

        if (changes >= K) {
            break;
        }
    }

    // Output the minimized number
    printf("Min = %s\n", S);

    return 0;
}
