/* 计算y=\frac{1}{100\times100} +\frac{1}{200\times200} +\frac{1}{300\times300} +  \dots + \frac{1}{m\timesm} */

#include<stdlib.h>
/* #include<conio.h> */
#include<curses.h>
#include<stdio.h>

double fun(int m)
{
  double y=0,d;
  int i;
  for(i=100;i<=m;i+=100)
    {
      d=(double)i*(double)i;
      y+=1.0/d;
    }
  return(y);
}

void main()
{
  int n=2000;
  system("CLS");
  printf("\n Thef result is %1f\n",fun(n));
}
