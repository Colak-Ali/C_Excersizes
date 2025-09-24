#include <stdio.h>
#include <ctype.h>
#include <string.h>

void lower_to_upper(char s[], int l);

int main(){
    char my_string[] = "aBcDeF";
    int len = strlen(my_string);
    
/*
    for (int i = 0; i<len; i++){  // Harf küçükse
        if (islower(my_string[i])){
            my_string[i] = toupper(my_string[i]);
            printf("%c",my_string[i]);
        }
        else if (isupper(my_string[i])){ // Harf büyükse
            my_string[i] = tolower(my_string[i]);
            printf("%c",my_string[i]);
        }
    }
*/
    lower_to_upper(my_string, len);

    return 0;
}

void lower_to_upper(char s[], int l){
    for (int i = 0; i<l; i++){  // Harf küçükse
        if (islower(s[i])){
            s[i] = toupper(s[i]);
            printf("%c",s[i]);
        }
        else if (isupper(s[i])){ // Harf büyükse
            s[i] = tolower(s[i]);
            printf("%c",s[i]);
        }
    }

}