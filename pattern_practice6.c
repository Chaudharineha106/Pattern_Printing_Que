#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    //int i=1;

    for(int i=1;i<=n;i++)
    {
        int value=i;
        for(int j=1;j<=n;j++)
        {
            if(i>=j)
            {
                printf("%d",value);
                value = value+1;
            }
        }
        printf("\n");
        //printf("%d",count);
        //count=count+1;
        //printf("%d",count);
    }
    getch();
}


