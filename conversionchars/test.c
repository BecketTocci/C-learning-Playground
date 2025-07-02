#include <stdio.h>
#include <stdint.h>

int8_t f;

int main(){
    printf("What number is the charector in ASCII?");
    scanf("%hhi",&f);
    printf("%c\n",f);
    return 0;
}