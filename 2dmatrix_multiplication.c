#include<stdio.h>
#include<conio.h>
void main()
{
int a[25][25],b[25][25],c[25][25],row1,row2,col1,col2,i,j,k;
clrscr();
printf("Enter row and column for matrix 1\n");
scanf("%d%d",&row1,&col1);
printf("\nEnter row and column for matrix 2\n");
scanf("%d%d",&row2,&col2);
if(col1==row2)
{
printf("Enter the value for matrix 1\n");
for(i=0;i<row1;i++)
{
for(j=0;j<col1;j++)
{
printf("Enter data ");
scanf("%d",&a[i][j]);
}
}
printf("\nEnter the value for matrix 2\n");
for(i=0;i<row2;i++)
{
for(j=0;j<col2;j++)
{
printf("Enter data ");
scanf("%d",&b[i][j]);
}
}
for(i=0;i<row1;i++)
{
for(j=0;j<col2;j++)
{
c[i][j]=0;
for(k=0;k<col1;k++)
{
c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
}
}
}
printf("Value of first matrix \n");
for(i=0;i<row1;i++)
{
for(j=0;j<col1;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("Value of second matrix \n");
for(i=0;i<row2;i++)
{
for(j=0;j<col2;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
printf("Multiplication of first and second matrix \n");
for(i=0;i<row1;i++)
{
for(j=0;j<col2;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}

}
else
{
printf("Multiplication of matrix is not possible ");
}

getch();
}
