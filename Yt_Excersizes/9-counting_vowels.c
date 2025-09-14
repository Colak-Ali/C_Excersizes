#include <stdio.h>
#include <string.h>

int main(){
    char my_string[] = "Monday";
    int len = strlen(my_string);
    int count = 0;
    for (int i = 0; i<len; i++){
        switch (my_string[i])
        {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            count ++;
        }
    }
    if(count<2) printf("There is %d vowel in this string.\n", count);
    else printf("There is %d vowels in this string.\n", count);

    return 0;
}