#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    for(r=1;r<=10;r=r+1)
    {
        int c;
        for(c=1;c<=10;c=c+1)
            printf("%d\t",r*c);
        printf("\n");
    }
    return 0;
}
