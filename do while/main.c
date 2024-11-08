#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sum = 0, n;
   do
    {
    printf("the next number:");
    scanf("%d",&n);
   sum= sum+n;
    }
    while (sum<=10);
    return 0;
}
