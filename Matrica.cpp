#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian"); // русификация консоли
    int n, i, j;
    long  int mat[100][100], s = 0;
    printf_s("Введите размер матрицы (натурального значения)");
    scanf_s("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf_s("%ld", &mat[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (mat[i][j] % 2 == 1) s = s + mat[i][j];
            else if (mat[i][j] % 2 == -1) s = s + mat[i][j];
        }
    }
    printf_s("Ваша сумма нечетных элементов = %ld", s);
    return 0;
}