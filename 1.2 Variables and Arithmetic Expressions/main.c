#include <stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("This is fahr to celsius!\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0) ;
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    float fahr2, celsius2;
    int lower2, upper2, step2;

    lower2 = 0;
    upper2 = 150;
    step2 = 10;

    celsius2 = lower2;
    printf("This is celsius to fahr!\n");
    while (celsius2 <= upper2){
        fahr2 = celsius2*9.0/5.0 + 32.0 ;
        printf("%6.1f\t%3.0f\n", celsius2, fahr2);
        celsius2 = celsius2 + step2;
    }

}
