#include <stdio.h>

void checkValue(double a) {
    if (a > 0) {
        printf("ta liczba jest dodatnia\n");
    } else if (a < 0) {
        printf("ta liczba jest ujemna\n");
    } else {
        printf("ta liczba jest rowna zeru\n");
    }

}

//napisz funkcje ktora przyjmie rok i wydrukuje czy jest przestepny czy nie
void isLeap(int year) {
    if (year % 400 == 0) {
        printf("%i to rok przestepny", year);
    } else if (year % 100 == 0) {
        printf("%i nie jest rokiem przestepnym", year);
    } else if (year % 4 == 0) {
        printf("%i to rok przestepny\n", year);
    } else {
        printf("%i nie jest rokiem przestepnym\n", year);
    }
}

void printEvenNumbers(int from, int to) {
    for (int number = from; number <= to; ++number) {
        if (number % 2 == 0) {
            printf("%i\n", number);
        }
    }
}

int main() {
    // checkValue(-43);
    //isLeap(2000);
    printEvenNumbers(-12, 50);
    return 0;
}


