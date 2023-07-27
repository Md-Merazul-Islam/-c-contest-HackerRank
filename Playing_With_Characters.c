#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    char str[1000];
    char sentence[100000];
    scanf("%c", &ch);
    scanf("%s", &str);
    getchar();
    fgets(sentence, sizeof(sentence), stdin);
    printf("%c\n", ch);
    printf("%s \n", str);
    printf("%s\n", sentence);

    return 0;
}