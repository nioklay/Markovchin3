#include <stdio.h>
#include <conio.h>

#include <math.h>
int main()
{
  int na,ia,pa;
  pa=1;
  scanf("%d",&na);
  float xa,qa,ya,ta; xa = 5.0;ta=0;
  for (ia = 1; pa<=na; ia++)
    {
      qa = sin(xa);
      ya = pow(qa,pa);
      pa += 1;
      ta += ya;
    }
printf("%f",ta);

///////////////////

  int nb,ib,pb;
    pb=1;
    scanf("%d",&nb);
    float xb,qb,yb,tb; xb = 5.0;tb=0;
    for (ib = 1; pb<=nb; ib++)
      {
        qb = pow(xb,pb);
        yb = sin(qb);
        pb += 1;
        tb += qb;
      }
  printf("%f",tb);

//////////////////

        int ic,nc;
        scanf("%d",&nc);
        float xc,qc,yc,tc; xc = 5.0;tc=0.0;
        for (ic=1; ic<nc; ic++)
          {
            yc = sin(xc);
            qc = sin(yc);
            tc += yc;
            yc = qc;
          }
      printf("%f",tc);


}