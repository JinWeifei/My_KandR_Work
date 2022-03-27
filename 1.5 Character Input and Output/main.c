#include <stdio.h>

main() {
    int c;

    c = getchar();
    while ((c = getchar()) != EOF){
        putchar(c);

        /*尝试打印EOF
        printf("%f",EOF);
        printf("%d",EOF);
        putchar(EOF);
        */
    }
}
