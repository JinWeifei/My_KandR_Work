#include <stdio.h>

main() {

/* 1.5.1 文件复制
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
*/

    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%1d\n", nc);

        /*尝试打印EOF
        printf("%f",EOF);
        printf("%d",EOF);
        putchar(EOF);
        */
}
