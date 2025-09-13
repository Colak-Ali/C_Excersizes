#include <stdio.h>

int main(){
    int list[] = {10,8,4,5,-2,9,6,4,1,3,2,37,-3};
    int max = list[0];
    for(int i=1; i<=12; i++){
        if (list[i] > max){
            max = list[i];
        }
    }
    printf("The maximum number is: %d", max);

    return 0;
}