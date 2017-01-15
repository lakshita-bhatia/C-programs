#include<stdio.h>
int n;
a = (int*)malloc(sizeof(int)*n);    
int main(void)
{
    int ch;
    printf("Enter num of elements\n");
    scanf("%d",&n);
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
