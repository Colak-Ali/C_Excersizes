#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// MY CODE
/*
int word_count(char *string, char *word);

int main(){
    
    char my_string[] = "lorem ipsum lorem.";
    char my_word[] = "lorem";
    char my_word2[] = "ipsum";
    int my_count = word_count(my_string, my_word);
    int my_count2 = word_count(my_string, my_word2);
    printf("lorem count: %d\n", my_count);
    printf("ipsum count: %d\n", my_count2);

    return 0;
}

int word_count(char *string, char *word){
    int count = 0; 
    int len_string = strlen(string);
    int len_word = strlen(word);

    int i = 0;
    int a = 0;
    for (i; i < len_string; i++){
        if (string[i] == word[a]){
            printf("string[%d]:%c, word[%d]:%c\n", i, string[i], a, word[a]);
            a++;
            if (a == len_word){
                count++;
                a = 0;
            }
        }
        else a = 0;
    }

    return count;
}
*/
// ALTERNATİVE CODE

int word_count(char *word, char *string );

int main(){
    
    char s[] = "lorem ipsum lorem ipsum.";
    char w1[] = "lorem";
    char w2[] = "ipsum";

    int count_result = word_count(w1 ,s);
    int count_result2 = word_count(w2, s);
    printf("Result 1:%d\n", count_result);
    printf("Result 2:%d\n", count_result2);

    return 0;
}


int word_count(char *word, char *string ){
    int len_word = strlen(word);
    int len_string = strlen(string);
    
    int end = len_string - len_word + 1;
    int count = 0;  

    for (int i = 0; i < end; i++){
        bool is_equal = true; 
        for (int j = 0; j < len_word; j++){
            //printf("i:%d, j:%d | ", i, j);
            //printf("string[%d]:%c, word[%d]:%c\n", j+i, string[j+i], j, word[j]);
            if(string[i + j] != word[j]){
                is_equal = false;
                break;
            }            
        }
        if(is_equal) count++;
    }
    return count;
}