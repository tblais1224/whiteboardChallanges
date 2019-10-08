#include <stdio.h>

void print(int n, int y)
{
    char* hashtags = "#";
    if (n > 1)
    {
        print(n - 1, y + 1);
    };
    for (int i = y; i > 0; i--)
    {
        printf(" ");
    };
    for (int i = 1; i <= n; i++)
    {
        printf("%s", hashtags);
    };
    printf("  ");
    for (int i = 1; i <= n; i++)
    {
        printf("%s", hashtags);
    };
    printf("\n");
};

int main(void)
{
    int x = -1;
    int zero = 0;
    printf("Please input a number from 1 to 8: ");
    scanf("%d", &x);
    if (x < 1 || x > 8)
    {
        return main();
    };
    print(x, zero);
};