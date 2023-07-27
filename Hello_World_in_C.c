#include <stdio.h>
#include <string.h> 

int main()
{
    printf("Hello, World!   \n");
    char str[1000];
    fgets(str, sizeof(str), stdin); 

    printf("%s", str); 

    return 0;
}
