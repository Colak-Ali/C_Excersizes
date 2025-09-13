#include <stdio.h>

void c_to_f(double c, double f);

int main(){
    double celsius = 12;
    double fatrenheit;
    c_to_f(celsius, fatrenheit);
    return 0;
}

void c_to_f(double c, double f){
    f = (c * 1.8) + 32;
    printf("%.2f degree Celsius is equal to %.2f degree fahrenheit\n", c, f);
}