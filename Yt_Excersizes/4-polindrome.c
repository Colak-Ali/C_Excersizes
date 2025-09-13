#include <stdio.h>

int main(){
    char string1[4] = "tek";
    char reverse[4];
    int b = 0;

    for (int i = 3; i>0; i-=1){
        printf("i:%d, b:%d\n",i, b);
        printf("reverse[%d] = string[%d]:%c\n", b, i-1, string1[i-1]);
        reverse[b++] = string1[(i-1)];
        printf("%s\n", reverse);
    }
    
    
    return 0;
}