#include<stdio.h>
#include<conio.h>
void main()
{
int a[25][25],b[25][25],c[25][25],i,j,row1,row2,col1,col2;
clrscr();
printf("Enter the row  and column size of matrix a ");
scanf("%d%d",&row1,&col1);
printf("Enter the row  and column size of matrix b ");
scanf("%d%d",&row2,&col2);
if(row1==row2 && col1==col2)
{
printf("Enter value of array a\n");
for(i=0;i<row1;i++)
{
for(j=0;j<col1;j++)
{
printf("Enter data ");
scanf("%d",&a[i][j]);
}
}
printf("Enter value of array b\n");
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
for(j=0;j<col1;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("value of array a\n");
for(i=0;i<row1;i++)
{
for(j=0;j<col1;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("value of array b\n");
for(i=0;i<row2;i++)
{
for(j=0;j<col2;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
printf("Addition of array a & b is \n");
for(i=0;i<row1;i++)
{
for(j=0;j<col1;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
else
{
printf("Addition of matrix is not possible ");
}
getch();
}
