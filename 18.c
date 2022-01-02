#include <stdio.h>
#include <conio.h>

int main()
{
  // a b
  double a=-1.0, sum=0.0;
  for (int i=1; i<=1000; i++)
    {
      a*=-1.0;
      sum+=a/i;
    }
printf("%f\n",sum);
  a=-1.0, sum=0.0;
  for (int i=1000; i>=1; i--)
    {
    a*=-1.0;
    sum+=a/i;
    }
printf("%f",sum);

  // c
          double t,r,sUm,sUm1;
          for (int i=1; i<=9999; i=i+2)
            {
              t=1/i;
              sUm+=t;
            }
          for (int i=2; i<=10000; i=i+2)
            {
              r=1/i;
              sUm1+=r; 
            }
        printf("%f",sUm1-sUm);

    //d
    double q,w,sm,sm1;
  for (int i=9999; i>=1; i=i-2)
    {
      w=1/i;
      sm+=q;
    }
  for (int i=10000; i>=2; i=i-2)
    {
      w=1/i;
      sm1+=w; 
    }
printf("%f",sm1-sm);

}