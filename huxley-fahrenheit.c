#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main () 
{
    int F;
    double C;
    
    scanf ("%d", &F);
    
    C = (F - 32) / 1.8;
    
    printf ("%.2lf\n", C);
    
	return 0;
}