#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// FONKSİYONLAR
char* login(); // Giriş yapma işlemi
void entrance(); // Giriş ekranı
char* choose_transaction(); // İşlem seçimi yapma
void Balance_Inquiry(); // Bakiye sorgulama
int Cash_Withdrawal(); // Para çekme
int Cash_Deposit(); // Para yatırma
void exit_to_program(); // Programdan çıkma

// GLOBAL DEĞİŞKENLER
char* password = "123"; // Giriş şifresi bu
int Users_Money = 530;

int main(){                 
    //DEĞİŞKENLER
    char* PASSWORD_INPUT;
    char* TRANSACTİON_INPUT; 
    int wrong_try = 0; // Yanlış şifre giriş sayacı


password_:                  
    PASSWORD_INPUT = login(); // Kullanıcıdan şifre alma             
    if (strcmp(PASSWORD_INPUT, password) == 0){          // Şifre doğru girilirse         
        printf("Welcome");                  
    }                   
    else{                   // Şifre yanlış girilirse
        wrong_try += 1;  // Yanlış şifre sayacını arttır
        if (wrong_try < 4){
            printf("Wrong Password! Please try again");
            goto password_; // Şifre isteme kısmına geri git
        }
        printf("You entered too much wrong Input!");
        printf("\nSee you again...");
        exit(0); // Çok fazla yanlış şifre girişi olduğu için progra sonlandırılıyor
    }                   
    entrance(); // Giriş ekranını çağırma
transaction_:
    TRANSACTİON_INPUT = choose_transaction(); // İşlem isminin alınması
    if (strcmp(TRANSACTİON_INPUT, "a") == 0){ // İşlem bakiye sorgulama ise
        Balance_Inquiry(); // işlem sorgulama fonksiyonunu çağır
    }
    else if (strcmp(TRANSACTİON_INPUT, "b") == 0){ // işlem para çekme ise
        Cash_Withdrawal(); // Para çekme fonksiyonunu çağır
        printf("Your current balance is %d$", Users_Money);
    }
    else if (strcmp(TRANSACTİON_INPUT, "c") == 0){ // işlem para yatırma ise
        Cash_Deposit(); // para yatırma fonksiyonunu çağır
        printf("Your current balance is %d$", Users_Money);
    }
    else if (strcmp(TRANSACTİON_INPUT, "e") == 0){ // işlem programdan çıkma ise
        exit_to_program(); // Programdan çıkma fonksiyonunu çağır
    }
    else{
        printf("Wrong transaction Input! Please try again");
        goto transaction_;
    }


    return 0;                   
}                   

char* login(){                  
    static char password_Input[10] = "";                    
    printf("\nPlease enter your password:");
    scanf("%9s", password_Input);
    return password_Input;
}
void entrance(){
    printf("\n--------------------------------------------------------------------------------------");
    printf("\nWelcome to your bank account");
    printf("\n--------------------------------------------------------------------------------------");
}
char* choose_transaction(){
    static char Transaction[5] = "";
    printf("\nPlease chooose the transaction: \n-For Balance Inqury --> a \n-For Cash Withdrawal --> b \n-For Cash Deposit --> c \n-For Exit --> e\n");
    scanf("%4s", Transaction);
    return Transaction;
}
void Balance_Inquiry(){
    printf("Your balance is %d$", Users_Money);
}
int Cash_Withdrawal(){
    int withdawal;
    printf("Please enter amont of mony yo want to withdraw:\n");
    scanf("%d", &withdawal);
    Users_Money -= withdawal;
    return Users_Money;
}
int Cash_Deposit(){
    int deposit;
    printf("Please enter amont of mony yo want to deposit:\n");
    scanf("%d", &deposit);
    Users_Money += deposit;
    return Users_Money;
}
void exit_to_program(){
    printf("Exiting from the program...");
    exit(0);
}
