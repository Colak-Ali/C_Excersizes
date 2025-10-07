#include <stdio.h>
#include <stdbool.h>

bool is_a_leap_year(int y);

int main(){
    int year[6] = {2020,2000,2400,2021,1900,2100}; 
    for (int i = 0; i<6; i++){
        if(is_a_leap_year(year[i])) printf("%d is a leap year.\n", year[i]);
        else printf("%d is not a leap year.\n", year[i]);
    }

    return 0;
}

bool is_a_leap_year(int y){
    if ((y % 4) != 0) return false;
    else if ((y % 100) == 0 && (y % 400) != 0 ) return false;
    else return true;
}