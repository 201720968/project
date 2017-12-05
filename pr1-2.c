#include<stdio.h>

int sam[3][3]={{0}};

void intro_rule();
int find_win(void);
int draw_game(void);

int main(void)
{
    int i,j;
    int num;
    int a=2;
    int b=2;
    int c=2;
    int end;

    intro_rule();

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sam[i][j]=0;
        }
    }
    while(1)
    {
        printf("p1 turn! \n ");
        printf("enter the number! \n");
        scanf("%d",&num);
        if(num==0)
        {
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    printf("%5d",sam[i][j]);
                }
                printf("\n");
            }
        }
        if(num==1) 
        {
            if(a<=-1)
            {
                printf("it's your mistake. your turn is gone. \n");
            }
            sam[a][num-1]=1;
            a--;
        }
        if(num==2)
        {
            if(b<=-1)
            {
                printf("it's your mistake. your turn is gone. \n");
            }
            sam[b][num-1]=1;
            b--;
        }
        if(num==3)
        {
            if(c<=-1)
            {
                printf("it's your mistake. your turn is gone. \n");
            }
            sam[c][num-1]=1;
            c--;
        }
        if((num!=1)&&(num!=2)&&(num!=3)&&(num!=0))
        {
            printf("it's your mistake. your turn is gone. \n");
        }
        end=find_win();
        if(end==1)
        {
            printf("it's p1's victory!\n");
            break;
        }
        end=draw_game();
        if(end==2)
        {
            printf("it's draw! \n");
            break;
        }


        printf("p2 turn! \n");
        printf("enter the number! \n");
        scanf("%d",&num);
        if(num==0)
        {
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    printf("%5d",sam[i][j]);
                }
                printf("\n");
            }
        }
        if(num==1)
        {
            if(a<=-1)
            {
                printf("it's your mistake. your turn is gone, \n");
            }
            sam[a][num-1]=2;
            a--;
        }
        if(num==2)
        {
            if(b<=-1)
            {
                printf("it's your mistake. your turn is gone. \n");
            }
            sam[b][num-1]=2;
            b--;
        }
        if(num==3)
        {
            if(c<=-1)
            {
                printf("it's your mistake. your turn is gone. \n");
            }
            sam[c][num-1]=2;
            c--;
        }
        if((num!=0)&&(num!=1)&&(num!=2)&&(num!=3))
        {
            printf("it's your mistake. your turn is gone. \n");
        }
        end=find_win();
        if(end==1)
        {
            printf("it's p2's victory!\n");
            break;
        }
        end=draw_game();
        if(end==2)
        {
            printf("it's draw!\n");
            break;
        }
    }
}
void intro_rule()
{
    int i,j;
    printf("HELLO!");
    printf("GAME : BBM(Blind Bottom Mok)");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("rule :");
    printf("\n");
    printf("\n");
    printf("game map :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",sam[i][j]);
        }
        printf("\n");
    }
    printf("you can't see this map usually.");
    printf("\n");
    printf("firtst player name: p1\n");
    printf("second player name: p2\n");
    printf("p1 can put 1\n");
    printf("p2 can put 2\n");
    printf("p1 or p2 can enter 1,2,3,0.\n");
    printf("if pl or p2 enter n(0,1,2,3),1 or 2 could be in n(0,1,2,3) row of the lowest column that should have 0. if there is 1 or 2, your number go to directly above.");
    printf("\n ex)");
    printf("if p1 enter 1. \n");
    sam[2][0]=1;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",sam[i][j]);
        }
        printf("\n");
    }
    printf("then p2 enter 1.\n");
    sam[1][0]=2;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",sam[i][j]);
        }
        printf("\n");
    }
    printf("you ready? let's get it! \n");
}
int find_win(void)
{
    int a=0;
    int i;
    for(i=0;i<3;i++)
    {
        if((sam[i][0]==1)&&(sam[i][1]==1)&&(sam[i][2]==1))
        {
            a=1;
        }
        if((sam[i][0]==2)&&(sam[i][1]==2)&&(sam[i][2]==2))
        {
            a=1;
        }
        if((sam[0][i]==1)&&(sam[1][i]==1)&&(sam[2][i]==1))
        {
            a=1;
        }
        if((sam[0][i]==2)&&(sam[1][i]==2)&&(sam[2][i]==2))
        {
            a=1;
        }

    }
    if((sam[0][0]==1)&&(sam[1][1]==1)&&(sam[2][2]==1))
    {
        a=1;
    }
    if((sam[0][0]==2)&&(sam[1][1]==2)&&(sam[2][2]=2))
    {
        a=1;
    }
    if((sam[2][0]==1)&&(sam[1][1]==1)&&(sam[0][2]==1))
    {
        a=1;
    }
    if((sam[2][0]==2)&&(sam[1][1]==2)&&(sam[0][2]==2))
    {
        a=1;
    }
    return (a);
}
int draw_game(void)
{
    int a=0;
    if((sam[0][0]==1)&&(sam[0][1]==1)&&(sam[0][2]==2))
    {
        a=2;
    }
    if((sam[0][0]==1)&&(sam[0][1]==2)&&(sam[0][2]==1))
    {
        a=2;
    }
    if((sam[0][0]==2)&&(sam[0][1]==1)&&(sam[0][2]==1))
    {
        a=2;
    }
    if((sam[0][0]==2)&&(sam[0][1]==2)&&(sam[0][2]==1))
    {
        a=2;
    }
    if((sam[0][0]==2)&&(sam[0][1]==1)&&(sam[0][2]==2))
    {
        a=2;
    }
    if((sam[0][0]==1)&&(sam[0][1]==2)&&(sam[0][2]==2))
    {
        a=2;
    }

    return (a);

}
