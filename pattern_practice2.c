#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int count=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=n)
            {
                printf("%d",count);
                count=count+1;

            }
        }
        //printf("%d",count);
        printf("\n");

    }
}
