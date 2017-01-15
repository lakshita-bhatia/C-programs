#include<stdio.h>
#include<stdlib.h>
int a[50][50],k;
int p[50];
int check(int,int);
void queen(int n,int x)
{
    int flag,g;
    while (k < n)
    {
        flag=0;
        for (int i = x; i < n; i++)
        {
            if(check(i,k))
            {
                  g=i;
                  flag=1;
                  break;
            }
        }
        if (flag==0)
        {
            k--;
            int u = p[k];
            a[u][k]=0;
            queen(n,u+1);
        }
        else
        {
            a[g][k]=1;
            p[k]=g;
            x = 0;
            k++;
        }
    }
}
int check(int r,int c)
{
    for( int i=0;i<c;i++)
    {
        if (a[r][i]==1)
            return 0;
    }
    for (int j = 0; j < c; j++)
    {
        if(abs(r-p[j]) == abs(c-j))
            return 0;
    }
    return 1;
}
int main(void)
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if (n <= 3)
    {
        printf("Not Possible to place all queens\n");
        return 0;
    }
    queen(n,0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d |",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
