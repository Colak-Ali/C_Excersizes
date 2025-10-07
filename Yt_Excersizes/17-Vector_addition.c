#include <stdio.h>

void vector_addition(float vector1[], float vector2[], float final_vector[]);

int main(){
    float v1[] = {1,2,3};
    float v2[] = {3,4,5};
    float v_result[3];
    vector_addition(v1, v2, v_result);

    return 0;
}

void vector_addition(float vector1[], float vector2[], float final_vector[]){
    for (int i = 0; i<3; i++){
        final_vector[i] = vector1[i] + vector2[i];
        printf("final_vector[%d]:%f\n", i, final_vector[i]);
    }
}