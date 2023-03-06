#include <stdio.h>

#define SALESMEN 5
#define PRODUCTS 3

int main() {
    int sales[SALESMEN][PRODUCTS] = { 
        {10,20, 30}, 
        {15, 25, 35}, 
        {20, 30, 40}, 
        {25, 35, 45}, 
        {30, 40, 50}
        };
    int totalSalesman[SALESMEN] = {0};
    int totalProduct[PRODUCTS] = {0};


    for (int i = 0; i < SALESMEN; i++) {
        for (int j = 0; j < PRODUCTS; j++) {
            totalSalesman[i] += sales[i][j];
        }
        printf("Salesman %d total sales: %d\n", i+1, totalSalesman[i]);
    }


    for (int j = 0; j < PRODUCTS; j++) {
        for (int i = 0; i < SALESMEN; i++) {
            totalProduct[j] += sales[i][j];
        }
        printf("Product %d total sales: %d\n", j+1, totalProduct[j]);
    }

    return 0;
}
