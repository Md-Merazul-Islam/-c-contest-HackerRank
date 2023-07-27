#include <stdio.h>

void update(int *a, int *b)
{
    // Complete this function
    int tmp = *a;
    *a = (*a + *b);
    if (tmp < *b)
    {
        *b = (tmp - *b) * -1;
    }
    else
    {
        *b= tmp-*b;
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int *pa = &a, *pb = &b;
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}