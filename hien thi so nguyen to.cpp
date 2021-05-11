
 
#include <stdio.h>
#include <math.h>
int main()
{
    for (int i = 2; i < 1000; i++)
    {
        int count = 0; // d?m s? u?c c?a a
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 0)
            printf("%d\n", i);
    }
}
 
