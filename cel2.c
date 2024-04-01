#include <stdio.h>

main()
{
    float lower, upper, step;
    float cel, farh;

    lower = 0;
    upper = 30;
    step  = 1;

    cel = 0;
    while(cel<=upper){
        farh = (cel/(5.0/9.0))+32;
        printf("%3.0f %6.5f\n",cel, farh);
        cel = cel+ step;
    }
}