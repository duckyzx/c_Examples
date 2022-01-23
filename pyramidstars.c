/* File Name: pyramidstars.c
 *
 * Reads in an integer and makes a pyramid of that size
 * 
 * Author: Amesh Pandey
 */

#include <stdio.h>

int main() {
    int i, n, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
             printf("* ");
        }
        printf("\n");
    }

    return 0;
}