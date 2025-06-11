#include <stdio.h>

#define ROWS 2
#define COLS 3

void squareElements(int *arr, int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            int idx = i * cols + j;
            arr[idx] = arr[idx] * arr[idx];
        }
    }
}

int main()
{
    int arr[ROWS][COLS];
    int i, j;

    printf("Enter elements of %dx%d array:\n", ROWS, COLS);

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    squareElements((int *)arr, ROWS, COLS);

    printf("Array after squaring elements:\n");

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}