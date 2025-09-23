#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int dice_count = 3;
    int numbers = 30;
    int roll;
    
    for (int i = 1; i<=dice_count; i++){
        roll = rand() % numbers + 1;
        printf("dice %d: %d\n", i, roll);
    }
    
    return 0;
}