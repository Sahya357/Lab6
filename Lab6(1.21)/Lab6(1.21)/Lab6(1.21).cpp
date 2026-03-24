#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukrainian");
	int correct = 1;
  
    while (correct == 1) {
        int rowCount = 4, colCount = 5;
        int corCorect = 1;
		int beginCor = 1;
       
        while (beginCor == 1)
        {
            printf("Введіть розмір масиву:\n");
            scanf_s("%d %d", &rowCount, &colCount);
            if (rowCount <= 0 || colCount <= 0) {
                printf("Невірний розмір масиву. Спробуйте ще раз.\n");
            }
            else {
                beginCor = 0;
			}
        }
        int a[100][100];
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
        while (corCorect == 1) {
            printf("Введіть координати першого елемента (i1 j1): ");
            scanf_s("%d %d", &i1, &j1);

            printf("Введіть координати другого елемента (i2 j2): ");
            scanf_s("%d %d", &i2, &j2);
            if (i1 < 0 || i1 >= rowCount || j1 < 0 || j1 >= colCount ||
                i2 < 0 || i2 >= rowCount || j2 < 0 || j2 >= colCount) {
                printf("Невірні координати. Спробуйте ще раз.\n");
            }
            else {
                corCorect = 0;
			}
        }
        int x = a[i1][j1];
        int y = a[i2][j2];

        int max;

        if (x > y)
            max = x;
        else
            max = y;

        printf("max = %d\n", max);
		printf("Бажаєте продовжити? (1 - так, 0 - ні): ");
		scanf_s("%d", &correct);
    }
}
