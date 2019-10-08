#include <stdio.h>
#include <string.h>

int print(char string[100])
{
    int longestWord = 0;
    int checkWord = 0;

    for (int i = 0; i < 100; i++)
    {
        if (string[i] == ' ' || string[i] == 0)
        {
            checkWord = 0;
        }
        else
        {
            checkWord++;
        }

        if (longestWord < checkWord)
        {
            longestWord = checkWord;
        }
    }

    return longestWord;
}

int main(void)
{
    char string[100];
    printf("Please input a string to find its longest word length: ");
    gets(string);
    int result = print(string);
    printf("%d", result);
}
