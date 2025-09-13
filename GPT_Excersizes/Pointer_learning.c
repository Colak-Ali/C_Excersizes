#include <stdio.h>

void sum(int* ptr);
void sum1(int a);

int main(){
    int x = 7;
    int* pointerX = &x;
    printf("X'in konumu: %x\n",&x);
    printf("X'in değeri: %d\n", x);
    printf("PointerX'in değeri: %x\n", pointerX);
    /*
    sum(pointerX);
    printf("X'in değeri: %d", x);
    */
    sum1(x);
    printf("X'in yeni değeri: %d\n", x);

    return 0;
}

void sum(int* ptr){
    *ptr += *ptr;
    printf("Pointerin tuttuğu konumdaki değer: %d\n", *ptr);
}
void sum1(int a){
    a += a;
    printf("Değişkenin yeni değeri: %d\n",a);
}