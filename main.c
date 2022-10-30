#include <stdio.h>

void checkValue() {
    double a;
    printf("podaj liczbe\n");
    scanf("%lf", &a);
    if (a > 0) {
        printf("ta liczba jest dodatnia\n");
    } else if (a < 0) {
        printf("ta liczba jest ujemna\n");
    } else {
        printf("ta liczba jest rowna zeru\n");
    }

}

//napisz funkcje ktora przyjmie rok i wydrukuje czy jest przestepny czy nie
void isLeap() {
    int year;
    printf("podaj rok\n");
    scanf("%i", &year);
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

void printEvenNumbers() {
    int from, to;
    printf("podaj poczatek zakresu\n");
    scanf("%i", &from);
    printf("podaj koniec zakresu\n");
    scanf("%i", &to);
    for (int number = from; number <= to; ++number) {
        if (number % 2 == 0) {
            printf("%i\n", number);
        }
    }
}

void isLetter(char a) {
    int code = (int) a;
    if (code > 64 && code < 91) {
        printf("%c jest litera\n", a);
    } else if (code > 96 && code < 123) {
        printf("%c jest litera\n", a);
    } else {
        printf("%c nie jest litera\n", a);
    }
}

int findMinimum(int x[], int size) {
    int min = x[0];
    for (int f = 0; f < size; f++) {
        if (x[f] < min) {
            min = x[f];
        }
    }
    return min;
}

int main() {
    //checkValue();
    //isLeap();
    //printEvenNumbers();
    //isLetter('');
    int d[] = {2, 7, 6, 8, -10, 9};
    int size = sizeof d / 4;
    int result = findMinimum(d, size);
    printf("min = %i", result);
    return 0;
}