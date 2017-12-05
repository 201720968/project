#include<stdio.h>

int sam[3][3]={{0}};

void main_func(int player,int number);

int main(void)
{
    int num;
    int pl;
    while(1)
    {
        pl=1;
        printf("p1 turn! \n");
        printf("enter the number! \n");
        scanf("%d",&num);
        main_func(pl,num);
        pl=2;
        printf("p2 turn! \n");
        printf("enter the number! \n");
        scanf("%d",&num);
        main_func(pl,num);

    }
}

void main_func(int player, int number)
{
    static int a=2;
    static int b=2;
    static int c=2;
    int i,j;
    if(number==0)
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
    if(number==1)
    {
        if(a<=-1)
        {
            printf("mistake. again.\n");
            scanf("%d",&number);
            main_func(player,number);
        }
        sam[a][number-1]=player;
        a--;
    }
    if(number==2)
    {
        if(b<=-1)
        {
            printf("mistake. again.\n");
            scanf("%d",&number);
            main_func(player,number);
        }
        sam[b][number-1]=player;
        b--;
    }
    if(number==3)
    {
        if(c<=-1)
        {
            printf("mistake. again.\n");
            scanf("%d",&number);
            main_func(player,number);
        }
        sam[c][number-1]=player;
        c--;
    }
    if((number!=0)&&(number!=1)&&(number!=2)&&(number!=3))
    {
        printf("mistake. again.\n");
        main_func(player,number);
    }

}
