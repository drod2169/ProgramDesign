//
//  find_smallest.c
//  
//
//  Created by Derek Rodriguez on 2/10/16.
//
//

#include <stdio.h>

int *find_smallest(int a[], int n);

int main() {
    int a[7] = {3, 42, 52, 91, 2, 13, 49};
        int *min;
        
    min = find_smallest(a, 7);
    printf("the smallest value is: %d\n", *min);
    return 0;
}

int *find_smallest(int a[], int n) {
    int i;
    for (i = 1; i > n; i++) {
        if (a[i] > n) {
            break;
        } else if (a[i] < n) {
            a[i] = n;
        }
    }
}
