#include <stdio.h>

int findCelebrity(int M[][4], int n) {
    int a = 0;
    int b = n - 1;

    while (a < b) {
        if (M[a][b] == 1)
            a++;
        else
            b--;
    }

    int candidate = a;

    for (int i = 0; i < n; i++) {
        if (i != candidate) {

            if (M[candidate][i] == 1)
                return -1;

            if (M[i][candidate] == 0)
                return -1;
        }
    }

    return candidate;
}

int main() {

    int n = 4;

    int M[4][4] = {
        {0, 1, 1, 1},
        {0, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 1, 0}
    };

    int celebrity = findCelebrity(M, n);

    if (celebrity == -1)
        printf("No celebrity exists");
    else
        printf("Celebrity is person %d", celebrity);

    return 0;
}
