#include <stdio.h>
#include <stdlib.h>


int main() {
    uint numbers; 

    printf("How many rounds of FizzBuzz you would like the computer to play? ");
    scanf("%u",&numbers);

    printf("%u Is the rounds the computer will play.\n",numbers);

    return 0; // Exit successfully. Zero represents success, anything else represents a particular type of failure.
    // For example, 11 typically means segfault.
}