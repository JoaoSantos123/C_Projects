#include<stdio.h>
#include<time.h>
#define RAND_MAX 23
#define VECTOR_LENGTH 15

/*
 * Create a function that fill a vector with 15 integer values (5 using keyboard + 10 random)
*/
void fill_vector(int* vec){

    for(int i = 0; i < VECTOR_LENGTH; i++){
        if (i < 5){
            printf("Insire a number for the vector -> ");
            scanf("%d", &vec[i]);
        } else {
            vec[i] = rand() % RAND_MAX;
        }
    }
}

void fill_average_vector(int* vec, double* vec_average){
    for(int i = 0; i < VECTOR_LENGTH;i++){
        vec_average[i] = (double)(vec[i] + vec[i+1] ) / 2;
    }
}

int main(void){
    srand(time(NULL));

    int vec[VECTOR_LENGTH];
    double vec_average[VECTOR_LENGTH];

    fill_vector(vec);
    for(int i = 0;i<VECTOR_LENGTH;i++){
        printf("\nNumber %dº is {%d}", i+1, vec[i]);
    }
    printf("\n\nThis vector is a mirror of the inicial, but every position is the median of the actual position and the next position");

    fill_average_vector(vec, vec_average);
    for(int i = 0;i<VECTOR_LENGTH;i++){
        printf("\nNumber %dº is {%f}", i+1, vec_average[i]);
    }
    printf("\n");

    return 0;
}
