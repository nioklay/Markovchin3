#include <stdio.h>
#include <conio.h>

int main()
{
  
//Вычислить значение å i! для i, изменяющихся от 1 до n. 
//Воспользоваться соотношением 
//å i! = 1 + 1*2 + 1*2*3 +...+ 1*2*3*...*n = 1+2*(1+3*(1+ +n*(1)...)

  int i,n,r,t,y,sum,sum1;
  scanf("%d",&n);
  r = 1, sum = 0, sum1 = 1;t = 0;
  for (i=1; i<=n; i++)
    {
      r = 1*i;
      y *= r; 
      sum+=y;
    }
  for (i=2; i<=n; i++)
    {
      t = 1+i;
      sum1 *= t; 
    }
  if (sum == sum1)
    {
      printf("%d",sum1);
    }
  else
    {
      printf("Doesn't fit");
    }
}