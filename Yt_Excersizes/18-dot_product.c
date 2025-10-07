#include <stdio.h>

float dot_product(float vector1[], float vector2[]);

int main(){
    float v1[] = {1,2,3};
    float v2[] = {3,4,5};
    float result;
    result = dot_product(v1, v2);
    printf("Result: %f\n", result);

    return 0;
}

float dot_product(float vector1[], float vector2[]){
    float sum = 0;
    for (int i = 0; i<3; i++){
        sum = sum + (vector1[i]*vector2[i]);
    }
    return sum;
}