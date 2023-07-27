#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void check(int n)
{

     const char* words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if(1<=n && n<=9)
    {
        printf("%s\n", words[n-1]);
    }
    else if(n%2==0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for (int i=a; i<=b; i++)
    {
        check(i);
    }

    return 0;
}
