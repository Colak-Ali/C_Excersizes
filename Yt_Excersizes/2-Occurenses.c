#include <stdio.h>

int main (){
    int list[] = {1,3,6,4,7,9,5,3,4,5,6,7,8,5,3,5,7,8,5,3,5,7,9};
    int count = 0;

    for (int i = 0; i<(sizeof(list) / sizeof(list[0])); i++){
        if (list[i] == 1){
            count += 1;
        }
    }
    printf("Listede 1 sayısı %d defa geçiyor.", count);
    
    return 0;
}