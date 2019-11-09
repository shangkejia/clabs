#include<stdio.h>
int main()
{
  unsigned int bit, b,max;
  bit=1;
  b=0;
  max=bit;
  //左移两位小于0时结束设共有b位 1左移N次后，超出限制被舍弃，左移b-1次时，1处于正负位，所以左移b-2次时停止，即bit<<2==0
  while((bit<<2)!=0)
  {
    //第N次左移，产生N+1位为1，其他位为0的值，把他们相加得所有位都是1的值,即最大值
    bit=bit<<1;
    b=b+1;
    max=max+bit;
  }
  b=b+2;
  printf("%d  ",b);
  printf("%d\n",max);
}

