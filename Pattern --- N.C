#include<stdio.h>
#include<conio.h>

int main()
{
    int r = 0, c = 0, i = 0, j = 0;

    printf("\n Enter Row & Coloumn Count = ");
    scanf("%d%d",&r,&c);

    for(i = 1; i <= r; i++)
    {
        for(j = 1; j <= c; j++)
        {
            if(j == 1 || j == c || i == j)
            {
                     printf(" * ");
            }
            else
            {
                     printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n Thanks...");
    getch();
    return 0;
}
