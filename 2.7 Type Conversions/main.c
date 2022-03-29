#include <stdio.h>

unsigned long int next = 1;

unsigned int i = 1;

int rand(void)
{
    next = next * 1103515245 + 12345;
    return (unsigned int)(next/65535) % 32768;
}

void srand123(unsigned int seed)
{
    next = seed;
}

int main() {
    srand123(i);
    i = rand();
    printf("%d",i);
}



/*
int atoi(char s[])
{
    int i, n;

    n = 0;
    for(i = 0; s[i]>= '0' && s[i] <= '9'; ++i)
        n = 10 * n +(s[i] - '0');
    return n;
}
 */