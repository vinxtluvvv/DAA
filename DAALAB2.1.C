#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a[1000], key, i, j, temp;
    int low, high, mid, index;
    clock_t start, end;
    double linear_time, binary_time;

    srand(time(0));

    for(i = 0; i < 1000; i++)
        a[i] = rand() % 10000;

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear Search

    start = clock();

    for(j = 0; j < 100000; j++) {
        index = -1;

        for(i = 0; i < 1000; i++) {
            if(a[i] == key) {
                index = i;
                break;
            }
        }
    }

    end = clock();

    linear_time = (double)(end - start) / CLOCKS_PER_SEC;

    if(index != -1)
        printf("Linear Search: Found at index %d\n", index);
    else
        printf("Linear Search: Not found\n");

    printf("Linear Search Time = %f seconds\n\n", linear_time);

    // Sorting for Binary Search

    for(i = 0; i < 999; i++) {
        for(j = i + 1; j < 1000; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Binary Search

    start = clock();

    for(j = 0; j < 1000000; j++) {
        low = 0;
        high = 999;
        index = -1;

        while(low <= high) {
            mid = (low + high) / 2;

            if(a[mid] == key) {
                index = mid;
                break;
            }
            else if(a[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    end = clock();

    binary_time = (double)(end - start) / CLOCKS_PER_SEC;

    if(index != -1)
        printf("Binary Search: Found at index %d\n", index);
    else
        printf("Binary Search: Not found\n");

    printf("Binary Search Time = %f seconds\n", binary_time);

    return 0;
}
