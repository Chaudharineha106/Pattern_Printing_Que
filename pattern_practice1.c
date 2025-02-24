#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
int i;
for(i=1;i<=n;i++)
{
   for(int j=1;j<=n;j++)
   {
        printf("%d",j);
       //printf("\t");
       //j=j+1;
   }
   printf("\n");
   //i=i+1;
}
getch();
}
