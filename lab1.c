#include <stdio.h>
int main(void)
{
    int celsius,fahr;
    int lower,upper,step;
    lower=0;
    upper=100;
    step=5;

    for(celsius=lower;celsius<=upper;celsius=celsius+5){
        fahr=9*celsius/5+32;
        printf("%d\t%d\n",celsius,fahr);
        fahr=fahr+step;
    }

    return 0;
}
