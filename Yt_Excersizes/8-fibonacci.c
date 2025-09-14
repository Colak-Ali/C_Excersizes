#include <stdio.h>

int main(){
    int one = 0;
    int two = 1;
    int fibonacci_array[20];
    for(int i = 0; i<20; i+=2){
        fibonacci_array[i] = one;
        fibonacci_array[i+1] = two;
        one = one + two;
        two = one + two;
    }
    for (int i = 0; i<20; i++){
        printf("%d\n", fibonacci_array[i]);
    }

    return  0;
}