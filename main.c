#include <stdio.h>
#include <math.h>

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

void swap(int *f, int *i) {
    int temp = *f;
    *f = *i;
    *i = temp;
}

void bubbleSort(int a[], int size) {
    int i, j;
    for (i = 0; i < size - 1; i++)

        for (j = 0; j < size - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);
}

void array(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

double getCSideLength(double a, double b) {
    return sqrt(a * a + b * b);
}

double netToGross(double netValue, double taxRate) {
     return netValue * (taxRate + 1);
}

double calculateInvestmentValue(double capital, double months, double yearlyRate) {
    return capital * (yearlyRate * (months / 12)) + capital;
}

int main() {
    //checkValue();
    //isLeap();
    //printEvenNumbers();
    //isLetter('');
    //int d[] = {2, 7, 6, 8, -10, 9};
    //int size = sizeof d / 4;
    // int result = findMinimum(d, size);
    //printf("min = %i", result);
//    int arr[] = {64, 34, 25, 12, 22, 11, 90, 76, 23, 87, 97, 31, 54};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    bubbleSort(arr, size);
//    printf("Sorted array: \n");
//    array(arr, size);
//    printf("%lf", getCSideLength(6, 4));
//    printf("%lf", netToGross(1460.23, 0.23));
    printf("%lf", calculateInvestmentValue(1000, 6, 0.1));
    return 0;
}