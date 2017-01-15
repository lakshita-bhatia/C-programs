#include<stdio.h>
#include<stdlib.h>
int n,f=-1,l=-1;
int *a ;

void insert()
{
    if((f==0 && l== n-1) || (l == f-1))
        printf("Overflow!\n");
    else
    {
        if (l==-1) {
            f++;l++;
        }
        else if(l==n-1)
        l=0;
        else
        l++;
        printf("Enter element to insert:");
        scanf("%d",&a[l]);
    }
}
void show()
{
    if(l<f)
    {   for (int i = f; i < n; i++)
        printf("%d  ",a[i]);
        for (int i = 0; i <= l; i++)
        printf("%d  ",a[i]);
    }
    else if (l>f)
    for (int i = f; i <= l; i++)
        printf("%d  ",a[i]);
    else
        printf("%d  ",a[l]);
    printf("\n");
}
void rem()
{
    if(f==-1)
    printf("Underflow!\n");
    else
    {
        if(f==l)
        {f=-1;
        l=-1;}
        else
        f++;
    }
}
int main(void)
{
    int ch;
    printf("Enter num of elements\n");
    scanf("%d",&n);
    a = (int*)malloc(sizeof(int)*n);
    while(1)
    {
    printf("1.Insert\n2.Delete\n3.exit\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
                insert();
                show();
                break;
        case 2:
                rem();
                show();
                break;
        case 3:
                exit(0);
        default:
            printf("wrong choice!\n");
            continue;
    }
    }
    return 0;
}
