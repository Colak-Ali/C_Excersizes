#include <stdio.h>

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int p = 0;

    for (int i = 9; i>=5; i-=1){
        printf("------------------------------------------------------------------------\n");
        printf("i:%d\n", i);
        printf("p:%d\n", p);
        printf("a değişkeni dizinin %d. indeksine(%d) eşit olsun\n", p, array[p]);
        int a = array[p];
        printf("dizinin %d. indeksi(%d) %d. indeksine(%d) eşit olsun.\n", p, array[p], i, array[i]);
        array[p++] = array[i];
        printf("dizinin %d. indeksi(%d) a'ya(%d) eşit olsun.\n", i, array[i], a);
        array[i] = a;
    }
    printf("****************************************************************************************\n");
    for (int z = 0; z<10; z++){
        printf("%d\n", array[z]);
    }
    
    
    /*
    int list_reverse[10];
    int lengt_of_list = 0;

    for (int i = 9; i>=0; i-=1){
        
        printf("lengt_of_list(yeni listenin üretilecek indeks numarası): %d\n", lengt_of_list);
        printf("i(eski listenin alınacak indeks numarası): %d\n", i);
        printf("Yeni listenin %d. indeksi eski listenin %d. indeksine(%d) esşit olsun.\n", lengt_of_list, i, list[i]);
        
        list_reverse[lengt_of_list++] = list[i];
        printf("Yeni listenin %d. indeksi: %d\n", (lengt_of_list-1), list_reverse[(lengt_of_list-1)]);
        
    }
    */
    
    return 0;
}