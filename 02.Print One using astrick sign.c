#include<stdio.h>
int main ()
{
    int row,col,h,w;
    printf ("Please enter the value of Height and Width(Odd number): ");
    scanf ("%d %d",&h,&w);
    for (row=1;row<=h;row++)
    {
        for (col=1;col<=w-2*col;col++)
        {
            printf ("*");
        }
        printf ("\n");
    }
}
