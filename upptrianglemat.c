#include <stdio.h>
#include <stdlib.h>
int a[100][100];
int s[10][10];
int p,q,count;

void search()
{
    count = 0;
    for(int i  = 0;i <= q-p;i++)
    {
        for (int j = 0; j < q-p+2; j++)
        {
            for(int f = 0;f < p;f++)
            {
                if(a[i][j+f] == s[0][f])
                {
                    
                }
            }
        }
    }
    printf("OCCURENCE OF UPPER TRIANGLE:%d\n",count);
}
int main(void)
{
    printf("Enter the size of big array(qxq):\n");
    scanf("%d",&q);
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < q; j++)
        {
            a[i][j] = rand()%2;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the size of small array(pxp):\n");
    scanf("%d",&p);
    printf("Enter elements for smaller array:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%d",&s[i][j]);
        }
    }
    search();
    return 0;
}
