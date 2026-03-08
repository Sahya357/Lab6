#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main() {
    setlocale(LC_ALL, "Ukrainian");
    const int rowCount = 4, colCount = 5, Low = -100,High = 100;
    int a[rowCount][colCount];
    srand(time(0));
    for (int i = 0; i < rowCount; i++)
        for (int j = 0; j < colCount; j++)
            a[i][j] = Low + rand() % (High - Low + 1);
    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < colCount; j++)
            printf("a[%d][%d]=%d\t", i, j, a[i][j]);
        printf("\n");
    }
    int unique[rowCount * colCount]; 
    int k = 0;

    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < colCount; j++) {
            int found = 0;
            for (int t = 0; t < k; t++) {
                if (a[i][j] == unique[t]) {
                    found = 1;
                    break;
                }
            }
            if (!found) {
                unique[k] = a[i][j];
                k++;
            }
        }
    }

    printf("\nКількість різних елементів матриці: %d\n", k);
    return 0;


}