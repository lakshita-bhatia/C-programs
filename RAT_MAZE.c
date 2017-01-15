#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int MAZE[100][100], final[100][100],N,M,flag=0;

void printM()
{
    int x,y;
    for(x=1;x<=N;x++)
    {
        for(y=1;y<=M;y++)
        {
            printf("%d ",final[x][y]);
        }
        printf("\n");
    }
    sleep(1);
    system("clear");
}

void GEN(int i,int j)
{
    printM();
    if(MAZE[i][j]==0)
        return;

    if(i==N && j==M)
    {
        flag=1;
        final[i][j]=1;
        return;
    }

    if(i<N)
    {
        final[i][j]=1;
        GEN(i+1,j);
        if(!flag)
            final[i][j]=0;
    }

    if(j<M)
    {
        final[i][j]=1;
        GEN(i,j+1);
        if(!flag)
            final[i][j]=0;
    }

}

int main()
{
    int x,y;
    printf("Enter the dimension of Maze\n");
    scanf("%d %d",&N,&M);
    printf("Enter the Maze structure\n");
    for(x=1;x<=N;x++)
    {
        for(y=1;y<=M;y++)
        {
            scanf("%d",&MAZE[x][y]);
        }
    }

    GEN(1,1);


    if(!flag)
        printf("Path not possible\n");
    else
    {
        printM();
        for(x=1;x<=N;x++)
        {
            for(y=1;y<=M;y++)
            {
                printf("%d ",MAZE[x][y]);
            }
            printf("\n");
        }
        printf("Path is possible\n");

    }
    return 0;
}
