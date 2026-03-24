#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main() {
    setlocale(LC_ALL, "Ukrainian");
    int correct = 1;
    
    while (correct == 1) {
        int corCorrect = 1;
        int rowCount = 4, colCount = 5, Low = -100, High = 100;
        while (corCorrect == 1) {
            printf("Ведiть розмiр масиву:\n");
            scanf_s("%d%d", &rowCount, &colCount);
            if (rowCount > 0 && rowCount <= 10 && colCount > 0 && colCount <= 10 ) {
                corCorrect = 0;
            }
            else {
                printf("Розмiр масиву повинен бути вiд 1 до 10. Спробуйте ще раз.\n");
			}
        }
        int a[100][100];
        srand(time(0));
        for (int i = 0; i < rowCount; i++)
            for (int j = 0; j < colCount; j++)
                a[i][j] = Low + rand() % (High - Low + 1);
        for (int i = 0; i < rowCount; i++) {
            for (int j = 0; j < colCount; j++)
                printf("a[%d][%d]=%d\t", i, j, a[i][j]);
            printf("\n");
        }
        int unique[100];
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

        printf("\nКiлькiсть рiзних елементiв матрицi: %d\n", k);
        printf("Однаковi елементи в матрицi : \n");
        for(int i = 0; i < k; i++) {
            int count = 0;
            for (int j = 0; j < rowCount; j++) {
                for (int t = 0; t < colCount; t++) {
                    if (a[j][t] == unique[i]) {
                        count++;
                    }
                }
            }
            if (count > 1) {
                printf("%d зустрiчається %d разiв\n", unique[i], count);
            }
        
		}
        printf("Ще раз? (1 - так, 0 - нi)\n");
		scanf_s("%d", &correct);


    }
}
