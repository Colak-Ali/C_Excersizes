#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    char string1[] = "abcaba";

    if(is_true(string1)){
        printf("This string is a polindrome");
    }
    else{
        printf("This string is not a polindrome");
    }
    
    
    
    return 0;
}

bool is_true(char string1[]){
    int len = sizeof(string1) / sizeof(string1[0]);
    for (int i = 0; i<len/2; i++){
            printf("string1[%d]:%c, string1[%d]:%c\n", i, string1[i], (len - 2 -i), string1[len - 2 -i]);
            if (string1[i] == string1[len - 2 -i]){
                printf("%d. indeks ve %d. indeks birbirine eşit.\n", i, (len - 2 -i));
            }
            else{
                printf("%d. indeks ve %d. indeks birbirine eşit değil.\n", i, (len - 2 -i));
                exit(0);
            }
        }
        return true;
}