#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "mylib/mylib.h"

void VendingMachine() {
    printf("     ____________\n");
    printf("    |            |\n");
    printf("    |oooooooooooo|\n");
    printf("    |oooooooooooo|\n");
    printf("    |oooooooooooo|\n");
    printf("       |______|\n");
    printf("         |__|\n");
}

void DispenseGumball() {
    printf("\033[8;3H");
    printf("        (__)\n");
    printf("      //    \\\\ \n");
    printf("         o \n");
    printf(" Gumball Dispensed! \n");
    printf("\033[H");
}


void InsertCoin() {
    printf("\033[2;5H");
    printf("Insert Coin\n");
    printf("\033[H");
}

int main(void) {
    int s0 = 0, s1 = 0, b, o0 = 0, coin_counter = 0;
    while (true) {
        printf("\033[2J"); // Clear screen 
        printf("\033[H"); // Move cursor to upper left
        VendingMachine();
        if (o0 == 0) {
            InsertCoin();
        }
        if (coin_counter == 4) {
            VendingMachine();
            DispenseGumball();
        }
        printf("\033[3A"); // Move cursor up 3 lines
        printf("Enter coin input (0 for not inserting coin // 1 for inserting coin): ");
        scanf("%d", &b);

        if (b == 0 || b == 1) {
            if (b == 1) {
                coin_counter++;
            }
        } else {
            printf("Please enter a proper input (0 or 1)\n");
        }
    }

    return 0;
}
