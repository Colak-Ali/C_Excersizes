#include <stdio.h>
#include <string.h>

/*
En son bölünme işlemindeki 0a bölünme olayını hallettim. Şu an otomatik olarak sonuçla işlemlere devam ediyor
onu ayarlayacağım. Ayrıca bir while döngüsünün içindeki bir if yapısında break dönülürse döngüden çıkıyor.
*/

void ana_ekran();
int ilk_sayi();
int ikinci_sayi();
char* işlem_ismi();
int toplama(int a, int b);
int çikarma(int a, int b);
int çarpma(int a, int b);
int bölme(int a, int b);
void devam();



int main(){
    
    int num1, num2, result, stop1, stop2;
    char* name;
    char cont, cont2;
    
    ana_ekran();
    while (1){
        stop2 = 0;
        num1 = ilk_sayi();
        while (1){
            stop1 = 0;
            num2 = ikinci_sayi();
            name = işlem_ismi();
            if (strcmp(name, "a") == 0){
                result = toplama(num1, num2);
                printf("Result is = %d\n", result);
                while(1){
                    printf("Do you want to continue to calculation with this result? (Y/N):");
                    scanf(" %c", &cont);
                    if (cont == 'Y'){
                        num1 = result;
                        stop1 = 1;
                        break;;
                    }
                    else if (cont == 'N'){
                        break;
                    }
                    else{
                        printf("Wrong İnput! Try again...\n");
                        continue;
                    }
                }
                if (stop1){
                printf("you're continuing with %d number.", result);
                continue;
                }
            }
            else if (strcmp(name, "s") == 0){
                result = çikarma(num1, num2);
                printf("Result is = %d\n", result);
                while(1){
                    printf("Do you want to continue to calculation with this result? (Y/N):");
                    scanf(" %c", &cont);
                    if (cont == 'Y'){
                        num1 = result;
                        stop1 = 1;
                        break;;
                    }
                    else if (cont == 'N'){
                        break;
                    }
                    else{
                        printf("Wrong İnput! Try again...\n");
                        continue;
                    }
                }
                if (stop1){
                printf("you're continuing with %d number.", result);
                continue;
                }
            }
            else if (strcmp(name, "m") == 0){
                result = çarpma(num1, num2);
                printf("Result is = %d\n", result);
                while(1){
                    printf("Do you want to continue to calculation with this result? (Y/N):");
                    scanf(" %c", &cont);
                    if (cont == 'Y'){
                        num1 = result;
                        stop1 = 1;
                        break;;
                    }
                    else if (cont == 'N'){
                        break;
                    }
                    else{
                        printf("Wrong İnput! Try again...\n");
                        continue;
                    }
                }
                if (stop1){
                printf("you're continuing with %d number.", result);
                continue;
                }
            }
            else if (strcmp(name, "d") == 0){
                    if (num2 == 0){
                        printf("You can not divide a number with 0!");
                        continue;
                    }
                    else{
                        result = bölme(num1, num2);
                        printf("Result is = %d\n", result);
                        while(1){
                            printf("Do you want to continue to calculation with this result? (Y/N):");
                            scanf(" %c", &cont);
                            if (cont == 'Y'){
                                num1 = result;
                                stop1 = 1;
                                break;;
                            }
                            else if (cont == 'N'){
                                break;
                            }
                            else{
                                printf("Wrong İnput! Try again...\n");
                                continue;
                            }
                        }
                        if (stop1){
                            printf("you're continuing with %d number.", result);
                            continue;
                        }
                    }
            }
            else{
                printf("Wrong operation input!\n");
            }
            break;
        }
    printf("Do you want to do a new calculation? (Y)");
    scanf(" %c", &cont2);
    if (cont2 == 'Y'){
        continue;
    }
    else{    
        printf("\nSee you again...");
        break; 
    }
    }
        

    return 0;
}

void ana_ekran(){
    printf("******************* CALCULATOR *******************\n");
    printf("\n-----------------------------------------------\n");
    printf("\nThe Operations:\n-Addition : a\n-Subtraction : s\n-Multiplication : m\n-Division : d\n");
    printf("\n-----------------------------------------------\n");
}
int ilk_sayi(){
    int ILK_SAYI; 
    printf("\nPlease enter the first number:");
    if(scanf("%d", &ILK_SAYI) != 1 ){
        printf("\nYou're entering the number with wrong type!\nPlease try again:");
        return ilk_sayi();
    }
    else{
        return ILK_SAYI;
    }
}
int ikinci_sayi(){
    int IKINCI_SAYI; 
    printf("\nPlease enter the second number:");
    if(scanf("%d", &IKINCI_SAYI) !=1 ){
        printf("You're entering the number with wrong type!\nPlease try again:");
        return ikinci_sayi();
    }
    else{
        return IKINCI_SAYI;
    }
}
char* işlem_ismi(){
    static char ISIM[10] = "";
    printf("\nPlease enter the operation type:\n");
    scanf("%9s", ISIM);
    return ISIM;
}
int toplama(int a, int b){
    int sonuç = a + b;
    return sonuç;
}
int çikarma(int a, int b){
    int sonuç = a - b;
    return sonuç;
}
int çarpma(int a, int b){
    int sonuç = a * b;
    return sonuç;
}

int bölme(int a, int b){
    int sonuç = a / b;
    return sonuç;
}