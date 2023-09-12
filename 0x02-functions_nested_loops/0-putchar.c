#include <stdio.h>

int main(void)
{
    char s[] = "_putchar";
    int i = 0;
    while (s[i] != '\0')
    {
        putchar(s[i]);
        i++;
    }
    putchar('\n');
    return (0);
}
