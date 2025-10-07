#include <stdio.h>
#include <string.h>

//  *****************MY CODE*******************
/*
void remove_char(char string[], char a);

int main(){
    char str[] = "removing chaars from a string";
    char chr = 'a';
    remove_char(str, chr);
    for (int i = 0; i<(strlen(str)); i++){
        printf("string[%d]:%c\n", i, str[i]);
    }

    return 0;
}

void remove_char(char string[], char a){
    int len_sting = strlen(string);
    //printf("len_string:%d\n", len_sting);
    for (int i=0; i<len_sting; i++){
        if (string[i] == a){
            int j = i;
            for(j; j<len_sting; j++){
                if(j==len_sting-1){
                    //printf("j:%d, i:%d\n", j, i);
                    //printf("last char\n");
                    string[j] = '\0';
                }
                else{
                    string[j] = string[j+1];
                }
            }
            i = i-1;
        }
    }
}

*/


//  *****************ALTERNATİVE CODE*******************

void remove_chars(char *string, char c);

int main(){
    char str[] = "thiiiis is a striiiiing with chars";
    char chr = 'i';
    printf("string before: %s\n", str);
    remove_chars(str,chr);
    printf("string after: %s\n", str);

    return 0;
}

void remove_chars(char *string, char c){
    int pos = 0;
    while (string[pos] != '\0'){
        if (string[pos] == c){
            int newpos = pos;
            while (string[newpos] != '\0'){
                string[newpos] = string[newpos + 1];
                newpos++;
            }
        }
        else pos++;
    }
}