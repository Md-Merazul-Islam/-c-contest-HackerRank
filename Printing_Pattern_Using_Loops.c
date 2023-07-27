#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    // Complete the code t print the pattern.
    int size = 2 * n - 1;
    int st = 0;
    int end = size - 1;
    int arr[size][size];
    while (n > 0)
    {
        for (int i = st; i <= end; i++)
        {
            for (int j = st; j <= end; j++)
            {
                if (i == st || i == end || j == st || j == end)
                {
                    arr[i][j] = n;
                }
            }
        }
            st++;
            end--;
            n--;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}