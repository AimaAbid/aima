// inverted half pyramid of *
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<7;i++)
    {
        for(j=1;j<8-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;

}
