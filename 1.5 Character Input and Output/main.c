#include <stdio.h>
#include "./cmake-build-debug/file_copy.c"

#define IN 1
#define OUT 2

main()
{
    /*
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != 'z'){
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
    */

/* 1.5.1 文件复制
    int c;
    while ((c = getchar()) != 'a') {
        putchar(c);
    }
*/
//尝试引用了外部函数
    file_copy();
/* 1.5.2 文件计数
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
*/

/* 1.5.3 行计数
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == "\n")
            ++nl;
    printf("%d\n", nl);
*/

        /*尝试打印EOF
        printf("%f",EOF);
        printf("%d",EOF);
        putchar(EOF);
        */
}
