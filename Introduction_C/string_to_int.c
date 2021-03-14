#include <stdio.h>
#define MAX_STR 5

int string_to_int(char* str){
    int result = 0;
    
    for(int i = 0; i < MAX_STR; i++){
        result = result * 10 + (str[i]-'0');
        printf("result = %i\n", result);
        printf("str[%i]-'0' = %i\n\n", i, str[i]-'0');
    }
    return result;
}


int main(void){

    char number_S[MAX_STR] = "12345";
    int number_I = string_to_int(number_S);

    printf("\nString {%s} converte to number {%d}\n", number_S, number_I);

    return 0;
}
