#include <stdio.h>
#include <string.h>

int main() {
    while (1) // ANA SİSTEM DÖNGÜSÜ
    {  
        #pragma region Giriş Ekranı
        char operation[20]; // İşlem adı
        int num1; // İlk sayı
        // GİRİŞ VE İLK RAKAMIN ALINMASI
        printf("******************* CALCULATOR *******************\n");
        printf("\n-----------------------------------------------\n");
        printf("\nPlease choose two numbers:\n");
        fflush(stdout);
        printf("Firs number:");
        scanf("%d", &num1);
        #pragma endregion
        
        while (1){ // İKİNCİ DÖNGÜ
            #pragma region ikinci sayinin alinmasi ve işlem seçimi
            int num2; // İkinci sayı
            printf("Second number:");
            scanf("%d", &num2);
            printf("\nPlease choose an operation: (addition(add), substraction(sub), multiplication(multi) or division(div)?)\n");
            fflush(stdout);
            scanf("%s", operation);
            int result; // işlem sonucu
            char cont; // sonuçla devam etme sorusunun cevabı
            int stop = 0; // Bayrak
            #pragma endregion
            #pragma region IŞLEMLER
            // TOPLAMA İŞLEMİ
            if (strcmp(operation, "add") == 0){
                result = (num1 + num2);
                printf("Result: %d\n", result);
                while (1){ // YANLIŞ GİRDİ GİRERSE SORUYU TEKRARLA
                    printf("Do you want to continue to calculation with this result? (Y/N):");
                    scanf(" %c", &cont);
                    if (cont == 'Y'){
                        num1 = result;
                        stop = 1;
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
                if (stop){
                    continue;
                    printf("you're continuing with %d number.");
                }

            }
            // ÇIKARMA İŞLEMİ
            else if (strcmp(operation, "sub") == 0){
                result = (num1 - num2);
                printf("Result: %d\n", result);
                while (1){ // YANLIŞ GİRDİ GİRERSE SORUYU TEKRARLA
                    printf("Do you want to continue to calculation with this result? (Y/N):");
                    scanf(" %c", &cont);
                    if (cont == 'Y'){
                        num1 = result;
                        stop = 1;
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
                if (stop){
                    continue;
                    printf("you're continuing with %d number.");
                }
            }
            // ÇARPMA İŞLEMİ
            else if (strcmp(operation, "multi") == 0){
                result = (num1 * num2);
                printf("Result: %d\n", result);
                while (1){ // YANLIŞ GİRDİ GİRERSE SORUYU TEKRARLA
                    printf("Do you want to continue to calculation with this result? (Y/N):");
                    scanf(" %c", &cont);
                    if (cont == 'Y'){
                        num1 = result;
                        stop = 1;
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
                if (stop){
                    continue;
                    printf("you're continuing with %d number.");
                }
            }
            //BÖLME İŞLEMİ
            else if (strcmp(operation, "div") == 0){
                if (num2 == 0){
                    printf("İn division second number can't be 0!");
                }
                else{
                    result = (num1 / num2);
                    printf("Result: %d\n10", result);
                    while (1){ // YANLIŞ GİRDİ GİRERSE SORUYU TEKRARLA
                    printf("Do you want to continue to calculation with this result? (Y/N):");
                    scanf(" %c", &cont);
                    if (cont == 'Y'){
                        num1 = result;
                        stop = 1;
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
                if (stop){
                    continue;
                    printf("you're continuing with %d number.");
                }

                }
            }
            
            else{
                printf("Wrong operation input!\nPlease try again.");
                break;
            }
            #pragma endregion
            printf("See you soon...");
            break;
        }

    }
    return 0;
}