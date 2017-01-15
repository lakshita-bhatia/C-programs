#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int a[20],n;
void tree()
{
    int l=0,t,s=3,k,p;
    while(l < 3)
    {
        k=s;
        t=pow(2,l);
        p=t;
        for (int i = 0; i < t; i++)
        {
            for (int u = 1; u <= k ; u++)
                printf(" ");
            printf("%d", a[p]);
            p+=1;
            if(i==0)
            k=k+pow(2,s);
        }
        l++;
        s/=2;
        printf("\n\n");
    }
}
int main(void)
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for (int i = 1; i <= n; i++)
        scanf("%d",&a[i]);
    printf("\nB-TREE\n");
    tree();

    return 0;
}
