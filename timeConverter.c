/* File Name: timeConverter.c
 *
 * Reads in up to 20 integers that represent the number of seconds ended by 0.
 * 
 * Author: Amesh Pandey
 */

#include <stdio.h>

int main() {
    int input, time, i, numOfTimes = 0; 
    int arr[20], minutes, seconds;
    char whitespace;

    printf("Enter the times [Zero to stop]: \n");

    for(i = 0; i < 20; i++) {
        scanf("%d%c", &input, &whitespace);
        arr[i] = input;

        if(input == 0) {
            break;
        } else {
            numOfTimes++;
        }
        
    }
        
    for(i = 0; i < numOfTimes; i++) {
        minutes = arr[i] / 60;
        seconds = arr[i] % 60;

        printf("%d ", arr[i]);

        if(arr[i] != 1) {
            printf("seconds ");
        } else {
            printf("second ");
        }

        printf(" = %d ", minutes);

        if(minutes != 1) {
            printf("minutes ");
        } else {
            printf("minute ");
        }

        printf("%d ", seconds);

        if(seconds != 1) {
            printf("seconds\n");
        } else {
            printf("second\n");
        }

    }

    return 0;

}

    
