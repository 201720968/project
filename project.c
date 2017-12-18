#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"mainfun.h"

int sam[7][8]={{0}};


int main(void)
{
    int num;
    int pl;
    int end;
    int row;
    int i,j,k=1;
    char pic;
    srand((unsigned int)time(NULL));
    system("clear");
    printf("enter h or p.(h:see how to play,p:play the game)");// you can select seeing rule or playing game.
    scanf("%c",&pic);
    if(pic=='h')
    {
        load_data();
    }
    else if(pic=='p')
    {
        printf("let's play the game!\n");
    }

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
        printf("## %d turn ## \n",k);
        k++;
        printf("enter the number!(-1,0,1,2,3,4,5,6,7) \n");
        printf("if you want to see map, enter 0 \n");
        printf("if you want to go out, enter -1 \n");
        scanf("%d",&num);
        printf("\n");
        printf("\n");
        printf("\n");
        if(num==-1)
        {
            printf("Good Bye!\n");
            break;
        }
        row=main_func(pl,num);// you can get row by 'main_func'
        end=find_win(row,num-1,pl);
        if(end==1)
        {
            printf("it's your  victory!\n");
            for(i=0;i<7;i++)
            {
                for(j=0;j<7;j++)
                {
                    printf("%3d",sam[i][j]);
                }
                printf("\n");
            }
            break;
        }
        end=draw_game();
        if(end==2)
        {
            printf("it's draw! \n");
            for(i=0;i<7;i++)
            {
                for(j=0;j<7;j++)
                {
                    printf("%3d",sam[i][j]);
                }
                printf("\n");
            }
            break;
        }
        pl=2;
        num=(rand() % 7)+1;//computer enter random number
        printf("## %d turn ## \n",k);
        k++;
        printf("computer enter %d \n",num);
        row=main_func(pl,num);
        end=find_win(row,num-1,pl);
        if(end==1)
        {
            printf("it's computer victory!\n");
            for(i=0;i<7;i++)
            {
                for(j=0;j<7;j++)
                {
                    printf("%3d",sam[i][j]);
                }
                printf("\n");
            }
            break;
        }
        end=draw_game();
        if(end==2)
        {
            printf("it's draw! \n");
            for(i=0;i<7;i++)
            {
                for(j=0;j<7;j++)
                {
                    printf("%3d",sam[i][j]);
                }
                printf("\n");
            }
            break;
        }
    }
}

