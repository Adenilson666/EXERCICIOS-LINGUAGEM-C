#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
 
int mdc (int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return mdc (b, a % b);
    }
}
 
void contador(int x, int y)
{
    int n1, n2;
    if (x == y)
    {
        return;
    }
    else
    {
        scanf ("%d %d", &n1, &n2);
        printf ("MDC(%d,%d) = %d\n", n1, n2, mdc(n1,n2));
 
        return contador (x + 1, y);
    }
 
}
int main ()
{
    int n;
 
    scanf ("%d", &n);
 
    contador (0, n);
 
    return 0;
}