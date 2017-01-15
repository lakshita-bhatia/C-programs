#include<stdio.h>
int main (void)
{   
    int k,n,i,j; 
    printf("Enter number of different letters u want to see ;)  ");
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        printf("\n");
        for(i=65;i<=65+n-k-1;i++)
        {
            printf("%c",(char)i);
        }
        i--;
        for(j=0;j< 2*k-1;j++)
        {
            printf(" ");
        }
        if(k==0)
        i--;
        for(;i>=65;i--)
        {
            printf("%c",(char)i);
        }
    }
    printf("\n\n");
    return 0;
}
        
        
