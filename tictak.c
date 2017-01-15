#include<stdio.h>
#include<stdlib.h>
char a[3][3];
void show()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(j<2)
            printf(" %c |",a[i][j]);
            else
            printf(" %c",a[i][j]);
        }
        printf("\n");
    }
}
int check(int x,int y)
{ int r=0,c=0,d1=0,d2=0;
    if (x==y)
    {
        if (a[0][0]==a[x][y] && a[1][1]==a[x][y] && a[2][2]==a[x][y])
        {
            d1+=3;
        }
    }
    else if( x+y == 2 )
    {
        if (a[0][2]==a[x][y] && a[1][1]==a[x][y] && a[2][0]==a[x][y])
        {
            d2+=3;
        }
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            if(a[i][y]==a[x][y])
            c++;
            if(a[x][i]==a[x][y])
            r++;
        }
    }
    if(c==3 || r==3 || d1==3 || d2==3)
    return 1;

    return 0;
}

int main(void)
{
    int k,x,y;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j]=' ';
        }
    }
    show();
    k=0;
    while(1)
    {
        printf("Player A,gv ur coordinates(x,y):\n");
        scanf("%d,%d",&x,&y);k++;
        a[x][y]='*';
        show();
        if(check(x,y))
        {
            printf("Player A wins\n");
            break;
        }
        printf("Player B,gv ur coordinates(x,y):\n");
        scanf("%d,%d",&x,&y);k++;
        a[x][y]='#';
        show();
        if(check(x,y))
        {
            printf("Player B wins\n");
            break;
        }
        if (k==9) {
            printf("Tie\n");
        }
    }
    return 0;
}
