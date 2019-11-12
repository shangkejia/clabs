#include <stdio.h>

int main()
{
    int a=11;
    int cnt=0;
    while(a >0){
        int b=1;
        if(a==b){
            cnt=cnt+1;
            a=a-b;
            printf("b:%d",b);
            printf("a:%d",a);
        }else{
            while((b<<1)<=a){
                b=b<<1;
                if((b<<1)>=a){
                    cnt=cnt+1;
                    a=a-b;
                }

        }
        printf("b:%d",b);
        printf("a:%d",a);
        }
        printf("cnt:%d\n",cnt);
    }
}
