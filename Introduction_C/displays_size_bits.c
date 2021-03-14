#include <limits.h>
#include <stdio.h>

int main (void){

    
    /* Data Types
     * %d or %i Signed decimal integer
     * %u Unsigned decimal intege\r
     * %f Decimal floating point, lowercase
     * %E Scientific notation, uppercase
     * %c CHaracter
     * %s String of characters
     * %l Long integer 
    */

    printf("Number of bits of a char: %u\n", CHAR_BIT);
    printf("Number of bits of a int: %ld\n", CHAR_BIT*sizeof(int));
    printf("Number of bits of a long int: %ld\n", CHAR_BIT*sizeof(long int));
    printf("Number of bits of a float: %ld\n", CHAR_BIT*sizeof(float));
    printf("Number of bits of a double: %ld\n", CHAR_BIT*sizeof(double));

    return 0;
}
