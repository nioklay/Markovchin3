#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int twin(int n) 
{
    if (n > 1) 
    {
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return 0;
        return 1;
    } 
    else
        return 0;
}
int main ()
{
    int p=3, n;
    scanf("%d", &n);
    while (p+2<n)
    {
        if (twin(p) && twin(p+2))
            printf("(%d %d) ", p, p+2);
        p+=1;
    }
}