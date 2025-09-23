#include<stdio.h>
#include<string.h>
#include <stdlib.h>

char *string_append(char *s1, char *s2);

int main(){
    char string_one[10] = "one";
    char string_two[10] = "two";

    char *s = string_append(string_one, string_two);
    printf("%s\n", s);

    return 0;
}

char *string_append(char *s1, char *s2){
    int length_one = strlen(s1);
    int length_two = strlen(s2);
    int append_length = length_one + length_two + 1;
    char *s = calloc(append_length, sizeof(char));
    
    for (int i = 0; i<length_one; i++){
        s[i] = s1[i];
    }
    for (int i = 0; i<length_two; i++){
        s[length_one + i] = s2[i];
    }
    s[append_length-1] = '\0';
    return s;
}