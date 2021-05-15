#include <stdio.h>
#include <stdlib.h>

int main()
{
    int board[10][10],pos1,pos2;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
            board[i][j]=0;
    }
    printf("Enter starting position of the piece:");
    scanf("%d %d",&pos1,&pos2);
    board[pos1][pos2]=1;
    for(int i=0;i<10;i++)
    {
        printf("\n");
        for(int j=0;j<10;j++)
            printf("%d ",board[i][j]);
    }
    int org_pos1=pos1;
    int org_pos2=pos2;
    while(board[org_pos1][org_pos2]!=2)
    {

        int i=pos1;
        int j=pos2;
        if(i>=0&&i<10&&j>=0&&j<10)
        {
            if(i+3>=0&&i+3<10&&board[i+3][j]==0)
            {
                pos1=i+3;
                board[i+3][j]=1;
            }
            else if(j+3>=0&&j+3<10&&board[i][j+3]==0)
            {
                pos2=j+3;
                board[i][j+3]=1;
            }
            else if(i-3>=0&&i-3<10&&board[i-3][j]==0)
            {
                pos1=i-3;
                board[i-3][j]=1;
            }
            else if(j-3>=0&&j-3<10&&board[i][j-3]==0)
            {
                pos2=j-3;
                board[i][j-3]=1;
            }
            else if(i+2>=0&&j+2>=0&&i+2<10&&j+2<10&&board[i+2][j+2]==0)
            {
                pos1=i+2;
                pos2=j+2;
                board[i+2][j+2]=1;
            }
            else if(i-2>=0&&j-2>=0&&i-2<10&&j-2<10&&board[i-2][j-2]==0)
            {
                pos1=i-2;
                pos2=j-2;
                board[i-2][j-2]=1;
            }
            else if(i-2>=0&&j+2>=0&&i-2<10&&j+2<10&&board[i-2][j+2]==0)
            {
                pos1=i-2;
                pos2=j+2;
                board[i-2][j+2]=1;
            }
            else if(i+2>=0&&j-2>=0&&i+2<10&&j-2<10&&board[i+2][j-2]==0)
            {
                board[i+2][j-2]=1;
            }
            else
                board[org_pos1][org_pos2]=2;

        }

    }
    printf("\n%d %d",pos1,pos2);
    printf("\n");
    for(int i=0;i<10;i++)
    {
        printf("\n");
        for(int j=0;j<10;j++)
            printf("%d ",board[i][j]);
    }

}
