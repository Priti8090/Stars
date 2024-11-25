#include <stdio.h>
void star1(int n)
{
    int j,i;
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=(n+1);j++)
        {
            if(j>=((n+1)-i))
            printf(" *");
            else
            printf("  ");
        }
        printf("\n");
    }
}
void star2(int n)
{
    
    int j,i;
    for(i=0;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}
void star3(int n)
{
    int j,i;
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=((n+1)+5);j++)
        {
            if(((n+1)-i)<=j && j<=((n-1)+i))
            printf(" *");
            else
            printf("  ");
        }
        printf("\n");
    }
}
void star4(int n)
{ 
    int j,i;
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=(n+1);j++)
        {
            if(j<=(i+1))
            printf(" *");
            else
            printf("  ");
        }
        printf("\n");
    }
     
}
void star5(int n)
{ int i,j;
   for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {  
           
            printf("  %d",i);
           
        }
        printf("\n");
         
    }
    
}
void star6(int n)
{
    int j,i;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=(n+6);j++)
        {
            if((n-i)<=j && j<=(i+(n-6)))
            {
                printf(" %d",i);
            }
            else
            printf("  ");
        }
        printf("\n");
    }
}
void star7(int n)
{
    int j,i;
    for(i=1;i<=(n+1);i++)
    {
        for(j=0;j<=(n+6);j++)
        {
            if((i-(n-6))<=j && j<=((n+4)-i))
            printf(" *");
            else
            printf("  ");
        }
        printf("\n");
    }
}

void star9(int n)
{
    int j,i;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
   
            printf(" *");
           
        }
        printf("\n");
    }
}
void star10(int n)
{
int j,i;
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=((n+1)+5);j++)
        {
            if(((n+1)-i)<=j && j<=((n-1)+i))
            printf(" *");
            else
            printf("  ");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=(n+6);j++)
        {
            if((i-(n-6))<=j && j<=((n+4)-i))
            printf(" *");
            else
            printf("  ");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    star1(n);
    printf("\n\n");
    star2(n);
     printf("\n\n");
     star3(n); 
     printf("\n\n");
     star4(n);
      printf("\n\n");
     star5(n);
      printf("\n\n");
     star6(n);
      printf("\n\n");
     star7(n);
      printf("\n\n");
      star9(n);
       printf("\n\n");
      star10(n);
       printf("\n\n");
    return 0;
}
