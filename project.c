#include<stdio.h>

int sam[7][8]={{0}};

void intro_rule();
int find_win(int row,int col,int player);
int draw_game(void);
int main_func(int player,int number);

int main(void)
{
    int num;
    int pl;
    int end;
    int row;
    int i,j;

    intro_rule();

    for(i=0;i<7;i++)
    {
        for(j=0;j<8;j++)
        {
            sam[i][j]=0;
        }
    }

    while(1)
    {
        pl=1;
        printf("p1 turn! \n");
        printf("enter the number!(0,1,2,3,4,5,6,7) \n");
        scanf("%d",&num);
        row=main_func(pl,num);
        end=find_win(row,num-1,pl);
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
        pl=2;
        printf("p2 turn! \n");
        printf("enter the number!(0,1,2,3,4,5,6,7) \n");
        scanf("%d",&num);
        row=main_func(pl,num);
        end=find_win(row,num-1,pl);
        if(end==1)
        {
            printf("it's p2's victory!\n");
            break;
        }
        end=draw_game();
        if(end==2)
        {
            printf("it's draw! \n");
            break;
        }
    }
}

int main_func(int player, int number)
{
    static int a=6;
    static int b=6;
    static int c=6;
    static int d=6;
    static int e=6;
    static int f=6;
    static int g=6;
    int i,j;
    int end;
    int mis;
    if(number==0)
    {
        for(i=0;i<7;i++)
        {
            for(j=0;j<7;j++)
            {
                printf("%5d",sam[i][j]);
            }
            printf("\n");
        }
    }
    if(number==1)
    {
        if(a<=-1)
        {
            printf("mistake. again.\n");
            printf("enter the number!(0,1,2,3,4,5,6,7)");
            scanf("%d",&number);
            mis=main_func(player,number);
            return(mis);
        }
        sam[a][number-1]=player;
        a--;
        return(a+1);
    }
    if(number==2)
    {
        if(b<=-1)
        {
            printf("mistake. again.\n");
            printf("enter the number!(0,1,2,3,4,5,6,7)");
            scanf("%d",&number);
            mis=main_func(player,number);
            return(mis);
        }
        sam[b][number-1]=player;
        b--;
        return(b+1);
    }
    if(number==3)
    {
        if(c<=-1)
        {
            printf("mistake. again.\n");
            printf("enter the number!(0,1,2,3,4,5,6,7)");
            scanf("%d",&number);
            mis=main_func(player,number);
            return(mis);
        }
        sam[c][number-1]=player;
        c--;
        return(c+1);
    }
    if(number==4)
    {
        if(d<=-1)
        {
            printf("mistake. again. \n");
            printf("enter the number!(0,1,2,3,4,5,6,7)");
            scanf("%d",&number);
            mis=main_func(player,number);
            return(mis);
        }
        sam[d][number-1]=player;
        d--;
        return(d+1);
    }
    if(number==5)
    {
        if(e<=-1)
        {
            printf("mistake. again. \n");
            printf("enter the number!(0,1,2,3,4,5,6,7)");
            scanf("%d",&number);
            mis=main_func(player,number);
            return(mis);
        }
        sam[e][number-1]=player;
        e--;
        return(e+1);
    }
    if(number==6)
    {
        if(f<=-1)
        {
            printf("mistake. again. \n");
            printf("enter the number!(0,1,2,3,4,5,6,7)");
            scanf("%d",&number);
            mis=main_func(player,number);
            return(mis);
        }
        sam[f][number-1]=player;
        f--;
        return(f+1);
    }
    if(number==7)
    {
        if(g<=-1)
        {
            sam[g][7]=0;
            printf("mistake. again. \n");
            printf("enter the number!(0,1,2,3,4,5,6,7)\n");
            scanf("%d",&number);
            mis=main_func(player,number);
            return(mis);
        }
        sam[g][number-1]=player;
        g--;
        return(g+1);
    }
    if((number!=0)&&(number!=1)&&(number!=2)&&(number!=3)&&(number!=4)&&(number!=5)&&(number!=6)&&(number!=7))
    {
        printf("mistake. again.\n");
        printf("enter the number!(0,1,2,3,4,5,6,7)\n");
        scanf("%d",&number);
        end=main_func(player,number);
        return(end);
    }
}

void intro_rule()
{
    int i,j;
    int a;
    printf("HELLO! \n");
    printf("GAME : BBM(Blind Bottom Mok)\n");
    printf("please enter.");
    a=getchar();
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("rule :");
    printf("\n");
    printf("\n");
    printf("game map :\n");
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            printf("%5d",sam[i][j]);
        }
        printf("\n");
    }
    printf("you can't see this map usually.");
    printf("please enter.");
    a=getchar();
    printf("\n");
    printf("firtst player name: p1\n");
    printf("second player name: p2\n");
    printf("p1 can put 1\n");
    printf("p2 can put 2\n");
    printf("p1 or p2 can enter 1,2,3,0.\n");
    printf("if pl or p2 enter n(0,1,2,3,4,5,6,7),1 or 2 could be in n(0,1,2,3,4,5,6,7) row of the lowest column that should have 0. if there is 1 or 2, your number go to directly above.");
    printf("please enter.");
    a=getchar();
    printf("\n ex)");
    printf("if p1 enter 1. \n");
    sam[6][0]=1;
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            printf("%5d",sam[i][j]);
        }
        printf("\n");
    }
    printf("then p2 enter 1.\n");
    sam[5][0]=2;
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            printf("%5d",sam[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("if you want play game, please enter. \n");
    a=getchar();
}

int find_win(int row,int col,int player)
{
    int a;
    if((sam[row][col]==player)&&(sam[row][col+1]==player)&&(sam[row][col+2]==player)&&(sam[row][col+3]==player))
    {
        printf("1");
        a=1;
    }
    if((sam[row][col-1]==player)&&(sam[row][col]==player)&&(sam[row][col+1]==player)&&(sam[row][col+2]==player))
    {
        printf("2");
        a=1;
    }
    if((sam[row][col-2]==player)&&(sam[row][col-1]==player)&&(sam[row][col]==player)&&(sam[row][col+1]==player))
    {
        printf("3");
        a=1;
    }
    if((sam[row][col-3]==player)&&(sam[row][col-2]==player)&&(sam[row][col-1]==player)&&(sam[row][col]==player))
    {
        printf("4");
        a=1;
    }
    if((sam[row][col]==player)&&(sam[row+1][col]==player)&&(sam[row+2][col]==player)&&(sam[row+3][col]==player))
    {
        printf("5");
        a=1;
    }
    if((sam[row][col]==player)&&(sam[row-1][col+1]==player)&&(sam[row-2][col+2]==player)&&(sam[row-3][col+3]==player))
    {
        printf("6");
        a=1;
    }
    if((sam[row+1][col-1]==player)&&(sam[row][col]==player)&&(sam[row-1][col+1]==player)&&(sam[row-2][col+2]==player))
    {
        printf("7");
        a=1;
    }
    if((sam[row+2][col-2]==player)&&(sam[row+1][col-1]==player)&&(sam[row][col]==player)&&(sam[row-1][col+1]==player))
    {
        printf("8");
        a=1;
    }
    if((sam[row+3][col-3]==player)&&(sam[row+2][col-2]==player)&&(sam[row+1][col-1]==player)&&(sam[row][col]==player))
    {
        printf("9");
        a=1;
    }
    if((sam[row][col]==player)&&(sam[row-1][col-1]==player)&&(sam[row-2][col-2]==player)&&(sam[row-3][col-3]==player))
    {
        printf("10");
        a=1;
    }
    if((sam[row+1][col+1]==player)&&(sam[row][col]==player)&&(sam[row-1][col-1]==player)&&(sam[row-2][col-2]==player))
    {
        printf("11");
        a=1;
    }
    if((sam[row+2][col+2]==player)&&(sam[row+1][col+1]==player)&&(sam[row][col]==player)&&(sam[row-1][col-1]==player))
    {
        printf("12");
        a=1;
    }
    if((sam[row+3][col+3]==player)&&(sam[row+2][col+2]==player)&&(sam[row+1][col+1]==player)&&(sam[row][col]==player))
    {
        printf("13");
        a=1;
    }
    return (a);
}

int draw_game(void)
{
    int a;
    if((sam[0][0]==1)&&(sam[0][0]==2)&&(sam[0][1]==1)&&(sam[0][1]==2)&&(sam[0][2]==1)&&(sam[0][2]==2)&&(sam[0][3]==1)&&(sam[0][3]==2)&&(sam[0][4]==1)&&(sam[0][4]==2)&&(sam[0][6]==1)&&(sam[0][6]==1)&&(sam[0][5]==1)&&(sam[0][5]==2))
    {
        a=2;
    }
    return (a);
}


