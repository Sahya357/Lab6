#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukrainian");

    int rowCount = 4, colCount = 5;
   
	printf("Введіть розмір масиву:\n");
	scanf_s("%d %d", &rowCount, &colCount);
    int a[3][4];
    for (int i = 0; i < rowCount; i++)
        for (int j = 0; j < colCount; j++) {
            printf("a[%d][%d]=", i, j);
            scanf_s("%d", &a[i][j]);
        }
    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < colCount; j++) {
            printf("a[%d][%d]=%d\t", i, j, a[i][j]);
        }
        printf("\n");
    }
    int i1, j1, i2, j2;

    printf("Введіть координати першого елемента (i1 j1): ");
    scanf_s("%d %d", &i1, &j1);

    printf("Введіть координати другого елемента (i2 j2): ");
    scanf_s("%d %d", &i2, &j2);

    int x = a[i1][j1];
    int y = a[i2][j2];

    int max;

    if (x > y)
        max = x;
    else
        max = y;

    printf("max = %d\n", max);
    
}