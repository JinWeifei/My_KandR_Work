#include <stdio.h>
#define MAXLINE 1000
/*本程序将打印多行输入中最长的一行以及其相反顺序。以'a'为结束输入*/
int getlines(char line[], int maxline);

void copy(char to[], char from[]);

void change(char to[], char from[], int len);

main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    char reverses[MAXLINE];

    max = 0;
    while ((len = getlines(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
            change(reverses,longest,len);
        }
    if (max > 0)
        printf("%s%s", longest,reverses);
    return 0;
}

int getlines(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != 'a' && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]){
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

void change(char to[], char from[], int len){
    int i;

    i = 0;
    while ((to[i] = from[len - 1 - i]) != '\0')
        ++i;
}