//big matrix small matrix
#include<stdio.h>
#include<stdlib.h>

int lmat[20][20],smat[10][10],s,l;
int k=0;
void check(int a,int b)
{
    int flag=1;
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if(smat[i][j] != lmat[a+i][b+j])
            {flag=0; break;}
        }
    }
    if (flag == 1)
    k++;
}



int main(void)
{
printf("Enter size for large and small matrix:\n");;
scanf("%d %d",&l,&s);
for (int i = 0; i < l; i++)
{
    for (int j = 0; j < l; j++)
    {
        lmat[i][j]=rand()%2;
        printf("%d ",lmat[i][j]);
    }
    printf("\n");
}
printf("Enter elements for small matrix\n");
for (int i = 0; i < s; i++)
{
    for (int j = 0; j < s; j++)
    {
        scanf("%d",&smat[i][j]);
    }
}

for (int i = 0; i <  l-s+1; i++)
{
    for (int j = 0; j < l-s+1; j++)
    {
            if(smat[0][0] == lmat[i][j])
            {
                check(i,j);
            }
    }
}
printf("occurence is:%d\n",k);
return 0;
}
