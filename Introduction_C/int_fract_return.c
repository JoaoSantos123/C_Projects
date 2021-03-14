#include<stdio.h>
#include<string.h>
//Given a real number, return the integer part and the fractional part.
//Ex: 123.456 -> 123 | 456

int func_intPart(char* number){
    int i = 0;
    int int_part = 0;

    while(number[i]!='.'){
        int_part = 10 * int_part + (number[i]-'0');
        i++;
    }
    return int_part;
}

int func_fractPart(char* number){
    int i = 0;
    int int_fract = 0;

    while(number[i]!='.'){
        i++;
    }
    i++;
    while(number[i]!='\0'){
        int_fract = 10 * int_fract + (number[i]-'0');
        i++;
    }

    return int_fract;
}


int main(void){
    char real_number[20];
    printf("\nInsert a real number (ex: 123.456) ");
    scanf("%s",real_number);

    int int_part = func_intPart(real_number);
    int fract_part = func_fractPart(real_number);

    printf("\nInteger part is {%d} \nFractional part is {%d}\n", int_part, fract_part);
    
    return 0;
}
