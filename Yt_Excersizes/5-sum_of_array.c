#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void addition(int s, int l, int list[]);

int main(){
    int my_array[] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(my_array) / sizeof(my_array[0]);
    printf("sizeof(list):%d, sizeof(list[0]):%d\n", sizeof(my_array), sizeof(my_array[0]));
    printf("len:%d\n", len);
    int sum = my_array[0];
    addition(sum, len, my_array);

    return 0;
}
void addition(int a, int l, int list[]){
    for (int i = 1; i<l; i++){
        a += list[i];
    }
    printf("sum:%d\n",a);
}