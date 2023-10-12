// ADDITION OF 2 MARICES :}

#include<stdio.h>
#include<conio.h>
void main(){
    int a[10][10], b[10][10],d[10][10],r,c,i,j;
    printf("Enter number of rows and columns:- ");
    scanf("%d%d",&r,&c);

    printf("ENter your first matrix:- ");
    for (i=0; i<r; i++)
    {
        for (j=0; j<r; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter your second matrix:- ");
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            d[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Sum of matices= \n");
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            printf("%d \t",d[i][j]);
        }
        printf("\n");
    }
    getch();
}