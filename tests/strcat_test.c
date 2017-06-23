#include <stdio.h>

char *cat(char *dest, const char *src)
{
    int a = 0;
    while(dest[a] != '\0')
    {
        a++;
    }
    int b = 0;
    while(src[b] != '\0')
    {
        dest[a] = src[b];
        a++;
        b++;
    }
    dest[a+1] = '\0';
    return dest;
}

char *ncat(char *dest, const char *src, int maxlen)
{
    int a = 0;
    while(dest[a] != '\0')
    {
        a++;
    }
    int b = 0;
    while(src[b] != '\0' && b < maxlen)
    {
        dest[a] = src[b];
        a++;
        b++;
    }
    dest[a+1] = '\0';
    return dest;
}

int main(void)
{
    char stuff[100] = "test ";
    cat(stuff, "this");
    printf("%s\n", stuff);
    char thing[100] = "test ";
    ncat(thing, "thiss", 4);
    printf("%s\n", thing);
    return 0;
}
