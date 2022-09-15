#include <stdio.h>

void checkValue(double a){
    if (a > 0) {
        printf("ta liczba jest dodatnia\n");
    } else if (a < 0) {
        printf("ta liczba jest ujemna\n");
    } else {
        printf("ta liczba jest rowna zeru\n");
    }

}

int main() {
    checkValue(-43);
    return 0;
}
